#include <iostream>

class Point
{
public:

	

	void print();
	void SetXY(int x,int y);
	void This(char *str, int num);

	Point();

private:
	int Save_X;
	int Save_Y;
	
};


Point::Point()
{
	Save_X = 0;
	Save_Y = 0;

}

void Point::print()
{
	std::cout << "X : " << Save_X << std::endl;
	std::cout << "Y : " << Save_Y << std::endl;

}

void Point::SetXY(int x, int y)
{
	Save_X = x;
	Save_Y = y;
}

void Point::This(char *str, int num)
{
	char* name;
	int age;

	strcpy_s(name, str);
	age = num;
	
}



int main()
{
	Point point1;
	point1.SetXY(30, 100);
	point1.print();

	return 0;

}