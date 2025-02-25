/*************************************************************************
* Program: Simple Calculator
* programmer: Daudi Mlengela (dmlengela@cnm.edu)
* Date: September 15th , 2022
* Purpose: To create a simple calculator
**************************************************************************/

#include<string>
using namespace std;


#ifndef SIMPLE_CALC_H
#define SIMPLE_CALC_H


class SimpleCalc
{
private:
	char operation{ '+' }; //which arithmetic operation is chosen
	double operand1{0.0};
	double operand2{1.0};//the answer in numerical form
	double answer{0}; 
	void Calculate();
	string desc; //description of the operation (optional)	
	string results; //formatted string

public:
	SimpleCalc(); // default constructor
	void SetOperation(char oper, double op1, double op2);
	string GetResult();

};


#endif // !SIMPLE_CALC_H






