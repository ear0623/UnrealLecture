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
	std::cout << "이름 : " << Kim.age << std::endl;
	std::cout << "나이 : " << Kim.Name << std::endl;

	return 0;

}