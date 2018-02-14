#include "Operation.hpp"
class AbstractOperation : public Operation
{
	explicit AbstractOperation(const char& c) : operation_type(c) {}
	

private:
	char operation_type;
};