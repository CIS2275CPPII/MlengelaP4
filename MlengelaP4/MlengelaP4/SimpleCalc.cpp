/*************************************************************************
* Program: Simple Calculator
* programmer: Daudi Mlengela (dmlengela@cnm.edu)
* Date: October 6th, 2022
* Purpose: To create a simple calculator
**************************************************************************/
#include <iostream>
#include<sstream>
#include<iomanip>
#include "SimpleCalc.h"

using namespace std;

void SimpleCalc::Calculate()
{
	switch (operation)
	{
	case '+':
		answer = operand1 + operand2;
		desc = "addition: ";
		break;
	case '-':
		answer = operand1 - operand2;
		desc = "minus: ";
		break;
	case '*':
		answer = operand1 * operand2;
		desc = "multiplication: ";
		break;
	case '/':
		if (operand2 == 0)
		{
			desc = "Illegal Operation!";
		}
		else
		{
			answer = operand1 / operand2;
			desc = "division: ";
		}
		break;
	default:
		desc = "That's not a valid operator. Try again! ";
		break;
	}

}

SimpleCalc::SimpleCalc()
{
	operand1 = 0.0;
	operand2 = 0.0;
	double result = 0.0;
	char oper = '+';
}

void SimpleCalc::SetOperation(char oper, double op1, double op2)
{
	operation = oper;
	operand1 = op1;
	operand2 = op2;
	Calculate();
}

string SimpleCalc::GetResult()
{
	stringstream ss;

	if(!(desc == "No Division by 0!"))
	{
		ss << answer;
	}
	else
	{
		ss << desc;

	}
	return ss.str();
	return results;
}

