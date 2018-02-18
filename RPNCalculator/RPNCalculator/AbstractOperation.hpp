#pragma once
#include "Operation.hpp"
class AbstractOperation : public Operation
{
public:
    AbstractOperation(const char c) : operation_type(c) {}
    char get_code() override { return operation_type; }
    virtual ~AbstractOperation() {};

private:
    char operation_type;
};