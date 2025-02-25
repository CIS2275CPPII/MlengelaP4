/*************************************************************************
* Program: Simple Calculator
* programmer: Daudi Mlengela (dmlengela@cnm.edu)
* Date: October 6th, 2022
* Purpose: To create a simple calculator
**************************************************************************/

#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	MlengelaP4::MyForm form;
	Application::Run(% form);
}
