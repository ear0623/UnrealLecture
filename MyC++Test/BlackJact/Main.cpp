#include <iostream>
#include <cstdlib>
#include <time.h>
#include "BlackJack.h"

using namespace std;

void main()
{
	BlackJack CardGame;

	CardGame.Init();
	CardGame.Suffle();
	CardGame.GiveCard();
	
	
}
