/*************************************************************************
* Program: Simple Calculator
* programmer: Daudi Mlengela (dmlengela@cnm.edu)
* Date: October 6th, 2022
* Purpose: To create a simple calculator
**************************************************************************/

#pragma once
#include"SimpleCalc.h"



namespace MlengelaP4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	
	SimpleCalc calc;
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtNum1;
	private: System::Windows::Forms::TextBox^ txtNum2;
	private: System::Windows::Forms::TextBox^ txtResults;


	private: System::Windows::Forms::Label^ lblOps;




	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnSubtract;
	private: System::Windows::Forms::Button^ btnMultiply;
	private: System::Windows::Forms::Button^ btnDivide;
	private: System::Windows::Forms::Button^ btnClear;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtNum1 = (gcnew System::Windows::Forms::TextBox());
			this->lblOps = (gcnew System::Windows::Forms::Label());
			this->txtNum2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtResults = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnSubtract = (gcnew System::Windows::Forms::Button());
			this->btnMultiply = (gcnew System::Windows::Forms::Button());
			this->btnDivide = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->label1->Location = System::Drawing::Point(58, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(397, 56);
			this->label1->TabIndex = 0;
			this->label1->Text = L"                Welcome to C++ Calculator\r\nEnter numbers, then place the operatio"
				L"n button\r\n";
			// 
			// txtNum1
			// 
			this->txtNum1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtNum1->Location = System::Drawing::Point(27, 80);
			this->txtNum1->Name = L"txtNum1";
			this->txtNum1->Size = System::Drawing::Size(100, 20);
			this->txtNum1->TabIndex = 1;
			// 
			// lblOps
			// 
			this->lblOps->AutoSize = true;
			this->lblOps->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblOps->Location = System::Drawing::Point(158, 80);
			this->lblOps->Name = L"lblOps";
			this->lblOps->Size = System::Drawing::Size(0, 25);
			this->lblOps->TabIndex = 4;
			// 
			// txtNum2
			// 
			this->txtNum2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtNum2->Location = System::Drawing::Point(202, 80);
			this->txtNum2->Name = L"txtNum2";
			this->txtNum2->Size = System::Drawing::Size(100, 20);
			this->txtNum2->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(319, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(25, 25);
			this->label3->TabIndex = 5;
			this->label3->Text = L"=";
			// 
			// txtResults
			// 
			this->txtResults->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtResults->Location = System::Drawing::Point(374, 80);
			this->txtResults->Name = L"txtResults";
			this->txtResults->Size = System::Drawing::Size(100, 20);
			this->txtResults->TabIndex = 3;
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(27, 141);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(100, 32);
			this->btnAdd->TabIndex = 6;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
			// 
			// btnSubtract
			// 
			this->btnSubtract->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btnSubtract->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSubtract->Location = System::Drawing::Point(202, 141);
			this->btnSubtract->Name = L"btnSubtract";
			this->btnSubtract->Size = System::Drawing::Size(100, 32);
			this->btnSubtract->TabIndex = 7;
			this->btnSubtract->Text = L"-";
			this->btnSubtract->UseVisualStyleBackColor = false;
			this->btnSubtract->Click += gcnew System::EventHandler(this, &MyForm::btnSubtract_Click);
			// 
			// btnMultiply
			// 
			this->btnMultiply->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btnMultiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMultiply->Location = System::Drawing::Point(27, 194);
			this->btnMultiply->Name = L"btnMultiply";
			this->btnMultiply->Size = System::Drawing::Size(100, 31);
			this->btnMultiply->TabIndex = 8;
			this->btnMultiply->Text = L"*";
			this->btnMultiply->UseVisualStyleBackColor = false;
			this->btnMultiply->Click += gcnew System::EventHandler(this, &MyForm::btnMultiply_Click);
			// 
			// btnDivide
			// 
			this->btnDivide->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btnDivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDivide->Location = System::Drawing::Point(202, 194);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(100, 31);
			this->btnDivide->TabIndex = 9;
			this->btnDivide->Text = L"/";
			this->btnDivide->UseVisualStyleBackColor = false;
			this->btnDivide->Click += gcnew System::EventHandler(this, &MyForm::btnDivide_Click);
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->Location = System::Drawing::Point(374, 153);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(100, 42);
			this->btnClear->TabIndex = 10;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &MyForm::btnClear_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkOrange;
			this->ClientSize = System::Drawing::Size(513, 272);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnDivide);
			this->Controls->Add(this->btnMultiply);
			this->Controls->Add(this->btnSubtract);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lblOps);
			this->Controls->Add(this->txtResults);
			this->Controls->Add(this->txtNum2);
			this->Controls->Add(this->txtNum1);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->Name = L"MyForm";
			this->Text = L"MlengelaP4 - Simple Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: void Calculate(Char operation) {
			double operand1{}, operand2{};
			string results;

			operand1 = Convert::ToDouble(txtNum1->Text);
			operand2 = Convert::ToDouble(txtNum2->Text);

			lblOps->Text = (Convert::ToChar(operation)).ToString();
			
			calc.SetOperation(operation, operand1, operand2);
			txtResults->Text = gcnew String(calc.GetResult().c_str());
		}
	
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	Calculate('+');
}
private: System::Void btnSubtract_Click(System::Object^ sender, System::EventArgs^ e) {
	Calculate('-');
}
private: System::Void btnMultiply_Click(System::Object^ sender, System::EventArgs^ e) {
	Calculate('*');
}
private: System::Void btnDivide_Click(System::Object^ sender, System::EventArgs^ e) {
	Calculate('/');
}
private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
	txtNum1->Clear();
	txtNum2->Clear();
	txtResults->Clear();
	lblOps->Text = " ";


    }

};
}
