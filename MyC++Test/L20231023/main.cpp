#include <iostream>
#include <cstring>

using namespace std;

class Person
{
public:
	Person();
	Person(const Person& psn);
	~Person();

private:
	char* Name;
};

Person::Person()
{
	Name = new char[50];

}

Person::Person(const Person& psn)
{

}


Person::~Person()
{
	delete[]  Name;
}

void SetName(char* newname)
{
	strcpy(Name, newname);

}

void GetName(char* Namebuf)
{
	strcpy(Namebuf, newname);
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


}