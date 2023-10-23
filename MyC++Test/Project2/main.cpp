#include <iostream>

class Public
{
public:
	Public();
	int OverRiding(int, int, int);
	double OverRiding(double, double);
	void intprint();
	void doubleprint();


	~Public();

private:
	double  dou_Num1 {}, dou_Num2 {};

};

Public::Public()
{
	
}

int Public::OverRiding(int, int, int)
{
	//int in_Num1, in_Num2, in_Num3;
	
}

double Public::OverRiding(double, double)
{
	double  dou_Num1, dou_Num2;

	

}

void Public::intprint()
{

}

void Public::doubleprint()
{
	std::cout << dou_Num1 << "\n" << dou_Num2 << std::endl;
}


Public::~Public()
{
}

int main()
{
	Public main_public_class;
	main_public_class.OverRiding(1.45, 1.28);
	main_public_class.doubleprint();
}