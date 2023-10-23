#include <iostream>

class Point
{
private:


public:
	int AddNum(int, int);
	void print();
};

int main()
{
	Point point;

	std::cout << "Hellow World!\n";

	int x = 65;

	std::cout << "\n" << x;

	char y = 65;

	std::cout << "\n" << y;

	char z = 66;

	std::cout << "\n" << z;

	float a = 3.141592;

	std::cout << "\n" << a;

	double b = 3.141592;

	std::cout << "\n" << b;

	char d = 'C';

	std::cout << "\n" << d;

	int MyMoney = 0;//변수 초기화
	
	int AddNumber = point.AddNum(10, 3);

	return 0;
}

int Point::AddNum(int num, int num2)
{

	return num+num2 ;
}

void Point::print()
{

}
