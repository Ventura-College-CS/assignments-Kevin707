#include <iostream>
#include "PostFix.hpp"
using namespace std;

int main()
{
	
	PostfixExp e1;
	
	e1.setExpression("243*+5+");
	e1.printExpression();
	e1.Evaluation();
	
}