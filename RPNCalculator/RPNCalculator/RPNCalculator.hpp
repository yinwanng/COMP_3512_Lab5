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
			break;
		}
	}
	void perform(Operation * o){
		//pop top two numbers from stack
		//apply operation, make sure operator is correct
		// push back to stack
		if (stack.size == 2) {
			int a = stack.top();
			stack.pop();
			int b = stack.top();
			stack.pop();
			//result = a << o->get_code << b;
			result = o->perform(a, b);
			stack.push(result);
		}
	}
};



