#include <iostream>

using namespace std;

int main()
{
	int* p;
	p = new int;
	*p = { 1000 };
	delete p;
	float* pf = new float;
	*pf = 45.1;
	delete pf;

}