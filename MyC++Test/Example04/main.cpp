#include <iostream>

using namespace std

class Point {

private:
	int x, y;


public:

	Point();
	void MoveLeft();
	void MoveRight();
	void print();


};

int main()
{
	Point point_main;
	point_main.MoveLeft();

	return 0;
};

Point::Point()
{
	x = 50;
	y = 50;
	print();

}

void Point::MoveLeft()
{
	x -= 1;
	return print();
}

void Point::MoveRight()
{
	x += 1;
	return print();
}

void Point::print()
{
	cout << "X : "<< x <<endl;
}


