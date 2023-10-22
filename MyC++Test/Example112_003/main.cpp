#include <iostream>

void swarp1(int &a, int &b);
void swarp2(int a, int b);


void main()
{
	int x = 50, y = 100;
	std::cout << "X = " << x << " Y = " << y << std::endl;
	swarp1(x, y);
	std::cout << "X = " << x << " Y = " << y << std::endl;
	swarp2(x, y);
	std::cout << "X = " << x << " Y = " << y << std::endl;
}

void swarp1(int& a, int& b)
{
	int Change;

	Change = a;
	a = b;
	b = Change;
	
}

void swarp2(int a, int b)
{
	int Change;

	Change = a;
	a = b;
	b = Change;
}
