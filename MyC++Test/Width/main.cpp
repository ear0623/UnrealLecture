#include <iostream>

class Width_Class
{
	

public:

	Width_Class();


	~Width_Class();

	int Number(int InputNumber);
	void print();

private:
	int Number_width{ };

};

int main()
{
	Width_Class mainprotocall;

	//mainprotocall.Number(1);
	mainprotocall.print();

	


}



Width_Class::Width_Class()
{
}

Width_Class::~Width_Class()
{
}

int Width_Class::Number(int InputNumber)
{
	Number_width = InputNumber;
	
	return Number_width;
}

void Width_Class::print()
{
	/*std::cout.width(Number_width);
	std::cout << "*" << std::endl;*/
	for (int i{}; i<5; i++)
	{
		std::cout.width(5 - i);
		for (int j{}; j <= i; j++)
		{
			std::cout<<"*";
				std::cout << std::endl;
		}

	}

}
