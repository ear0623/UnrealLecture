#include <iostream>
#include <vector>

using namespace std;

#define COUNT	10


int main()
{
	char C = 'A';
	int Number = 123456789;
	int AppleColor =0; //Red =0;
	int AppleShape = 1;//Circle =1, Rectangle =0, Trinale =2;
	//float = 숫자*10^로 소수점을왔다갔다하는 원리

	int Korea = 100;
	int Mathmatics = 10;
	int English = 20;

	int Total = Korea+Mathmatics+English;
	float Average = (float)Total / 3.0f;
	
	//cout << (int)Average << endl;
	//cout << (int(Average + 0.5f)) << endl;//item %만들때 중요.


	int UserID[10] = {0,0,0,0,0,0,0,0,0,0};//int userID *int1

	//cout<< AppleColor << endl;

	int Num1 = 0;
	float Num2 = 0;
	char Num3 = 0;

	int playerX =1;
	int playerY =1;
	char shape = 'p';

	int array[10][10] =
	{
		{1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,1,1,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,1,1,1},
	};

	for (int i=0; i <10; i++)
	{

		for (int j=0; j < 10; j++)
		{

			//cout << array[i][j];
			
		}
		//cout << endl;
	}


	int Result {};//int Result = 0 ;
	

	for (int i{1}; i <= 100; i++)
	{
		Result += i;//Result = Result + i;
		
		
	}
	cout << Result << endl;
	
	int Result_EvenNumber{ 1 };

	for (int i = 1; i <= 100; i+=2)
	{
		Result_EvenNumber += i;
		
	}

	cout << Result_EvenNumber << endl;

	int Result_OddNumber{ 0 };

	for (int i = 1; i <= 100; i += 2)
	{
		Result_OddNumber += i;
		
	}

	cout << Result_OddNumber << endl;

	int Result_Three{ 0 };

	for (int i = 3; i <= 100; i += 3)
	{
		Result_Three += i;

	}

	cout << Result_Three << endl;

	int Result_four{ 4 };

	for (int i = 0; i <= 100; i += 4)
	{
		Result_four += i;

	}

	cout << Result_four << endl;

	int Result_Add_Sub{ 0 };
	int Sign = 1;

	for (int i = 1; i <= 100; i += 1)
	{
		Sign = Sign * -1;
		Result_Add_Sub = Result_Add_Sub+(Sign)*i;
		

	}

	cout << Result_Add_Sub << endl;
	//1. +1-2+3-4+5-6 (-1)*1+(-1)*1;
	//규칙을 찾고 제어변수를 

	int reulst_char;
	char Star = '*';
	for (int i = 0; i < 5; i++)//0은 배열 찾기용/
	{
		cout << Star;
	}
	cout << endl;

	for (int i{}; i < 5; i++)
	{
		//char Chari = '*';
		for (int j = 0; j < 5; j++)
		{
			char star = '*';
			cout << star;
		
		}
		cout << endl;
	}

	int Count_char = 0;
	cin >> Count_char;

	for (int i = 1; i < Count_char; i++)
	{
		cout << Star;
		for (int j = 1; j < i; j++)
		{
			cout << Star;
	
		}
		cout << endl;
	}


	vector<int> Item;
	Item.push_back(100);

	for (int i = 0; i < Item.size(); i++)
	{
		cout << Item[i] << endl;
	}

	//SIMD= 어쌤블리///intel SSE/ amd



	return 0;
}

