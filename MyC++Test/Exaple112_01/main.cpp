#include <iostream>

void SetRoom(int& number, int floor);


void main()
{
	int room = 3;
	int floor = 3;
	SetRoom(room, floor);
	std::cout << floor << "�� ���̸� ���� ����" << room << "���Դϴ�." << std::endl;

}

void SetRoom(int& number, int floor)
{
	number = number * floor;
}
