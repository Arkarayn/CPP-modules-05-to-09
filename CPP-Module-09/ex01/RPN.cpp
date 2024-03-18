#include "RPN.hpp"

std::stack<int> RPN::_vStack;

RPN::RPN(void) {
}

RPN::~RPN(void) {
}

RPN::RPN(const RPN&) {
}

RPN& RPN::operator=(const RPN&) {
    return *this;
}

void RPN::ParsArgs(const char *str) {
    std::string s(str);
    std::stringstream ss(s);
    std::string token;
    while (std::getline(ss, token, ' ')) {
        Operations(token);
    }
}

void RPN::Fill(const char *str) {
    std::string s(str);
    std::stringstream ss(s);
    std::string token;
    while (std::getline(ss, token, ' ')) {
        if (token.length() == 1 && !isdigit(token[0])) {
            Operations(token);
        } else {
            _vStack.push(atoi(token.c_str()));
        }
    }
}

void RPN::Operations(std::string &token) {
    if (token.length() == 1 && !isdigit(token[0])) {
        int a = _vStack.top();
        _vStack.pop();
        int b = _vStack.top();
        _vStack.pop();
        switch (token[0]) {
            case '+':
                _vStack.push(b + a);
                break;
            case '-':
                _vStack.push(b - a);
                break;
            case '*':
                _vStack.push(b * a);
                break;
            case '/':
                _vStack.push(b / a);
                break;
            case '%':
                _vStack.push(b % a);
                break;
        }
    } else {
        _vStack.push(atoi(token.c_str()));
    }
}

void RPN::printStack(void)
{
    std::cout << _vStack.top() << std::endl;
}