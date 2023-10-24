#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>



using namespace std;

class Person
{
public:
	Person();
		Person(const char* str);//str ,초기화
		Person(const char* str, int yy, const char* pn);
		Person(const Person& psn);
		~Person();
public:
	void init(const char* str, int yy, const char* pn);
	void SetName(const char* str);
	void SetAge(const int yy);
	void Setphonenum(const char* pn);
	const char* GetName();
	int GetAge();
	char* GetphoneNum();

private:

	char* name;
	int age;
	char phonenum[15];

};

Person::Person()
{
	name = NULL;
	age = 0;
	phonenum[0] = '\0';
}

Person::Person(const char* str)
{
	name = NULL;
	age = 0;
	phonenum[0] = '\0';
	SetName(str);
}

Person::Person(const char* str, int yy, const char* pn)
{
	init(str, yy, pn);
}

Person::Person(const Person& psn)
{
	init(psn.name, psn.age, psn.phonenum);
}

Person::~Person()
{
	if (name != NULL) delete name;
}

void Person::init(const char* str, int yy, const char* pn)
{
	name = new char[strlen(str) + 1];
	strcpy(name, str);
	age = yy;
	strcpy(phonenum, pn);
}

void Person::SetName(const char* str)
{
	if (name != NULL)
	{
		delete[] name;
		name = new char[strlen(str) + 1];
		strcpy(name, str);
	}

}

void Person::SetAge(const int yy)
{
	age = yy;
}

void Person::Setphonenum(const char* pn)
{
	strcpy(phonenum, pn);
}

const char* Person::GetName()
{
	return name;
}

int Person::GetAge()
{

	return age;
}

char* Person::GetphoneNum()
{

	return phonenum;
}

int main()
{
	Person shiori1("주현 아가씨");
	shiori1.SetAge(20);
	shiori1.Setphonenum("222-2222-2222");
	
	Person shiori2("주현선생님", 30, "010-2356-0422");

	Person shiori3(shiori2);
	shiori3.SetName("주현 형");
	shiori3.SetAge(24);

	Person* p[] = { &shiori1,&shiori2,&shiori3 };

	for (int i{}; i < 3; i++)
	{
		cout << "이름 : " << p[i]->GetAge() << "나이 : " << p[i]->GetAge() << "전화번호 : " << p[i]->GetphoneNum() << endl;
	}

	return 0;
}
