#ifndef POSTFIX_H
#define POSTFIX_H

#include <iostream>
#include "stack.hpp"
using namespace std;

class PostfixExp
{
private:
	string expression;
	int isOperator(char op)
	{
		switch (op)
		{
			case '+':
			case '-':
			case '*':
			case '/':
				return 1;
			default:
				return 0;
		}
	}
	int calculate(int op1, int op2, char opr)
	{
		int result;
		switch (opr)
		{
			case '*':
				result = op1 * op2;
				break;
			case '/':
				result = op2 / op1;
				break;
			case '+':
				result = op1 + op2;
				break;
			case '-':
				result = op2 - op1;
				break;
			default:
				cout << "Undefined operator error\n";
				exit(0);
		}
		return result;
	}

public:
	PostfixExp() : expression() {}
	PostfixExp(string s) : expression(s) {}
	void setExpression(string s)
	{
		expression = s;
	}
	void printExpression() const
	{
		for (int i = 0; i < expression.size(); i++)
		cout << expression[i] << "\t";
		cout << endl;
	}