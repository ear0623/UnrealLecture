#include <iostream>

class Myhouse
{
public:
	Myhouse();//������ => �����ʱ�ȭ int A "=0"; int A {0}//�յ��ʱ�ȭ
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