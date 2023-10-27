#pragma once

#include "MyHeader.h"




class BlackJack
{
public:
	BlackJack();
	~BlackJack();

	void Init();
	void Suffle();
	void GiveCard();
	
	

private:
	//suffle
	int Temp;
	int First;
	int Second;
	int Card[52];

	//CardData
	int CardType;
	

};

