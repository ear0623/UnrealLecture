#include "ReadyAndEnd.h"

ReadyAndEnd::ReadyAndEnd()
{
	start = 1;
	end = 52;
	srand((unsigned int)time(NULL));
}

ReadyAndEnd::~ReadyAndEnd()
{
}

void ReadyAndEnd::SetRange(int PlayStart, int PlayEnd)
{
	start = PlayStart;
	end = PlayEnd;
}

int ReadyAndEnd::RandomNumber()
{
	
	int randomnumber = int(rand() % (end - start + 1));
	return randomnumber;
}
