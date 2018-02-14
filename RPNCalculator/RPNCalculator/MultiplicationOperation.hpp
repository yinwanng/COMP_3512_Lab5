#include "AbstractOperation.hpp"
class MultiplicationOperation : public AbstractOperation
{
	static const char MULTIPLICATION_CODE = '*';
	MultiplicationOperation() : AbstractOperation(MULTIPLICATION_CODE) {};
	int perform(int a, int b) { return a * b; }
	~MultiplicationOperation() {};
};