#include <iostream>
#include <cstring>

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

class Person
{
public:
	Person();
	Person(const Person& psn);
	~Person();

	void SetName(const char* newname);
	void GetName(char* Namebuf) const;

private:
	char* Name;
};

Person::Person()
{
	Name = new char[50];
	Name[0] = '\n';

}

Person::Person(const Person& psn)
{
	Name = new char[strlen(psn.Name) + 1];
	strcpy(Name, psn.Name);
}


Person::~Person()
{
	delete[]  Name;
}

void Person::SetName(const char* newname)
{
	strcpy(Name, newname);

}

void Person::GetName(char* Namebuf) const
{
	strcpy(Namebuf, Name);
}



int main()
{
	int NUm1 = 0;
	char Star = '*';
	cin >> NUm1;
	for (int i = 0; i < NUm1; i++)
	{
		//cout << Star;
		for (int x = 0; x < i; x++)
		{
			//cout << Star;
		}
		//cout << endl;
	}

	Person* psn1 = new Person;
	psn1->SetName("Juhyun");
	Person* psn2 = new Person(*psn1);
	char name[50];
	psn2->GetName(name);
	cout << name << endl;

	delete psn1;
	delete psn2;
	return 0;


}