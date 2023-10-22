#include <iostream>

void SetRoom(int& number, int floor);


void main()
{
	int room = 3;
	int floor = 3;
	SetRoom(room, floor);
	std::cout << floor << "층 집이며 방의 수는" << room << "개입니다." << std::endl;

}

void SetRoom(int& number, int floor)
{
	number = number * floor;
}
