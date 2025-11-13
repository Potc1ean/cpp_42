#pragma once

# include <iostream>
# include <stack>
# include <sstream>
# include <stdexcept>
# include <cctype>
# include <string>

class RPN
{
    private:
        std::stack<int> _stack;

        bool isOperator(const std::string &token) const;
        int  applyOperation(int a, int b, const std::string &op) const;

    public:
        RPN() {}

        int evaluate(const std::string &expr);
};
