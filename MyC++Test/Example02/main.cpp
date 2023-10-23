#include <iostream>

class Point
{
public:
	int x, y;
	void print();
	Point();

};

Point::Point()
{
	x = 100;
	y = 100;

}

void Point::print()
{
	std::cout << "X : " << x << "y : " << y << std::endl;
}

int main()
{
	Point point1;
	point1.x = 50;

	std::cout << "ÁÂÇ¥ : " << std::endl;
	point1.print();

	return 0;
}



