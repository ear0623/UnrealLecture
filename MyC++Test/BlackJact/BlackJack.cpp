#include "BlackJack.h"
#include <iostream>


using namespace std;

BlackJack::BlackJack()
{
	CardType=0;
	Card[0] = {0};
	
}

BlackJack::~BlackJack()
{
}

void BlackJack::Init()
{
	srand((unsigned int)time(NULL));
}

void BlackJack::Suffle()
{
	

	for (int i = 0; i < 100; i++)
	{
		First = rand() % 52;
		Second = rand() % 52;

		Temp = Card[First];
		Card[First] = Card[Second];
		Card[Second] = Temp;


	}
	
}

void BlackJack::GiveCard()
{
	for (int i = 0; i < 4; i++)
	{
		CardType = (Card[i] / 13);

		if (CardType == 0)
		{
			cout << "¢¼";
		}
		else if (CardType == 1)
		{
			cout << "¢½";
		}
		else if (CardType == 2)
		{
			cout << "¢À";
		}
		else
		{
			cout << "¡Þ";
		}
		cout << endl;
	}
}

