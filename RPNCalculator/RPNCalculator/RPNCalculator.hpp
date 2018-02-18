#pragma once
#include <stack>
#include <sstream>
#include "AdditionOperation.hpp"
#include "SubstractionOperation.hpp"
#include "DivisionOperation.hpp"
#include "MultiplicationOperation.hpp"

class RPNCalculator
{
public:
	// Reads the formula from left to right. Integers in the formula will be pushed
	// to the stack. When an operation is encountered, the top two operands must be removed from
	// the stack and used with the operator. The result will be pushed back on the stack.
	// Final value will be returned when reached end of formula.
	int process_formula(std::string formula)
	{
		std::istringstream iss(formula);
		std::string operand;

		while (iss >> operand)
		{
			std::istringstream iss2(operand);
			int value;
			if (iss2 >> value)
			{
				stack.push(value);
			}
			else
			{
				perform(operation_type(operand[0]));
			}
		}
		return stack.top();
	}

private:
	int result;
	std::stack<int> stack;

	// Accepts an in called option and return a pointer to Operation. 
	// Allows us to use polymorphism
	Operation* operation_type(int operation) 
	{
		switch (operation) {
		case '+':
			return new AdditionOperation();
			break;
		case '-': 
			return new SubstractionOperation();
			break;
		case '*':
			return new MultiplicationOperation;
			break;
		case '/':
			return new DivisionOperation;
			break;
		default:
			return nullptr;
		}
	}

	// This member function accepts a parameter which is a pointer to an Operation.
	// pop top two numbers from stack
	// apply operation, make sure operator is correct
	// push back to stack
	void perform(Operation * o){

		if (stack.size() == 2) {
			int a = stack.top();
			stack.pop();
			int b = stack.top();
			stack.pop();
			result = o->perform(b, a);
			stack.push(result);
		}
	}
};



