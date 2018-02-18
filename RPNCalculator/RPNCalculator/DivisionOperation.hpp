#pragma once
#include "AbstractOperation.hpp"
class DivisionOperation : public AbstractOperation
{
public:
	static const char DIVISION_CODE = '/';
	DivisionOperation() : AbstractOperation(DIVISION_CODE) {};
	int perform(int a, int b) { return a / b; }
	virtual ~DivisionOperation(){};
};