#include "AbstractOperation.hpp"
class AdditionOperation : public AbstractOperation
{
public:
	static const char ADDITION_CODE = '+';
	AdditionOperation() : AbstractOperation(ADDITION_CODE) {};
	int perform(int a, int b) { return a + b; }

};