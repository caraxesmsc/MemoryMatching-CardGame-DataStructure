#pragma once

namespace QueueNamespace {

	#include "Queue.h"
	ref class Queue;
}

namespace StackNamespace {
	#include "Stack.h"
	ref class Stack;
}

namespace CardNamespace {
	#include "Card.h"
	ref class Card;
}

namespace MemoryMatchingCardGameDataStructure {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for NormalModeForm
	/// </summary>
	public ref class NormalModeForm : public System::Windows::Forms::Form
	{
	public:
		array<String^>^ cardPath = gcnew array<String^>(14);
		array<String^>^ gridPath = gcnew array<String^>(12);

		QueueNamespace::Queue^ queue = gcnew QueueNamespace::Queue();
		StackNamespace::Stack^ stack = gcnew StackNamespace::Stack();
		CardNamespace::Card^ card = gcnew CardNamespace::Card();

	private: System::Windows::Forms::Label^ labelPlayerName;
	private: System::Windows::Forms::PictureBox^ pictureBox05;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	public:

	public:
		String^ playerName;
		NormalModeForm(void)
		{
			cardPath[0] = "CardsImages\\back.png";
			cardPath[1] = "CardsImages\\ace_of_spades.png";
			cardPath[2] = "CardsImages\\2_of_spades.png";
			cardPath[3] = "CardsImages\\3_of_spades.png";
			cardPath[4] = "CardsImages\\4_of_spades.png";
			cardPath[5] = "CardsImages\\5_of_spades.png";
			cardPath[6] = "CardsImages\\6_of_spades.png";
			cardPath[7] = "CardsImages\\7_of_spades.png";
			cardPath[8] = "CardsImages\\8_of_spades.png";
			cardPath[9] = "CardsImages\\9_of_spades.png";
			cardPath[10] = "CardsImages\\10_of_spades.png";
			cardPath[11] = "CardsImages\\jack_of_spades.png";
			cardPath[12] = "CardsImages\\queen_of_spades.png";
			cardPath[13] = "CardsImages\\king_of_spades.png";
			//write code to shuffle this array.
			gridPath[0] = "CardsImages\\back.png";
			gridPath[1] = "CardsImages\\back.png";
			gridPath[2] = "CardsImages\\back.png";
			gridPath[3] = "CardsImages\\back.png";
			gridPath[4] = "CardsImages\\back.png";
			gridPath[5] = "CardsImages\\back.png";
			gridPath[6] = "CardsImages\\back.png";
			gridPath[7] = "CardsImages\\back.png";
			gridPath[8] = "CardsImages\\back.png";
			gridPath[9] = "CardsImages\\back.png";
			gridPath[10] = "CardsImages\\back.png";
			gridPath[11] = "CardsImages\\back.png";


			InitializeComponent();
			
		}
		NormalModeForm(String^ x)
		{
			playerName = x;
			cardPath[0] = "CardsImages\\back.png";
			cardPath[1] = "CardsImages\\ace_of_spades.png";
			cardPath[2] = "CardsImages\\2_of_spades.png";
			cardPath[3] = "CardsImages\\3_of_spades.png";
			cardPath[4] = "CardsImages\\4_of_spades.png";
			cardPath[5] = "CardsImages\\5_of_spades.png";
			cardPath[6] = "CardsImages\\6_of_spades.png";
			cardPath[7] = "CardsImages\\7_of_spades.png";
			cardPath[8] = "CardsImages\\8_of_spades.png";
			cardPath[9] = "CardsImages\\9_of_spades.png";
			cardPath[10] = "CardsImages\\10_of_spades.png";
			cardPath[11] = "CardsImages\\jack_of_spades.png";
			cardPath[12] = "CardsImages\\queen_of_spades.png";
			cardPath[13] = "CardsImages\\king_of_spades.png";
			//write code to shuffle this array.
			gridPath[0] = "CardsImages\\back.png";
			gridPath[1] = "CardsImages\\back.png";
			gridPath[2] = "CardsImages\\back.png";
			gridPath[3] = "CardsImages\\back.png";
			gridPath[4] = "CardsImages\\back.png";
			gridPath[5] = "CardsImages\\back.png";
			gridPath[6] = "CardsImages\\back.png";
			gridPath[7] = "CardsImages\\back.png";
			gridPath[8] = "CardsImages\\back.png";
			gridPath[9] = "CardsImages\\back.png";
			gridPath[10] = "CardsImages\\back.png";
			gridPath[11] = "CardsImages\\back.png";



			InitializeComponent();

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~NormalModeForm()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:












	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Button^ normalBTN;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox03;
	private: System::Windows::Forms::PictureBox^ pictureBox02;
	private: System::Windows::Forms::PictureBox^ pictureBox01;
	private: System::Windows::Forms::PictureBox^ pictureBox00;
	private: System::Windows::Forms::PictureBox^ pictureBox04;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(NormalModeForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->normalBTN = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox03 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox02 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox01 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox00 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox04 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->labelPlayerName = (gcnew System::Windows::Forms::Label());
			this->pictureBox05 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox03))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox02))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox01))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox00))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox04))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox05))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Snow;
			this->label1->Location = System::Drawing::Point(83, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(281, 50);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Normal Mode";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Snow;
			this->label2->Location = System::Drawing::Point(932, 189);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(204, 50);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Round ##";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Snow;
			this->label3->Location = System::Drawing::Point(932, 255);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 50);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Time:";
			// 
			// normalBTN
			// 
			this->normalBTN->BackColor = System::Drawing::Color::DodgerBlue;
			this->normalBTN->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->normalBTN->ForeColor = System::Drawing::Color::Snow;
			this->normalBTN->Location = System::Drawing::Point(950, 515);
			this->normalBTN->Name = L"normalBTN";
			this->normalBTN->Size = System::Drawing::Size(186, 59);
			this->normalBTN->TabIndex = 10;
			this->normalBTN->Text = L"Reset";
			this->normalBTN->UseVisualStyleBackColor = false;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::DarkGreen;
			this->tableLayoutPanel1->ColumnCount = 6;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50.55762F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				49.44238F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				138)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				136)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				130)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				121)));
			this->tableLayoutPanel1->Controls->Add(this->pictureBox13, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox12, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox11, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox10, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox03, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox02, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox01, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox00, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox04, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox14, 4, 1);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox05, 5, 0);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox15, 5, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(71, 174);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(795, 361);
			this->tableLayoutPanel1->TabIndex = 14;
			// 
			// pictureBox15
			// 
			this->pictureBox15->ImageLocation = gridPath[11];
			this->pictureBox15->Location = System::Drawing::Point(676, 183);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(116, 174);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox15->TabIndex = 11;
			this->pictureBox15->TabStop = false;
			// pictureBox14
			// 
			this->pictureBox14->ImageLocation= gridPath[10];
			this->pictureBox14->Location = System::Drawing::Point(546, 183);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(121, 174);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox14->TabIndex = 9;
			this->pictureBox14->TabStop = false;
			// pictureBox13
			// 
this->pictureBox13->ImageLocation = gridPath[9];
			this->pictureBox13->Location = System::Drawing::Point(410, 183);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(130, 174);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox13->TabIndex = 7;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox12
			// 
this->pictureBox12->ImageLocation = gridPath[8];
			this->pictureBox12->Location = System::Drawing::Point(272, 183);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(127, 174);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox12->TabIndex = 6;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox11
			// 
this->pictureBox11->ImageLocation = gridPath[7];
			this->pictureBox11->Location = System::Drawing::Point(139, 183);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(123, 174);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox11->TabIndex = 5;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox10
			// 
this->pictureBox10->ImageLocation = gridPath[6];
			this->pictureBox10->Location = System::Drawing::Point(3, 183);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(128, 174);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox10->TabIndex = 4;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox05
			// 
			this->pictureBox05->ImageLocation = gridPath[5];
			this->pictureBox05->Location = System::Drawing::Point(676, 3);
			this->pictureBox05->Name = L"pictureBox05";
			this->pictureBox05->Size = System::Drawing::Size(116, 174);
			this->pictureBox05->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox05->TabIndex = 10;
			this->pictureBox05->TabStop = false;
			// pictureBox04
			// 
this->pictureBox04->ImageLocation = gridPath[4];
			this->pictureBox04->Location = System::Drawing::Point(546, 3);
			this->pictureBox04->Name = L"pictureBox04";
			this->pictureBox04->Size = System::Drawing::Size(121, 174);
			this->pictureBox04->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox04->TabIndex = 8;
			this->pictureBox04->TabStop = false;
			// pictureBox03
			// 
this->pictureBox03->ImageLocation = gridPath[3];
			this->pictureBox03->Location = System::Drawing::Point(410, 3);
			this->pictureBox03->Name = L"pictureBox03";
			this->pictureBox03->Size = System::Drawing::Size(130, 174);
			this->pictureBox03->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox03->TabIndex = 3;
			this->pictureBox03->TabStop = false;
			// 
			// pictureBox02
			// 
this->pictureBox02->ImageLocation = gridPath[2];
			this->pictureBox02->Location = System::Drawing::Point(272, 3);
			this->pictureBox02->Name = L"pictureBox02";
			this->pictureBox02->Size = System::Drawing::Size(127, 174);
			this->pictureBox02->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox02->TabIndex = 2;
			this->pictureBox02->TabStop = false;
			// 
			// pictureBox01
			// 
this->pictureBox01->ImageLocation = gridPath[1];
			this->pictureBox01->Location = System::Drawing::Point(139, 3);
			this->pictureBox01->Name = L"pictureBox01";
			this->pictureBox01->Size = System::Drawing::Size(123, 174);
			this->pictureBox01->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox01->TabIndex = 1;
			this->pictureBox01->TabStop = false;
			// 
			// pictureBox00
			// 
this->pictureBox00->ImageLocation = gridPath[0];
			this->pictureBox00->Location = System::Drawing::Point(3, 3);
			this->pictureBox00->Name = L"pictureBox00";
			this->pictureBox00->Size = System::Drawing::Size(128, 174);
			this->pictureBox00->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox00->TabIndex = 0;
			this->pictureBox00->TabStop = false;
			this->pictureBox00->Click += gcnew System::EventHandler(this, &NormalModeForm::pictureBox00_Click);
			// 
			
			// 
			
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(28, 127);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(882, 461);
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// labelPlayerName
			// 
			this->labelPlayerName->AutoSize = true;
			this->labelPlayerName->BackColor = System::Drawing::Color::Transparent;
			this->labelPlayerName->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPlayerName->ForeColor = System::Drawing::Color::Snow;
			this->labelPlayerName->Location = System::Drawing::Point(866, 91);
			this->labelPlayerName->Name = L"labelPlayerName";
			this->labelPlayerName->Size = System::Drawing::Size(0, 50);
			this->labelPlayerName->TabIndex = 16;
			this->labelPlayerName->Click += gcnew System::EventHandler(this, &NormalModeForm::label4_Click);
			// 
			
			// 
			
			// 
			// NormalModeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1218, 693);
			this->Controls->Add(this->labelPlayerName);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->normalBTN);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"NormalModeForm";
			this->Text = L"NormalModeForm";
			this->Load += gcnew System::EventHandler(this, &NormalModeForm::NormalModeForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox03))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox02))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox01))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox00))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox04))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox05))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void NormalModeForm_Load(System::Object^ sender, System::EventArgs^ e) {
	labelPlayerName->Text = playerName;


}
private: System::Void pictureBox00_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
