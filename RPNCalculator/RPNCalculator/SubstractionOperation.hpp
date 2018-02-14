#include "AbstractOperation.hpp"
class SubstractionOperation : public AbstractOperation
{
public:
	static const char SUBTRACTION_CODE = '-';
	SubstractionOperation() : AbstractOperation(SUBTRACTION_CODE) {};
	int perform(int a, int b) { return a - b; }

};