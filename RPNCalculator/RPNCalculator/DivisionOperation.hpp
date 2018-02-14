#include "AbstractOperation.hpp"
class DivisionOperator : public AbstractOperation
{
	static const char DIVISION_CODE = '/';
	DivisionOperator() : AbstractOperation(DIVISION_CODE) {};
	int perform(int a, int b) { return a / b; }
	~DivisionOperator(){};
};