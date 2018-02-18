#pragma once 
class Operation
{
public:
	Operation() {}
	virtual ~Operation() {};
	virtual char get_code() = 0;
	virtual int perform(int, int) = 0;
};


