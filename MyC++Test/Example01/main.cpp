# include <iostream>

class Person
{
public:

	int age;
	char Name[10];
};

int main()
{
	Person Kim;
	Kim.age = 23;
	strcpy_s(Kim.Name, "sunghoon");
	std::cout << "�̸� : " << Kim.age << std::endl;
	std::cout << "���� : " << Kim.Name << std::endl;

	return 0;

}