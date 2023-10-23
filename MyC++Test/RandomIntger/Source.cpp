#include <iostream>
#include <random>

using namespace std;



class Random
{
public:
	Random();

	std::mt19937 mtrand;
	std::uniform_int_distribution<int>disk(0, 100);

	void ExtractNumber();
	void computation();
	void Result();

	~Random();

private:
	int NUm1[100] = { 0, },  Num2[100] = { 0, };
	int random = 0;
};

Random::Random()
{
	
}

void Random::ExtractNumber()
{
	for (int i = 0; i < 100; i++)
	{

	}
}

void Random::computation()
{
}

void Random::Result()
{
	
}

Random::~Random()
{

}

int main()
{


}