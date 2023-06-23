#pragma once
#include <cmath>
#define WRITE_SAVEFILE StreamWriter^ wt = gcnew StreamWriter("C:\\Users\\terex\\Desktop\\SaveFiles\\"+ m_RoomNumber + ".txt", false);

using namespace System::IO;
namespace Курсовая1
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Form1 : public System::Windows::Forms::Form
	{
	protected: 
	 System::Windows::Forms::Button^ Save_button;
	 System::Windows::Forms::Button^ Clear_button;
	 System::Windows::Forms::TextBox^ textBox1;
	 System::Windows::Forms::TextBox^ textBox2;
	 System::Windows::Forms::TextBox^ textBox3;
	 System::Windows::Forms::TextBox^ textBox4;
	 System::Windows::Forms::CheckBox^ checkBox1;
	 System::Windows::Forms::CheckBox^ checkBox2;
	 System::Windows::Forms::CheckBox^ checkBox3;
	 System::Windows::Forms::CheckBox^ checkBox4;
	 System::Windows::Forms::CheckBox^ checkBox5;
	 System::Windows::Forms::CheckBox^ checkBox6;
	 System::Windows::Forms::TextBox^ textBox6;
	 System::Windows::Forms::TextBox^ textBox7;
	 System::Windows::Forms::TextBox^ textBox8;
	 System::Windows::Forms::TextBox^ textBox9;
	 System::Windows::Forms::TextBox^ textBox10;
	 System::Windows::Forms::TextBox^ textBox5;
	 System::Windows::Forms::CheckBox^ checkBox7;
	 System::Windows::Forms::CheckBox^ checkBox8;
	 System::Windows::Forms::CheckBox^ checkBox9;
	 System::Windows::Forms::CheckBox^ checkBox10;
	 System::Windows::Forms::TextBox^ textBox11;
	 System::Windows::Forms::TextBox^ textBox12;
	 System::Windows::Forms::TextBox^ textBox13;
	 System::Windows::Forms::TextBox^ textBox14;
	 System::Windows::Forms::Label^ NightSumLabel;
	 System::Windows::Forms::Label^ MiniBarLabel;
	 System::Windows::Forms::Label^ ServiceSumLabel;
	 System::Windows::Forms::Label^ SumLabel;
	 System::Windows::Forms::TextBox^ textBox15;
	 System::Windows::Forms::TextBox^ textBox16;
	 System::Windows::Forms::TextBox^ textBox17;
	 System::Windows::Forms::TextBox^ textBox18;
	 System::Windows::Forms::Label^ label5;
	 System::Windows::Forms::Button^ CalcSum;
	 System::Windows::Forms::Label^ NumLabel;
	 System::Windows::Forms::ComboBox^ RoomNum;
	 System::Windows::Forms::Button^ Find_button;
	 System::Windows::Forms::Label^ HotelTitle;
	 System::Windows::Forms::Label^ Typetitle;
	 System::Windows::Forms::Label^ ServicesLabel;
	 System::Windows::Forms::Label^ MinibarTitle;
	 System::Windows::Forms::DateTimePicker^ OutDate;
	 System::Windows::Forms::DateTimePicker^ InDate;
	 System::Windows::Forms::Label^ DateTitle;
	 System::Windows::Forms::Label^ GuestNames;
	 System::Windows::Forms::TextBox^ NumTypeText;
	 System::Windows::Forms::Label^ NumType_label;
	public:
		Form1(void)
		{
			InitializeComponent();
		}
	
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->NumLabel = (gcnew System::Windows::Forms::Label());
			this->RoomNum = (gcnew System::Windows::Forms::ComboBox());
			this->Find_button = (gcnew System::Windows::Forms::Button());
			this->HotelTitle = (gcnew System::Windows::Forms::Label());
			this->Typetitle = (gcnew System::Windows::Forms::Label());
			this->ServicesLabel = (gcnew System::Windows::Forms::Label());
			this->MinibarTitle = (gcnew System::Windows::Forms::Label());
			this->OutDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->InDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->DateTitle = (gcnew System::Windows::Forms::Label());
			this->GuestNames = (gcnew System::Windows::Forms::Label());
			this->NumTypeText = (gcnew System::Windows::Forms::TextBox());
			this->NumType_label = (gcnew System::Windows::Forms::Label());
			this->Save_button = (gcnew System::Windows::Forms::Button());
			this->Clear_button = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->NightSumLabel = (gcnew System::Windows::Forms::Label());
			this->MiniBarLabel = (gcnew System::Windows::Forms::Label());
			this->ServiceSumLabel = (gcnew System::Windows::Forms::Label());
			this->SumLabel = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->CalcSum = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// NumLabel
			// 
			this->NumLabel->AutoSize = true;
			this->NumLabel->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->NumLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->NumLabel->Font = (gcnew System::Drawing::Font(L"Segoe Script", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NumLabel->ForeColor = System::Drawing::Color::OliveDrab;
			this->NumLabel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->NumLabel->Location = System::Drawing::Point(26, 184);
			this->NumLabel->Name = L"NumLabel";
			this->NumLabel->Size = System::Drawing::Size(192, 73);
			this->NumLabel->TabIndex = 1;
			this->NumLabel->Text = L"Номер:";
			this->NumLabel->UseMnemonic = false;
			this->NumLabel->Click += gcnew System::EventHandler(this, &Form1::HotelTitle_Click);
			// 
			// RoomNum
			// 
			this->RoomNum->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->RoomNum->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->RoomNum->Font = (gcnew System::Drawing::Font(L"Segoe Script", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RoomNum->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->RoomNum->FormattingEnabled = true;
			this->RoomNum->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->RoomNum->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"10", L"11", L"12", L"13", L"14", L"15", L"16",
					L"17", L"18", L"19", L"20"
			});
			this->RoomNum->Location = System::Drawing::Point(297, 198);
			this->RoomNum->Name = L"RoomNum";
			this->RoomNum->Size = System::Drawing::Size(112, 59);
			this->RoomNum->TabIndex = 5;
			this->RoomNum->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::RoomNum_SelectedIndexChanged);
			// 
			// Find_button
			// 
			this->Find_button->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Find_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Find_button->Font = (gcnew System::Drawing::Font(L"Segoe Script", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Find_button->ForeColor = System::Drawing::Color::IndianRed;
			this->Find_button->Location = System::Drawing::Point(30, 533);
			this->Find_button->Name = L"Find_button";
			this->Find_button->Size = System::Drawing::Size(335, 76);
			this->Find_button->TabIndex = 6;
			this->Find_button->Text = L"Показать";
			this->Find_button->UseCompatibleTextRendering = true;
			this->Find_button->UseVisualStyleBackColor = false;
			this->Find_button->Click += gcnew System::EventHandler(this, &Form1::Find_button_Click);
			// 
			// HotelTitle
			// 
			this->HotelTitle->AutoSize = true;
			this->HotelTitle->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->HotelTitle->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HotelTitle->Font = (gcnew System::Drawing::Font(L"Segoe Script", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->HotelTitle->ForeColor = System::Drawing::Color::MidnightBlue;
			this->HotelTitle->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->HotelTitle->Location = System::Drawing::Point(27, 62);
			this->HotelTitle->Name = L"HotelTitle";
			this->HotelTitle->Size = System::Drawing::Size(418, 67);
			this->HotelTitle->TabIndex = 3;
			this->HotelTitle->Text = L"Хостел \"Невский\"";
			this->HotelTitle->UseMnemonic = false;
			this->HotelTitle->Click += gcnew System::EventHandler(this, &Form1::HotelTitle_Click);
			// 
			// Typetitle
			// 
			this->Typetitle->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Typetitle->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Typetitle->Font = (gcnew System::Drawing::Font(L"Segoe Script", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Typetitle->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Typetitle->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Typetitle->Location = System::Drawing::Point(23, 305);
			this->Typetitle->Name = L"Typetitle";
			this->Typetitle->Size = System::Drawing::Size(464, 114);
			this->Typetitle->TabIndex = 7;
			this->Typetitle->Text = L"10-14 стандарт,  2000р /н\r\n15-17 комфорт,  3000р /н\r\n18-20 люкс,        4000р /н\r"
				L"\n";
			this->Typetitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Typetitle->UseMnemonic = false;
			this->Typetitle->Click += gcnew System::EventHandler(this, &Form1::Typetitle_Click);
			// 
			// ServicesLabel
			// 
			this->ServicesLabel->AutoSize = true;
			this->ServicesLabel->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ServicesLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ServicesLabel->Font = (gcnew System::Drawing::Font(L"Segoe Script", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ServicesLabel->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ServicesLabel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ServicesLabel->Location = System::Drawing::Point(1473, 50);
			this->ServicesLabel->Name = L"ServicesLabel";
			this->ServicesLabel->Size = System::Drawing::Size(190, 134);
			this->ServicesLabel->TabIndex = 39;
			this->ServicesLabel->Text = L"Доп. \r\nуслуги:";
			this->ServicesLabel->UseMnemonic = false;
			// 
			// MinibarTitle
			// 
			this->MinibarTitle->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->MinibarTitle->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MinibarTitle->Font = (gcnew System::Drawing::Font(L"Segoe Script", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MinibarTitle->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->MinibarTitle->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->MinibarTitle->Location = System::Drawing::Point(591, 666);
			this->MinibarTitle->Name = L"MinibarTitle";
			this->MinibarTitle->Size = System::Drawing::Size(308, 67);
			this->MinibarTitle->TabIndex = 37;
			this->MinibarTitle->Text = L"Минибар:";
			this->MinibarTitle->UseMnemonic = false;
			// 
			// OutDate
			// 
			this->OutDate->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->OutDate->CalendarMonthBackground = System::Drawing::SystemColors::ButtonFace;
			this->OutDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->OutDate->Location = System::Drawing::Point(979, 527);
			this->OutDate->Name = L"OutDate";
			this->OutDate->Size = System::Drawing::Size(246, 32);
			this->OutDate->TabIndex = 36;
			// 
			// InDate
			// 
			this->InDate->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InDate->CalendarMonthBackground = System::Drawing::SystemColors::ButtonFace;
			this->InDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InDate->Location = System::Drawing::Point(979, 425);
			this->InDate->Name = L"InDate";
			this->InDate->Size = System::Drawing::Size(246, 32);
			this->InDate->TabIndex = 35;
			// 
			// DateTitle
			// 
			this->DateTitle->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->DateTitle->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DateTitle->Font = (gcnew System::Drawing::Font(L"Segoe Script", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DateTitle->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->DateTitle->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->DateTitle->Location = System::Drawing::Point(591, 425);
			this->DateTitle->Name = L"DateTitle";
			this->DateTitle->Size = System::Drawing::Size(344, 134);
			this->DateTitle->TabIndex = 34;
			this->DateTitle->Text = L"Даты \r\nпроживания:";
			this->DateTitle->UseMnemonic = false;
			// 
			// GuestNames
			// 
			this->GuestNames->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->GuestNames->Cursor = System::Windows::Forms::Cursors::Hand;
			this->GuestNames->Font = (gcnew System::Drawing::Font(L"Segoe Script", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->GuestNames->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GuestNames->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->GuestNames->Location = System::Drawing::Point(591, 172);
			this->GuestNames->Name = L"GuestNames";
			this->GuestNames->Size = System::Drawing::Size(305, 146);
			this->GuestNames->TabIndex = 33;
			this->GuestNames->Text = L"ФИО \r\nжителей:";
			this->GuestNames->UseMnemonic = false;
			// 
			// NumTypeText
			// 
			this->NumTypeText->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->NumTypeText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NumTypeText->Location = System::Drawing::Point(1001, 85);
			this->NumTypeText->Name = L"NumTypeText";
			this->NumTypeText->ReadOnly = true;
			this->NumTypeText->Size = System::Drawing::Size(181, 32);
			this->NumTypeText->TabIndex = 32;
			this->NumTypeText->TextChanged += gcnew System::EventHandler(this, &Form1::NumTypeText_TextChanged_1);
			// 
			// NumType_label
			// 
			this->NumType_label->AutoSize = true;
			this->NumType_label->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->NumType_label->Cursor = System::Windows::Forms::Cursors::Hand;
			this->NumType_label->Font = (gcnew System::Drawing::Font(L"Segoe Script", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NumType_label->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->NumType_label->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->NumType_label->Location = System::Drawing::Point(591, 50);
			this->NumType_label->Name = L"NumType_label";
			this->NumType_label->Size = System::Drawing::Size(305, 67);
			this->NumType_label->TabIndex = 31;
			this->NumType_label->Text = L"Тип номера:";
			this->NumType_label->UseMnemonic = false;
			this->NumType_label->Click += gcnew System::EventHandler(this, &Form1::NumType_label_Click);
			// 
			// Save_button
			// 
			this->Save_button->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Save_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Save_button->Font = (gcnew System::Drawing::Font(L"Segoe Script", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Save_button->ForeColor = System::Drawing::Color::ForestGreen;
			this->Save_button->Location = System::Drawing::Point(30, 642);
			this->Save_button->Name = L"Save_button";
			this->Save_button->Size = System::Drawing::Size(335, 76);
			this->Save_button->TabIndex = 40;
			this->Save_button->Text = L"Сохранить";
			this->Save_button->UseCompatibleTextRendering = true;
			this->Save_button->UseVisualStyleBackColor = false;
			this->Save_button->Click += gcnew System::EventHandler(this, &Form1::Save_button_Click);
			// 
			// Clear_button
			// 
			this->Clear_button->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Clear_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Clear_button->Font = (gcnew System::Drawing::Font(L"Segoe Script", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Clear_button->ForeColor = System::Drawing::Color::DarkViolet;
			this->Clear_button->Location = System::Drawing::Point(30, 750);
			this->Clear_button->Name = L"Clear_button";
			this->Clear_button->Size = System::Drawing::Size(335, 76);
			this->Clear_button->TabIndex = 41;
			this->Clear_button->Text = L"Очистить";
			this->Clear_button->UseCompatibleTextRendering = true;
			this->Clear_button->UseVisualStyleBackColor = false;
			this->Clear_button->Click += gcnew System::EventHandler(this, &Form1::Clear_button_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(1001, 172);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(292, 32);
			this->textBox1->TabIndex = 42;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(1001, 210);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(292, 32);
			this->textBox2->TabIndex = 43;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(1001, 248);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(292, 32);
			this->textBox3->TabIndex = 44;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(1001, 286);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(292, 32);
			this->textBox4->TabIndex = 45;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(979, 665);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(22, 21);
			this->checkBox1->TabIndex = 46;
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(979, 704);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(22, 21);
			this->checkBox2->TabIndex = 47;
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(979, 745);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(22, 21);
			this->checkBox3->TabIndex = 48;
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox3_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(979, 788);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(22, 21);
			this->checkBox4->TabIndex = 49;
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox4_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(979, 826);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(22, 21);
			this->checkBox5->TabIndex = 50;
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox5_CheckedChanged);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(979, 863);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(22, 21);
			this->checkBox6->TabIndex = 51;
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox6_CheckedChanged);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(1022, 656);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(221, 32);
			this->textBox6->TabIndex = 53;
			this->textBox6->Text = L"Шампанское - 500р";
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(1022, 694);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(221, 32);
			this->textBox7->TabIndex = 54;
			this->textBox7->Text = L"Вода - 150р";
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->Location = System::Drawing::Point(1022, 735);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(221, 32);
			this->textBox8->TabIndex = 55;
			this->textBox8->Text = L"Пиво - 250р";
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox9->Location = System::Drawing::Point(1022, 778);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(221, 32);
			this->textBox9->TabIndex = 56;
			this->textBox9->Text = L"Газировка - 150р";
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox10->Location = System::Drawing::Point(1022, 816);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(221, 32);
			this->textBox10->TabIndex = 57;
			this->textBox10->Text = L"Текила - 400р";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(1022, 854);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(221, 32);
			this->textBox5->TabIndex = 58;
			this->textBox5->Text = L"Виски - 400р";
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Location = System::Drawing::Point(1413, 234);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(22, 21);
			this->checkBox7->TabIndex = 59;
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox7_CheckedChanged);
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Location = System::Drawing::Point(1413, 272);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(22, 21);
			this->checkBox8->TabIndex = 60;
			this->checkBox8->UseVisualStyleBackColor = true;
			this->checkBox8->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox8_CheckedChanged);
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Location = System::Drawing::Point(1413, 309);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(22, 21);
			this->checkBox9->TabIndex = 61;
			this->checkBox9->UseVisualStyleBackColor = true;
			this->checkBox9->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox9_CheckedChanged);
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Location = System::Drawing::Point(1413, 348);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(22, 21);
			this->checkBox10->TabIndex = 62;
			this->checkBox10->UseVisualStyleBackColor = true;
			this->checkBox10->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox10_CheckedChanged);
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox11->Location = System::Drawing::Point(1471, 225);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(391, 32);
			this->textBox11->TabIndex = 63;
			this->textBox11->Text = L"Трансфер от и до аэропорта - 1400р\r\n";
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox12->Location = System::Drawing::Point(1471, 263);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(391, 32);
			this->textBox12->TabIndex = 64;
			this->textBox12->Text = L"Экскурсия - 3000р";
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox13->Location = System::Drawing::Point(1471, 301);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(391, 32);
			this->textBox13->TabIndex = 65;
			this->textBox13->Text = L"Полотенце - 300р";
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox14->Location = System::Drawing::Point(1471, 339);
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(391, 32);
			this->textBox14->TabIndex = 66;
			this->textBox14->Text = L"Стирка в прачечной - 500р";
			// 
			// NightSumLabel
			// 
			this->NightSumLabel->AutoSize = true;
			this->NightSumLabel->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->NightSumLabel->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NightSumLabel->Location = System::Drawing::Point(1267, 511);
			this->NightSumLabel->Name = L"NightSumLabel";
			this->NightSumLabel->Size = System::Drawing::Size(317, 46);
			this->NightSumLabel->TabIndex = 67;
			this->NightSumLabel->Text = L"Количество ночей:";
			// 
			// MiniBarLabel
			// 
			this->MiniBarLabel->AutoSize = true;
			this->MiniBarLabel->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->MiniBarLabel->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MiniBarLabel->Location = System::Drawing::Point(1325, 599);
			this->MiniBarLabel->Name = L"MiniBarLabel";
			this->MiniBarLabel->Size = System::Drawing::Size(163, 46);
			this->MiniBarLabel->TabIndex = 68;
			this->MiniBarLabel->Text = L"Минибар";
			this->MiniBarLabel->Click += gcnew System::EventHandler(this, &Form1::MiniBarLabel_Click);
			// 
			// ServiceSumLabel
			// 
			this->ServiceSumLabel->AutoSize = true;
			this->ServiceSumLabel->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ServiceSumLabel->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ServiceSumLabel->Location = System::Drawing::Point(1325, 681);
			this->ServiceSumLabel->Name = L"ServiceSumLabel";
			this->ServiceSumLabel->Size = System::Drawing::Size(279, 46);
			this->ServiceSumLabel->TabIndex = 69;
			this->ServiceSumLabel->Text = L"Платные услуги";
			// 
			// SumLabel
			// 
			this->SumLabel->AutoSize = true;
			this->SumLabel->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->SumLabel->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SumLabel->Location = System::Drawing::Point(1325, 885);
			this->SumLabel->Name = L"SumLabel";
			this->SumLabel->Size = System::Drawing::Size(153, 46);
			this->SumLabel->TabIndex = 70;
			this->SumLabel->Text = L"В сумме";
			this->SumLabel->Click += gcnew System::EventHandler(this, &Form1::SumLabel_Click);
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox15->Location = System::Drawing::Point(1681, 521);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(181, 32);
			this->textBox15->TabIndex = 71;
			// 
			// textBox16
			// 
			this->textBox16->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox16->Location = System::Drawing::Point(1681, 607);
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(181, 32);
			this->textBox16->TabIndex = 72;
			// 
			// textBox17
			// 
			this->textBox17->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox17->Location = System::Drawing::Point(1681, 689);
			this->textBox17->Name = L"textBox17";
			this->textBox17->ReadOnly = true;
			this->textBox17->Size = System::Drawing::Size(181, 32);
			this->textBox17->TabIndex = 73;
			// 
			// textBox18
			// 
			this->textBox18->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox18->Location = System::Drawing::Point(1583, 893);
			this->textBox18->Name = L"textBox18";
			this->textBox18->ReadOnly = true;
			this->textBox18->Size = System::Drawing::Size(181, 32);
			this->textBox18->TabIndex = 74;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe Script", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(1522, 409);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(141, 60);
			this->label5->TabIndex = 75;
			this->label5->Text = L"СЧЁТ";
			this->label5->Click += gcnew System::EventHandler(this, &Form1::label5_Click);
			// 
			// CalcSum
			// 
			this->CalcSum->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->CalcSum->Font = (gcnew System::Drawing::Font(L"Segoe Script", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CalcSum->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->CalcSum->Location = System::Drawing::Point(1435, 778);
			this->CalcSum->Name = L"CalcSum";
			this->CalcSum->Size = System::Drawing::Size(329, 79);
			this->CalcSum->TabIndex = 76;
			this->CalcSum->Text = L"Расcчитать";
			this->CalcSum->UseVisualStyleBackColor = false;
			this->CalcSum->Click += gcnew System::EventHandler(this, &Form1::CalcSum_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(144, 144);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::SlateGray;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1898, 1024);
			this->Controls->Add(this->CalcSum);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->SumLabel);
			this->Controls->Add(this->ServiceSumLabel);
			this->Controls->Add(this->MiniBarLabel);
			this->Controls->Add(this->NightSumLabel);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->checkBox10);
			this->Controls->Add(this->checkBox9);
			this->Controls->Add(this->checkBox8);
			this->Controls->Add(this->checkBox7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Clear_button);
			this->Controls->Add(this->Save_button);
			this->Controls->Add(this->ServicesLabel);
			this->Controls->Add(this->MinibarTitle);
			this->Controls->Add(this->OutDate);
			this->Controls->Add(this->InDate);
			this->Controls->Add(this->DateTitle);
			this->Controls->Add(this->GuestNames);
			this->Controls->Add(this->NumTypeText);
			this->Controls->Add(this->NumType_label);
			this->Controls->Add(this->Typetitle);
			this->Controls->Add(this->Find_button);
			this->Controls->Add(this->RoomNum);
			this->Controls->Add(this->HotelTitle);
			this->Controls->Add(this->NumLabel);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
#pragma region Component Functions
		System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e)
		{
		}
		System::Void NumTypeText_TextChanged(System::Object^ sender, System::EventArgs^ e)
		{
		}
		System::Void HotelTitle_Click(System::Object^ sender, System::EventArgs^ e)
		{
		}
		System::Void NumTypeText_TextChanged_1(System::Object^ sender, System::EventArgs^ e)
		{
		}
		System::Void RoomNum_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
		{

		}
		System::Void NumType_label_Click(System::Object^ sender, System::EventArgs^ e)
		{
		}
		System::Void MiniBarLabel_Click(System::Object^ sender, System::EventArgs^ e)
		{
		}
		System::Void SumLabel_Click(System::Object^ sender, System::EventArgs^ e)
		{
		}
		System::Void Typetitle_Click(System::Object^ sender, System::EventArgs^ e)
		{
		};
		System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
		virtual System::Void Find_button_Click(System::Object^ sender, System::EventArgs^ e) {}
		virtual System::Void Save_button_Click(System::Object^ sender, System::EventArgs^ e) { }
		virtual System::Void Clear_button_Click(System::Object^ sender, System::EventArgs^ e) { }
		virtual System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {}
		virtual System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e){ }
		virtual System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		virtual System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		virtual System::Void checkBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		virtual System::Void checkBox6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		virtual System::Void checkBox7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		virtual System::Void checkBox8_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		virtual System::Void checkBox9_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		virtual System::Void checkBox10_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		virtual System::Void CalcSum_Click(System::Object^ sender, System::EventArgs^ e) { }
#pragma endregion
};

	public ref class NumberValue : Form1
	{
	private:
		int m_RoomNumber;
		String^ RoomType;
		String^ GuestName1;
		String^ GuestName2;
		String^ GuestName3;
		String^ GuestName4;
		System::DateTime ReservDate;
		System::DateTime CheckoutDate;
		array <bool>^ MiniBarCheck = gcnew array<bool>(6);
		array <bool>^ PaidServices = gcnew array<bool>(4);
		static array <int>^ MiniBarPrice =gcnew array <int> {500,150,250,150,400,400};
		static array <int>^ ServicePrice = gcnew array <int>{1400,3000, 300, 500};
		unsigned int NightSum;
		unsigned int MiniBarSum;
		unsigned int ServiceSum;
		unsigned int AllSum;
	public:
		NumberValue(void) 
		{
		}
		void set_RoomNumber()
		{
			m_RoomNumber = System::Convert::ToInt32(RoomNum->SelectedItem);
		}
		void set_RoomType()
		{
			if (m_RoomNumber >= 10 && m_RoomNumber <= 14)
			{
				RoomType = "Стандарт";
				textBox1->Enabled = true;
				textBox2->Enabled = true;
				textBox3->Enabled = false;
				textBox4->Enabled = false;
				textBox1->BackColor = System::Drawing::SystemColors::ButtonFace;
				textBox2->BackColor = System::Drawing::SystemColors::ButtonFace;
				textBox3->BackColor = System::Drawing::Color::SlateGray;
				textBox4->BackColor = System::Drawing::Color::SlateGray;
				
			}
			if (m_RoomNumber >= 15 && m_RoomNumber <= 17)
			{
				RoomType = "Комфорт";
				textBox1->Enabled = true;
				textBox2->Enabled = true;
				textBox3->Enabled = true;
				textBox4->Enabled = false;
				textBox1->BackColor = System::Drawing::SystemColors::ButtonFace;
				textBox2->BackColor = System::Drawing::SystemColors::ButtonFace;
				textBox3->BackColor = System::Drawing::SystemColors::ButtonFace;
				textBox4->BackColor = System::Drawing::Color::SlateGray;
			}
			if (m_RoomNumber >= 18 && m_RoomNumber <= 20)
			{
				RoomType = "Люкс";
				textBox1->Enabled = true;
				textBox2->Enabled = true;
				textBox3->Enabled = true;
				textBox4->Enabled = true;
				textBox1->BackColor = System::Drawing::SystemColors::ButtonFace;
				textBox2->BackColor = System::Drawing::SystemColors::ButtonFace;
				textBox3->BackColor = System::Drawing::SystemColors::ButtonFace;
				textBox4->BackColor = System::Drawing::SystemColors::ButtonFace;
			}
		}
		void Display_RoomType()
		{
			set_RoomNumber();
			set_RoomType();
			NumTypeText->Text = RoomType;
		}
		void Save_ToFile()
		{
			set_RoomNumber();
			StreamWriter^ wt = gcnew StreamWriter
			("C:\\Users\\terex\\Desktop\\SaveFiles\\" 
			 + m_RoomNumber  
			 + ".txt", false);
			wt->WriteLine(textBox1->Text);
			wt->WriteLine(textBox2->Text);
			wt->WriteLine(textBox3->Text);
			wt->WriteLine(textBox4->Text);
			wt->WriteLine(InDate->Value);
			wt->WriteLine(OutDate->Value);
			for (int i = 0; i < 6; i++)
				wt->WriteLine(MiniBarCheck[i]);
			for(int i = 0; i < 4; i++)
				wt->WriteLine(PaidServices[i]);
			wt->WriteLine(MiniBarSum);
			wt->WriteLine(ServiceSum);
			wt->Close();
		}
		void Write_ToMembers()
		{
			StreamReader^ rd = File::OpenText
			("C:\\Users\\terex\\Desktop\\SaveFiles\\"
				+ m_RoomNumber
				+ ".txt");
			GuestName1 = rd->ReadLine();
			GuestName2 = rd->ReadLine();
			GuestName3 = rd->ReadLine();
			GuestName4 = rd->ReadLine();
			try
			{
				ReservDate = System::Convert::ToDateTime(rd->ReadLine());
				CheckoutDate = System::Convert::ToDateTime(rd->ReadLine());
			}
			catch (System::FormatException^ error)
			{
				ReservDate = System::DateTime::Now;
				CheckoutDate = System::DateTime::Now;
			}
			try {
				for (int i = 0; i < 6; i++)
					MiniBarCheck[i] = System::Convert::ToBoolean(rd->ReadLine());
				for (int i = 0; i < 4; i++)
					PaidServices[i] = System::Convert::ToBoolean(rd->ReadLine());
			}
			catch (FormatException^ error)
			{
				for (int i = 0; i < 6; i++)
					MiniBarCheck[i] = false;
				for (int i = 0; i < 4; i++)
					PaidServices[i] = false;
			}
			try {
				MiniBarSum = System::Convert::ToInt32(rd->ReadLine());
				ServiceSum = System::Convert::ToInt32(rd->ReadLine());
			}
			catch (FormatException^ x)
			{
				MiniBarSum = 0;
				ServiceSum = 0;
				delete x;
			}
			rd->Close();
		}
		void Calc_Sum()
		{
			
			unsigned int paid_days;
			paid_days = (OutDate->Value.DayOfYear - InDate->Value.DayOfYear);
			NightSum = 0;
			if (RoomType == "Стандарт")
				NightSum = paid_days * 2000;
			if (RoomType == "Комфорт")
				NightSum = paid_days * 3000;
			if (RoomType == "Люкс")
				NightSum = paid_days * 4000;
			MiniBarSum = 0;
			for (int i = 0; i < 6; ++i)
			{
				if (MiniBarCheck[i] == true)
					MiniBarSum = MiniBarSum + MiniBarPrice[i];
			}
			ServiceSum = 0;
			for (int i = 0; i < 4; ++i)
			{
				if (PaidServices[i] == true)
					ServiceSum = ServiceSum + ServicePrice[i];

			}
		}
		void Display_Values()
		{
			Display_RoomType();
			textBox1->Text = GuestName1;
			textBox2->Text = GuestName2;
			textBox3->Text = GuestName3;
			textBox4->Text = GuestName4;
			InDate->Value = ReservDate;
			OutDate->Value = CheckoutDate;
			checkBox1->Checked  = MiniBarCheck[0];
			checkBox2->Checked  = MiniBarCheck[1];
			checkBox3->Checked  = MiniBarCheck[2];
			checkBox4->Checked  = MiniBarCheck[3];
			checkBox5->Checked  = MiniBarCheck[4];
			checkBox6->Checked  = MiniBarCheck[5];
			checkBox7->Checked  = PaidServices[0];
			checkBox8->Checked  = PaidServices[1];
			checkBox9->Checked  = PaidServices[2];
			checkBox10->Checked = PaidServices[3];
			NightSumLabel->Text = "Количество ночей: " + (OutDate->Value - InDate->Value);
			textBox15->Text =	NightSum.ToString()+"p";
			textBox16->Text = MiniBarSum.ToString()+"p";
			textBox17->Text = ServiceSum.ToString()+"p";
		}
		System::Void Find_button_Click(System::Object^ sender, System::EventArgs^ e) override
		{
			set_RoomNumber();
			if (m_RoomNumber <= 1 || m_RoomNumber > 20)
			{
				MessageBox::Show("Пожалуйста выберите гостиничный номер.",
					"Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else 
			{
				Write_ToMembers();
				Calc_Sum();
				Display_Values();
			}
		}
		System::Void Save_button_Click(System::Object^ sender, System::EventArgs^ e) override
		{
			set_RoomNumber();
			Save_ToFile();
		}
		System::Void Clear_button_Click(System::Object^ sender, System::EventArgs^ e) override
		{
			if (MessageBox::Show
			(this, "Вы уверены, что хотите очистить все сведения о номере? \n Это приведет к потере данных.",
				"Предупреждение",
				MessageBoxButtons::YesNo,
				MessageBoxIcon::Warning) ==System::Windows::Forms::DialogResult::Yes)
			{
				set_RoomNumber();
				StreamWriter^ wt = gcnew StreamWriter
				("C:\\Users\\terex\\Desktop\\SaveFiles\\"
					+ m_RoomNumber
					+ ".txt", false);
				for (int i = 0; i < 20; i++)
					wt->WriteLine("");
				wt->Close();
				Write_ToMembers();
				Display_Values();
				MessageBox::Show("Данные успешно удалены", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
			else {};
		}
		System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) override {
			MiniBarCheck[0] = checkBox1->Checked;
			Calc_Sum();
			textBox16->Text = MiniBarSum.ToString() + "p";
			textBox17->Text = ServiceSum.ToString() + "p";
		}
		System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) override {
			MiniBarCheck[1] = checkBox2->Checked;
			Calc_Sum();
			textBox16->Text = MiniBarSum.ToString() + "p";
			textBox17->Text = ServiceSum.ToString() + "p";
		}
		System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) override {
			MiniBarCheck[2] = checkBox3->Checked;
			Calc_Sum();
			textBox16->Text = MiniBarSum.ToString() + "p";
			textBox17->Text = ServiceSum.ToString() + "p";
		}
		System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) override {
			MiniBarCheck[3] = checkBox4->Checked;
			Calc_Sum();
			textBox16->Text = MiniBarSum.ToString() + "p";
			textBox17->Text = ServiceSum.ToString() + "p";
		}
		System::Void checkBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) override {
			MiniBarCheck[4] = checkBox5->Checked;
			Calc_Sum();
			textBox16->Text = MiniBarSum.ToString() + "p";
			textBox17->Text = ServiceSum.ToString() + "p";
		}
		System::Void checkBox6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) override {
			MiniBarCheck[5] = checkBox6->Checked;
			Calc_Sum();
			textBox16->Text = MiniBarSum.ToString() + "p";
			textBox17->Text = ServiceSum.ToString() + "p";
		}
		System::Void checkBox7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) override {
			PaidServices[0] = checkBox7->Checked;
			Calc_Sum();
			textBox16->Text = MiniBarSum.ToString() + "p";
			textBox17->Text = ServiceSum.ToString() + "p";
		}
		System::Void checkBox8_CheckedChanged(System::Object^ sender, System::EventArgs^ e) override {
			PaidServices[1] = checkBox8->Checked;
			Calc_Sum();
			textBox16->Text = MiniBarSum.ToString() + "p";
			textBox17->Text = ServiceSum.ToString() + "p";
		}
		System::Void checkBox9_CheckedChanged(System::Object^ sender, System::EventArgs^ e) override {
			PaidServices[2] = checkBox9->Checked;
			Calc_Sum();
		}
		System::Void checkBox10_CheckedChanged(System::Object^ sender, System::EventArgs^ e) override {
			PaidServices[3] = checkBox10->Checked;
			Calc_Sum();
			textBox16->Text = MiniBarSum.ToString() + "p";
			textBox17->Text = ServiceSum.ToString() + "p";
		}
		System::Void CalcSum_Click(System::Object^ sender, System::EventArgs^ e) override { 
			Calc_Sum();
			AllSum = NightSum + MiniBarSum + ServiceSum;
			Display_Values();
			textBox18->Text = AllSum.ToString()+"p";
		}
	};
}