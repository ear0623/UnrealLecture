#include <iostream>

using namespace std;

class Point
{
private:

	int A, B;
	int Result;

public:

	void SumNumber(int X, int Y);
	void print();


};

void Point::SumNumber(int X, int Y)
{
	A = X;
	B = Y;
	Result = A + B;

	
}

void Point::print()
{
	cout << Result << endl;
}



int main()
{
	/*int Num1 = 0, Num2 = 10;
	int Sum = 0;
	Sum = Num1 + Num2;
	

	cout << Sum << endl;*/


	Point point;
	point.SumNumber(0, 10);
	point.print();



	return 0;
}

