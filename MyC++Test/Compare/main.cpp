#include <iostream>
#include <cstring>

using namespace std;

class Student {
public:
    Student();
    ~Student();
public:
    void setId(int num) {
        id = num;
    }
    void SetName(const char* str) {
        strncpy_s(name, str, 29); // Use strncpy to prevent buffer overflows
        name[29] = '\0'; // Ensure null-terminated string
    }
    int GetId() {
        return id;
    }
    const char* GetName() const {
        return name;
    }

private:
    int id;
    char name[30];
};

Student::Student() {
}

Student::~Student() {
}

enum Subjects {
    Math, English, Science
};

class Exam {
public:
    Exam();
    ~Exam();
public:
    void Setinfo(int id, const char* name, Subjects s, int num);
    int GetPoint() const {
        return point;
    }
    void GetResult(char* buf) const;

    Student student;

private:
    Subjects subject;
    int point;
};

Exam::Exam() {
}

Exam::~Exam() {
}

void Exam::Setinfo(int id, const char* name, Subjects s, int num) {
    student.setId(id);
    student.SetName(name);
    subject = s;
    point = num;
}

void Exam::GetResult(char* buf) const {
    const char* subname[] = { "¼öÇÐ", "¿µ¾î", "°úÇÐ" };
    sprintf(buf, "%s : %dÁ¡", subname[subject], point);
}

void PrintResult(const Exam& exam) {
    cout << exam.student.GetName() << endl;
    char buf[30];
    exam.GetResult(buf);
    cout << buf << endl;
}

double GetAvg(const Exam* exams, int num) {
    double sum = 0;
    for (int i = 0; i < num; i++) {
        sum += exams[i].GetPoint();
    }
    return sum / num;
}

int main() {
    Exam exams[3];
    exams[0].Setinfo(1, "È«±æµ¿", Math, 60);
    exams[1].Setinfo(1, "È«±æµ¿", English, 75);
    exams[2].Setinfo(1, "È«±æµ¿", Science, 88);

    PrintResult(exams[0]);
    PrintResult(exams[1]);
    PrintResult(exams[2]);
    cout << endl;
    cout << "Æò±Õ: " << GetAvg(exams, 3) << "Á¡" << endl;

    return 0;