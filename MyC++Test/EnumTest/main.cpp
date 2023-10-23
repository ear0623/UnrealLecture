#include <iostream>

using namespace std;

enum MyEnum
{
	Red,Blue,Green,Yellow,white
};

enum class MyClass
{
	Red, Blue
};

enum class MyEnumClass
{
	Red,Blue
};

int main()
{
	MyEnum Color;

	MyClass Color1;

	MyEnumClass Color2;

	Color = Color::Red;

	return 0;
}