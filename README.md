# Simple Calculator on a Windows Form

This is our introduction to Windows Forms.  We will learn about the visual side of VS 2019 by programming a calculator.

<img width="658" height="472" alt="image" src="https://github.com/user-attachments/assets/aa455c99-40bc-459f-ae2d-70b865cb1725" />

We will build this form together in the lab. <br/>
We will learn to convert the .NET String is retrieved from the textboxes into primitives that we can use.</br>
We will then use our native C++ class to "power" the calculator on the form.</br>
We will also learn to format our output in the form so that our results will be displayed with two decimal places of precision.</br>

You have already written the SimpleCalc class.  Here are the modifications to be made in the .cpp file: When returning the formatted string, you will convert the double answer to a string the result. 
You will set the result into the appropriate textbox on the form.  For the case of dividing by 0, you will return a message, which will be a string that will be assigned to the result.

At the top of the form1.h, add _#include "SimpleCalc.h"_.  Create an instance of SimpleCalc on the form just above the declaration of public ref class MyForm : etc. 
Create an instance of SimpleCalc on the form just above the declaration of _public ref class MyForm :_ etc.

For the form, you will have 3 text boxes, two for the user’s numerical input and one to display the answer (or result).  You will have 4 buttons, one for each type of operation. 
There will be an additional button, Clear.  In the event handler for the Clear button, clear the text boxes and operation label so your form is reset.  
You will have labels which will present the title and describe the program input required from the user, and 2 labels which will appear to make an "equation" on the form. 
Put your name and Program title in the Text property of Form1.
