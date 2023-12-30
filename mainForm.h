#pragma once
#include "NormalModeForm.h"
#include "HardModeForm.h"
namespace MemoryMatchingCardGameDataStructure {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mainForm
	/// </summary>
	public ref class mainForm : public System::Windows::Forms::Form
	{
	public:
		mainForm(void)
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
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ playernametb;
	private: System::Windows::Forms::Button^ normalBTN;
	private: System::Windows::Forms::Button^ hardBTN;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->playernametb = (gcnew System::Windows::Forms::TextBox());
			this->normalBTN = (gcnew System::Windows::Forms::Button());
			this->hardBTN = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Coral;
			this->label1->Location = System::Drawing::Point(162, 169);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(946, 80);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Memory Matching Card Game";
			this->label1->Click += gcnew System::EventHandler(this, &mainForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(219, 297);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(295, 57);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Player Name:";
			this->label2->Click += gcnew System::EventHandler(this, &mainForm::label2_Click);
			// 
			// playernametb
			// 
			this->playernametb->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->playernametb->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->playernametb->Location = System::Drawing::Point(514, 310);
			this->playernametb->Name = L"playernametb";
			this->playernametb->Size = System::Drawing::Size(496, 37);
			this->playernametb->TabIndex = 2;
			this->playernametb->Tag = L"playernameTB";
			this->playernametb->TextChanged += gcnew System::EventHandler(this, &mainForm::textBox1_TextChanged);
			// 
			// normalBTN
			// 
			this->normalBTN->BackColor = System::Drawing::Color::DodgerBlue;
			this->normalBTN->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->normalBTN->ForeColor = System::Drawing::Color::Snow;
			this->normalBTN->Location = System::Drawing::Point(314, 453);
			this->normalBTN->Name = L"normalBTN";
			this->normalBTN->Size = System::Drawing::Size(294, 59);
			this->normalBTN->TabIndex = 3;
			this->normalBTN->Text = L"Normal mode";
			this->normalBTN->UseVisualStyleBackColor = false;
			this->normalBTN->Click += gcnew System::EventHandler(this, &mainForm::button1_Click);
			// 
			// hardBTN
			// 
			this->hardBTN->BackColor = System::Drawing::Color::Crimson;
			this->hardBTN->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hardBTN->ForeColor = System::Drawing::Color::Snow;
			this->hardBTN->Location = System::Drawing::Point(647, 453);
			this->hardBTN->Name = L"hardBTN";
			this->hardBTN->Size = System::Drawing::Size(294, 59);
			this->hardBTN->TabIndex = 4;
			this->hardBTN->Text = L"Hard mode";
			this->hardBTN->UseVisualStyleBackColor = false;
			this->hardBTN->Click += gcnew System::EventHandler(this, &mainForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(434, 142);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(375, 27);
			this->label3->TabIndex = 5;
			this->label3->Text = L"CSE331- Data Structures and Algorithms";
			this->label3->Click += gcnew System::EventHandler(this, &mainForm::label3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::ForestGreen;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Snow;
			this->button1->Location = System::Drawing::Point(481, 549);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(294, 59);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Leader Board";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &mainForm::button1_Click_1);
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1218, 693);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->hardBTN);
			this->Controls->Add(this->normalBTN);
			this->Controls->Add(this->playernametb);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"mainForm";
			this->Text = L"mainForm";
			this->Load += gcnew System::EventHandler(this, &mainForm::mainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//go to normal Mode form
 NormalModeForm^ normalModeForm = gcnew NormalModeForm();
    normalModeForm->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    HardModeForm^ hardModeForm = gcnew HardModeForm();
    hardModeForm->Show();
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void mainForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
