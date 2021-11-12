#ifndef POSTFIX_H
#define POSTFIX_H

#include <iostream>
#include "Stack.hpp"
using namespace std;

class PostfixExp
{
private:
	string expression;
	int isOperator(char);
	int calculate(int, int, char);
	int isdigit(int);

public:
	PostfixExp() : expression() {}
	PostfixExp(string s) : expression(s) {}
	void setExpression(string s)
	{
		expression = s;
	}
	void printExpression() const;
	int Evaluation()
	{
		const int N = 20;
		const int offset = 48;
		Stack<int, N> stack;
		char input;

		int opr1, opr2, result;

		for (int i = 0; i < expression.size(); i++)
		{
			input = expression[i];
			if (isdigit(input))
				stack.push(int(input) - offset);
			else if (isOperator(input))
			{
				opr1 = stack.pop();
				opr2 = stack.pop();
				result = calculate(opr1, opr2, input);
				stack.push(result);
			}
		}
		cout << "The result of the expression is " << stack.pop() << endl;

		return result;
	}
};

#endif