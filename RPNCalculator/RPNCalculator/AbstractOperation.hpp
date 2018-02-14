#include "Operation.hpp"
class AbstractOperation : public Operation
{
	AbstractOperation(const char& c) : operation_type(c) {}
	char get_code() const { return operation_type; }
	AbstractOperation() {};

private:
	char operation_type;
};