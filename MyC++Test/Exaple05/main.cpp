#include <iostream>

using namespace std;

int max(int , int , int );

class Loop
{
public:

	void ForLoop();

private:

};

void Loop::ForLoop()
{
	int A = 0;

	for (size_t i = 0; i < 100; i++)
	{
		A = i;
		cout << A << endl;
	}
}


int main()
{
	int a, b, c =0;

	Loop loop_Main;

	loop_Main.ForLoop();


	cout << "���� 3���� �Է��ϼ���" << endl;

	cin >> a >> b >> c;

	int Max_main = max(a, b, c);

	
	cout << "���� ū ���� " << Max_main << "�Դϴ�" << endl;

	return 0;

}

int max(int a, int b, int c)
{
	int max;
	if (a < b)
	{
		max = b;
	}
	else
	{
		max = a;
	}
	if (max < c)
	{
		max = c;
	}

	return max;
}

