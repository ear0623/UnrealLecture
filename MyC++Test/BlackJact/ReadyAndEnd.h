#pragma once

#include "MyHeader.h"

class ReadyAndEnd
{
public:
	ReadyAndEnd();
	~ReadyAndEnd();
	//�� ����
	void SetRange(int PlayStart, int PlayEnd);
	//
	int RandomNumber();

private:
	int start;
	int end;
};

