#pragma once

#include "MyHeader.h"

class ReadyAndEnd
{
public:
	ReadyAndEnd();
	~ReadyAndEnd();
	//°ª º¯°æ
	void SetRange(int PlayStart, int PlayEnd);
	//
	int RandomNumber();

private:
	int start;
	int end;
};

