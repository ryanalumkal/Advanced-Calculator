#pragma once

namespace MoreAdvancedCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
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
	private: System::Windows::Forms::Button^ ButtonAC;
	private: System::Windows::Forms::Button^ ButtonMathOps;
	private: System::Windows::Forms::Button^ ButtonPercentage;
	private: System::Windows::Forms::Button^ ButtonDivide;
	private: System::Windows::Forms::Button^ Button_7;

	private: System::Windows::Forms::Button^ ButtonMultiply;
	private: System::Windows::Forms::Button^ ButtonSubtract;
	private: System::Windows::Forms::Button^ ButtonAdd;
	private: System::Windows::Forms::Button^ ButtonEqual;
	private: System::Windows::Forms::Button^ Button_8;
	private: System::Windows::Forms::Button^ Button_9;
	private: System::Windows::Forms::Button^ Button_4;
	private: System::Windows::Forms::Button^ Button_5;
	private: System::Windows::Forms::Button^ Button_6;
	private: System::Windows::Forms::Button^ Button_1;
	private: System::Windows::Forms::Button^ Button_2;
	private: System::Windows::Forms::Button^ Button_3;
	private: System::Windows::Forms::Button^ Button_0;
	private: System::Windows::Forms::Button^ ButtonPeriod;

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
			this->ButtonAC = (gcnew System::Windows::Forms::Button());
			this->ButtonMathOps = (gcnew System::Windows::Forms::Button());
			this->ButtonPercentage = (gcnew System::Windows::Forms::Button());
			this->ButtonDivide = (gcnew System::Windows::Forms::Button());
			this->Button_7 = (gcnew System::Windows::Forms::Button());
			this->ButtonMultiply = (gcnew System::Windows::Forms::Button());
			this->ButtonSubtract = (gcnew System::Windows::Forms::Button());
			this->ButtonAdd = (gcnew System::Windows::Forms::Button());
			this->ButtonEqual = (gcnew System::Windows::Forms::Button());
			this->Button_8 = (gcnew System::Windows::Forms::Button());
			this->Button_9 = (gcnew System::Windows::Forms::Button());
			this->Button_4 = (gcnew System::Windows::Forms::Button());
			this->Button_5 = (gcnew System::Windows::Forms::Button());
			this->Button_6 = (gcnew System::Windows::Forms::Button());
			this->Button_1 = (gcnew System::Windows::Forms::Button());
			this->Button_2 = (gcnew System::Windows::Forms::Button());
			this->Button_3 = (gcnew System::Windows::Forms::Button());
			this->Button_0 = (gcnew System::Windows::Forms::Button());
			this->ButtonPeriod = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::OldLace;
			this->label1->Location = System::Drawing::Point(12, 30);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label1->Size = System::Drawing::Size(502, 100);
			this->label1->TabIndex = 0;
			// 
			// ButtonAC
			// 
			this->ButtonAC->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonAC->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ButtonAC->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonAC->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->ButtonAC->Location = System::Drawing::Point(12, 151);
			this->ButtonAC->Name = L"ButtonAC";
			this->ButtonAC->Size = System::Drawing::Size(108, 107);
			this->ButtonAC->TabIndex = 1;
			this->ButtonAC->Text = L"AC";
			this->ButtonAC->UseVisualStyleBackColor = false;
			this->ButtonAC->Click += gcnew System::EventHandler(this, &MyForm::ButtonAC_Click);
			// 
			// ButtonMathOps
			// 
			this->ButtonMathOps->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonMathOps->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ButtonMathOps->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonMathOps->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->ButtonMathOps->Location = System::Drawing::Point(143, 151);
			this->ButtonMathOps->Name = L"ButtonMathOps";
			this->ButtonMathOps->Size = System::Drawing::Size(108, 107);
			this->ButtonMathOps->TabIndex = 2;
			this->ButtonMathOps->Text = L"positive";
			this->ButtonMathOps->UseVisualStyleBackColor = false;
			this->ButtonMathOps->Click += gcnew System::EventHandler(this, &MyForm::ButtonMathOps_Click);
			// 
			// ButtonPercentage
			// 
			this->ButtonPercentage->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonPercentage->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ButtonPercentage->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonPercentage->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->ButtonPercentage->Location = System::Drawing::Point(277, 151);
			this->ButtonPercentage->Name = L"ButtonPercentage";
			this->ButtonPercentage->Size = System::Drawing::Size(108, 107);
			this->ButtonPercentage->TabIndex = 3;
			this->ButtonPercentage->Text = L"negative";
			this->ButtonPercentage->UseVisualStyleBackColor = false;
			this->ButtonPercentage->Click += gcnew System::EventHandler(this, &MyForm::ButtonPercentage_Click);
			// 
			// ButtonDivide
			// 
			this->ButtonDivide->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonDivide->BackColor = System::Drawing::Color::Orange;
			this->ButtonDivide->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonDivide->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->ButtonDivide->Location = System::Drawing::Point(406, 151);
			this->ButtonDivide->Name = L"ButtonDivide";
			this->ButtonDivide->Size = System::Drawing::Size(108, 107);
			this->ButtonDivide->TabIndex = 4;
			this->ButtonDivide->Text = L"/";
			this->ButtonDivide->UseVisualStyleBackColor = false;
			this->ButtonDivide->Click += gcnew System::EventHandler(this, &MyForm::ArithmeticOP);
			// 
			// Button_7
			// 
			this->Button_7->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Button_7->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Button_7->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_7->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->Button_7->Location = System::Drawing::Point(12, 286);
			this->Button_7->Name = L"Button_7";
			this->Button_7->Size = System::Drawing::Size(108, 107);
			this->Button_7->TabIndex = 5;
			this->Button_7->Text = L"7";
			this->Button_7->UseVisualStyleBackColor = false;
			this->Button_7->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// ButtonMultiply
			// 
			this->ButtonMultiply->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonMultiply->BackColor = System::Drawing::Color::Orange;
			this->ButtonMultiply->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonMultiply->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->ButtonMultiply->Location = System::Drawing::Point(406, 286);
			this->ButtonMultiply->Name = L"ButtonMultiply";
			this->ButtonMultiply->Size = System::Drawing::Size(108, 107);
			this->ButtonMultiply->TabIndex = 6;
			this->ButtonMultiply->Text = L"*";
			this->ButtonMultiply->UseVisualStyleBackColor = false;
			this->ButtonMultiply->Click += gcnew System::EventHandler(this, &MyForm::ArithmeticOP);
			// 
			// ButtonSubtract
			// 
			this->ButtonSubtract->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonSubtract->BackColor = System::Drawing::Color::Orange;
			this->ButtonSubtract->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonSubtract->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->ButtonSubtract->Location = System::Drawing::Point(406, 419);
			this->ButtonSubtract->Name = L"ButtonSubtract";
			this->ButtonSubtract->Size = System::Drawing::Size(108, 107);
			this->ButtonSubtract->TabIndex = 7;
			this->ButtonSubtract->Text = L"-";
			this->ButtonSubtract->UseVisualStyleBackColor = false;
			this->ButtonSubtract->Click += gcnew System::EventHandler(this, &MyForm::ArithmeticOP);
			// 
			// ButtonAdd
			// 
			this->ButtonAdd->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonAdd->BackColor = System::Drawing::Color::Orange;
			this->ButtonAdd->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonAdd->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->ButtonAdd->Location = System::Drawing::Point(406, 556);
			this->ButtonAdd->Name = L"ButtonAdd";
			this->ButtonAdd->Size = System::Drawing::Size(108, 107);
			this->ButtonAdd->TabIndex = 8;
			this->ButtonAdd->Text = L"+";
			this->ButtonAdd->UseVisualStyleBackColor = false;
			this->ButtonAdd->Click += gcnew System::EventHandler(this, &MyForm::ArithmeticOP);
			// 
			// ButtonEqual
			// 
			this->ButtonEqual->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonEqual->BackColor = System::Drawing::Color::Orange;
			this->ButtonEqual->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonEqual->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->ButtonEqual->Location = System::Drawing::Point(406, 690);
			this->ButtonEqual->Name = L"ButtonEqual";
			this->ButtonEqual->Size = System::Drawing::Size(108, 107);
			this->ButtonEqual->TabIndex = 9;
			this->ButtonEqual->Text = L"=";
			this->ButtonEqual->UseVisualStyleBackColor = false;
			this->ButtonEqual->Click += gcnew System::EventHandler(this, &MyForm::ButtonEqual_Click);
			// 
			// Button_8
			// 
			this->Button_8->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Button_8->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Button_8->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_8->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->Button_8->Location = System::Drawing::Point(143, 286);
			this->Button_8->Name = L"Button_8";
			this->Button_8->Size = System::Drawing::Size(108, 107);
			this->Button_8->TabIndex = 10;
			this->Button_8->Text = L"8";
			this->Button_8->UseVisualStyleBackColor = false;
			this->Button_8->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// Button_9
			// 
			this->Button_9->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Button_9->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Button_9->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_9->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->Button_9->Location = System::Drawing::Point(277, 286);
			this->Button_9->Name = L"Button_9";
			this->Button_9->Size = System::Drawing::Size(108, 107);
			this->Button_9->TabIndex = 11;
			this->Button_9->Text = L"9";
			this->Button_9->UseVisualStyleBackColor = false;
			this->Button_9->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// Button_4
			// 
			this->Button_4->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Button_4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Button_4->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_4->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->Button_4->Location = System::Drawing::Point(12, 419);
			this->Button_4->Name = L"Button_4";
			this->Button_4->Size = System::Drawing::Size(108, 107);
			this->Button_4->TabIndex = 12;
			this->Button_4->Text = L"4";
			this->Button_4->UseVisualStyleBackColor = false;
			this->Button_4->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// Button_5
			// 
			this->Button_5->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Button_5->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Button_5->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_5->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->Button_5->Location = System::Drawing::Point(143, 419);
			this->Button_5->Name = L"Button_5";
			this->Button_5->Size = System::Drawing::Size(108, 107);
			this->Button_5->TabIndex = 13;
			this->Button_5->Text = L"5";
			this->Button_5->UseVisualStyleBackColor = false;
			this->Button_5->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// Button_6
			// 
			this->Button_6->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Button_6->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Button_6->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_6->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->Button_6->Location = System::Drawing::Point(277, 419);
			this->Button_6->Name = L"Button_6";
			this->Button_6->Size = System::Drawing::Size(108, 107);
			this->Button_6->TabIndex = 14;
			this->Button_6->Text = L"6";
			this->Button_6->UseVisualStyleBackColor = false;
			this->Button_6->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// Button_1
			// 
			this->Button_1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Button_1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Button_1->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_1->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->Button_1->Location = System::Drawing::Point(12, 556);
			this->Button_1->Name = L"Button_1";
			this->Button_1->Size = System::Drawing::Size(108, 107);
			this->Button_1->TabIndex = 15;
			this->Button_1->Text = L"1";
			this->Button_1->UseVisualStyleBackColor = false;
			this->Button_1->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// Button_2
			// 
			this->Button_2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Button_2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Button_2->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_2->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->Button_2->Location = System::Drawing::Point(143, 556);
			this->Button_2->Name = L"Button_2";
			this->Button_2->Size = System::Drawing::Size(108, 107);
			this->Button_2->TabIndex = 16;
			this->Button_2->Text = L"2";
			this->Button_2->UseVisualStyleBackColor = false;
			this->Button_2->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// Button_3
			// 
			this->Button_3->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Button_3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Button_3->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_3->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->Button_3->Location = System::Drawing::Point(277, 556);
			this->Button_3->Name = L"Button_3";
			this->Button_3->Size = System::Drawing::Size(108, 107);
			this->Button_3->TabIndex = 17;
			this->Button_3->Text = L"3";
			this->Button_3->UseVisualStyleBackColor = false;
			this->Button_3->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// Button_0
			// 
			this->Button_0->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Button_0->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Button_0->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_0->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->Button_0->Location = System::Drawing::Point(12, 690);
			this->Button_0->Name = L"Button_0";
			this->Button_0->Size = System::Drawing::Size(239, 107);
			this->Button_0->TabIndex = 18;
			this->Button_0->Text = L"0";
			this->Button_0->UseVisualStyleBackColor = false;
			this->Button_0->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// ButtonPeriod
			// 
			this->ButtonPeriod->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ButtonPeriod->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ButtonPeriod->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ButtonPeriod->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->ButtonPeriod->Location = System::Drawing::Point(277, 690);
			this->ButtonPeriod->Name = L"ButtonPeriod";
			this->ButtonPeriod->Size = System::Drawing::Size(108, 107);
			this->ButtonPeriod->TabIndex = 19;
			this->ButtonPeriod->Text = L".";
			this->ButtonPeriod->UseVisualStyleBackColor = false;
			this->ButtonPeriod->Click += gcnew System::EventHandler(this, &MyForm::ButtonPeriod_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(533, 822);
			this->Controls->Add(this->ButtonPeriod);
			this->Controls->Add(this->Button_0);
			this->Controls->Add(this->Button_3);
			this->Controls->Add(this->Button_2);
			this->Controls->Add(this->Button_1);
			this->Controls->Add(this->Button_6);
			this->Controls->Add(this->Button_5);
			this->Controls->Add(this->Button_4);
			this->Controls->Add(this->Button_9);
			this->Controls->Add(this->Button_8);
			this->Controls->Add(this->ButtonEqual);
			this->Controls->Add(this->ButtonAdd);
			this->Controls->Add(this->ButtonSubtract);
			this->Controls->Add(this->ButtonMultiply);
			this->Controls->Add(this->Button_7);
			this->Controls->Add(this->ButtonDivide);
			this->Controls->Add(this->ButtonPercentage);
			this->Controls->Add(this->ButtonMathOps);
			this->Controls->Add(this->ButtonAC);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->ResumeLayout(false);

		}
		double holdernum, firstnum, secondnum, answer;
		String^ iop;
#pragma endregion
private: System::Void NumbersOnly(System::Object^ sender, System::EventArgs^ e) {

	Button^ numb = safe_cast<Button^>(sender);

	if (label1->Text == "")
	{
		label1->Text = numb->Text;
		holdernum = Double::Parse(label1->Text);
	}
	else
	{
		label1->Text = label1->Text +numb->Text;
		holdernum = Double::Parse(label1->Text);
	}
}
private: System::Void ArithmeticOP(System::Object^ sender, System::EventArgs^ e) {

	Button^ OP = safe_cast<Button^>(sender);
	firstnum = Double::Parse(label1->Text);
	label1->Text = "";
	iop = OP->Text;
}
private: System::Void ButtonAC_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "";
}
private: System::Void ButtonPeriod_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!label1->Text->Contains("."))
	{
		label1->Text = label1->Text + ".";
	}
}
private: System::Void ButtonEqual_Click(System::Object^ sender, System::EventArgs^ e) {

	secondnum = Double::Parse(label1->Text);

	if (iop == "+") 
	{
		answer = firstnum + secondnum;
		label1->Text = System::Convert::ToString(answer);

	}
	else if (iop == "-")
	{
		answer = firstnum - secondnum;
		label1->Text = System::Convert::ToString(answer);
	}
	else if (iop == "*")
	{
		answer = firstnum * secondnum;
		label1->Text = System::Convert::ToString(answer);
	}
	else if (iop == "/")
	{
		answer = firstnum / secondnum;
		label1->Text = System::Convert::ToString(answer);
	}

}
private: System::Void ButtonMathOps_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (label1->Text->Contains("-")) {
		label1->Text = label1->Text->Remove(0, 1);
	}
	
}
private: System::Void ButtonPercentage_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (!label1->Text->Contains("-")) {
		label1->Text = "-" + label1->Text;
	}
}
};
}
