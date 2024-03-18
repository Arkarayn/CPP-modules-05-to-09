#pragma once

#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <sstream>
#include <cmath>

class RPN {
	private:
		static std::stack<int>  _vStack;
		RPN(void);
		~RPN(void);
		RPN(const RPN&);
		RPN& operator=(const RPN&);
	public:
		static void	ParsArgs(const char *);
		static void Fill(const char *);
		static void Operations(std::string&);
        static void printStack(void);
};