#include <iostream>

class MyTest
{

public:
	void Test(int i, int* p, int& r)
	{
		*p = 1950;
		r = 2066;
	}

};

int main()
{
	int a{}, b{}, c{};
	MyTest test;
	test.Test(a, &b, c);
	std::cout << "a : " << a << " b :" << b << " C : " << c << std::endl;
}