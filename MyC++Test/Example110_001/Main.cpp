#include <iostream>
#include <cstring>

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

class Student
{
public:
	Student();
	~Student();
public:
	void setId(int num)
	{
		id = num;

	}
	void SetName(char* str)
	{
		strcpy(name, str);
	}

	int GetId()
	{
		return id;
	}

	char* GetName() const
	{
		return (char*)name;
	}

private:
	int id;
	char name[30];

};

Student::Student()
{
}

Student::~Student()
{
}

enum Subjects
{
	Math, English, Science
};

class Exam
{
public:
	Exam();
	~Exam();
public:
	void Setinfo(int id, char* name, Subjects s, int num);
	int GetPoint() const
	{
		return point;
	}
	void GetResult(char* buf) const;

	Student student;

private:
	Subjects subject;
	int point;
};

Exam::Exam()
{
}

Exam::~Exam()
{
}

void Exam::Setinfo(int id, char* name, Subjects s, int num)
{
	student.setId(id);
	student.SetName(name);
	subject = s;
	point = num;

}

void Exam::GetResult(char* buf) const
{
	const char* subname[] ={ "¼öÇÐ","¿µ¾î","°úÇÐ" };
	//cout <<subname[subject]<<" : " << point<< "Á¡" << endl;


}

void PrintResult(const Exam& Exam)
{
	cout << Exam.student.GetName() << endl;
	char buf[30];
	Exam.GetResult(buf);
	cout << buf << endl;
}

double GetAvg(const Exam* Exam, int num)
{
	double sum = 0;
	for (int i{}; i < num; i++)
	{
		sum += Exam[i].GetPoint();
	}

	return sum / num;
}

int main()
{
	Exam Exam[3];
	//Exam[0].Setinfo(1, 'È«±æµ¿', Math, 60);
	//Exam[1].Setinfo(1, "È«±æµ¿", English, 75);
	//Exam[2].Setinfo(1, "È«±æµ¿", Science, 88);

	PrintResult(Exam[0]);
	PrintResult(Exam[1]);
	PrintResult(Exam[2]);
	cout << endl;
	cout << "Æò±Õ :" << GetAvg(Exam, 3) << "Á¡" << endl;

	return 0;
}
