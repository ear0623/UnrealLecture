#include <iostream>
#include <cstring>


class Person
{
public:
	Person();
	Person(const char* str);
	Person(const char* str, int yy, const char* pn);
	Person(const Person& psn);

	~Person();
	
	void init(const char* str, int yy, const char*pn);
	void setName(const char* str);


private:
	char* name;
	int age;
	char phonenum[15];

};

Person::Person()
{
}

Person::~Person()
{
	if (name != NULL)
	{
		delete[]  name;
	}
}


int main()
{
	

	return 0;
}