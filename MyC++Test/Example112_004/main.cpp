#include <iostream>

int& GetNumber();
int Num = 10;
int main()
{
	std::cout << GetNumber() << std::endl;
	std::cout << (GetNumber() = 150) << std::endl;
	std::cout << GetNumber() << std::endl;

	return 0;
	
}

int& GetNumber()
{
	return Num;
}
