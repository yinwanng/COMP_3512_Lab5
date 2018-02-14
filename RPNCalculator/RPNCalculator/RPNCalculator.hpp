#include <stack>
#include "AdditionOperation.hpp"
#include "SubstractionOperation.hpp"
#include "DivisionOperation.hpp"
#include "MultiplicationOperation.hpp"

class RPNCalculator
{
public:

private:
	int result;
	std::stack<int> stack;
	Operation * operation_type(int operation) 
	{
		switch (operation) {
		case '+':
			return new AdditionOperation;
			break;
		case '-': 
			return new SubstractionOperation;
			break;
		case '*':
			return new MultiplicationOperation;
			break;
		case '/':
			return new DivisionOperation;
		}
	}
};



