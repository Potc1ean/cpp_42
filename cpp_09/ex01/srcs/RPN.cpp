#include "RPN.hpp"

bool RPN::isOperator(const std::string &token) const
{
	return (token == "+" || token == "-" || token == "*" || token == "/");
}

int RPN::applyOperation(int a, int b, const std::string &op) const
{
	if (op == "+")
		return a + b;
	else if (op == "-")
		return a - b;
	else if (op == "*")
		return a * b;
	else if (op == "/")
	{
		if (b == 0)
			throw std::runtime_error("Division by zero");
		return a / b;
	}
	throw std::runtime_error("Invalid operator");
}

int RPN::evaluate(const std::string &expr)
{
	std::stringstream ss(expr);
	std::string token;

	while (ss >> token)
	{
		if (token.size() == 1 && std::isdigit(token[0]))
		{
			_stack.push(token[0] - '0');
		}
		else if (isOperator(token))
		{
			if (_stack.size() < 2)
				throw std::runtime_error("Invalid expression");

			int b = _stack.top(); _stack.pop();
			int a = _stack.top(); _stack.pop();
			int result = applyOperation(a, b, token);
			_stack.push(result);
		}
		else
			throw std::runtime_error("Invalid token");
	}

	if (_stack.size() != 1)
		throw std::runtime_error("Invalid expression");

	return _stack.top();
}
