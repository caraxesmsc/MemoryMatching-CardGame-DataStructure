#pragma once

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
		NormalModeForm(void)
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
			this->label2->Location = System::Drawing::Point(866, 113);
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
			this->label3->Location = System::Drawing::Point(866, 183);
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
			this->normalBTN->Location = System::Drawing::Point(909, 515);
			this->normalBTN->Name = L"normalBTN";
			this->normalBTN->Size = System::Drawing::Size(186, 59);
			this->normalBTN->TabIndex = 10;
			this->normalBTN->Text = L"Reset";
			this->normalBTN->UseVisualStyleBackColor = false;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::DarkGreen;
			this->tableLayoutPanel1->ColumnCount = 5;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50.95057F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				49.04943F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				135)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				144)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				126)));
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
			this->tableLayoutPanel1->Location = System::Drawing::Point(128, 175);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(669, 361);
			this->tableLayoutPanel1->TabIndex = 14;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Location = System::Drawing::Point(401, 183);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(131, 174);
			this->pictureBox13->TabIndex = 7;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Location = System::Drawing::Point(266, 183);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(127, 174);
			this->pictureBox12->TabIndex = 6;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Location = System::Drawing::Point(137, 183);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(123, 174);
			this->pictureBox11->TabIndex = 5;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Location = System::Drawing::Point(3, 183);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(122, 174);
			this->pictureBox10->TabIndex = 4;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox03
			// 
			this->pictureBox03->Location = System::Drawing::Point(401, 3);
			this->pictureBox03->Name = L"pictureBox03";
			this->pictureBox03->Size = System::Drawing::Size(131, 174);
			this->pictureBox03->TabIndex = 3;
			this->pictureBox03->TabStop = false;
			// 
			// pictureBox02
			// 
			this->pictureBox02->Location = System::Drawing::Point(266, 3);
			this->pictureBox02->Name = L"pictureBox02";
			this->pictureBox02->Size = System::Drawing::Size(127, 174);
			this->pictureBox02->TabIndex = 2;
			this->pictureBox02->TabStop = false;
			// 
			// pictureBox01
			// 
			this->pictureBox01->Location = System::Drawing::Point(137, 3);
			this->pictureBox01->Name = L"pictureBox01";
			this->pictureBox01->Size = System::Drawing::Size(123, 174);
			this->pictureBox01->TabIndex = 1;
			this->pictureBox01->TabStop = false;
			// 
			// pictureBox00
			// 
			this->pictureBox00->Location = System::Drawing::Point(3, 3);
			this->pictureBox00->Name = L"pictureBox00";
			this->pictureBox00->Size = System::Drawing::Size(122, 174);
			this->pictureBox00->TabIndex = 0;
			this->pictureBox00->TabStop = false;
			// 
			// pictureBox04
			// 
			this->pictureBox04->Location = System::Drawing::Point(545, 3);
			this->pictureBox04->Name = L"pictureBox04";
			this->pictureBox04->Size = System::Drawing::Size(121, 174);
			this->pictureBox04->TabIndex = 8;
			this->pictureBox04->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->Location = System::Drawing::Point(545, 183);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(121, 174);
			this->pictureBox14->TabIndex = 9;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(92, 127);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(758, 461);
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// NormalModeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1218, 693);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->normalBTN);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"NormalModeForm";
			this->Text = L"NormalModeForm";
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
};
}
