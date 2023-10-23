#include <iostream>

class Myhouse
{
public:
	Myhouse();//생성자 => 변수초기화 int A "=0"; int A {0}//균등초기화
	Myhouse(int Number);
	
	int getroom();

	~Myhouse();

private:
	int room;
};

Myhouse::Myhouse()
{
	room = 0;
}

Myhouse::Myhouse(int Number)
{
	Number = room;
}


int Myhouse::getroom()
{

	return 0;
}

Myhouse::~Myhouse()
{
}

int main()
{

}