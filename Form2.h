#pragma once
#include "Form1.h"

namespace Курсовая2
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
		{
			InitializeComponent();

		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox5;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox7;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	protected:
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2::typeid));
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->checkedListBox5 = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkedListBox7 = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkedListBox6 = (gcnew System::Windows::Forms::CheckedListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker4 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(348, 149);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 8;
			// 
			// checkedListBox5
			// 
			this->checkedListBox5->FormattingEnabled = true;
			this->checkedListBox5->Location = System::Drawing::Point(270, 440);
			this->checkedListBox5->Name = L"checkedListBox5";
			this->checkedListBox5->Size = System::Drawing::Size(120, 96);
			this->checkedListBox5->TabIndex = 10;
			this->checkedListBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &Form2::checkedListBox1_SelectedIndexChanged);
			// 
			// checkedListBox7
			// 
			this->checkedListBox7->FormattingEnabled = true;
			this->checkedListBox7->Location = System::Drawing::Point(890, 285);
			this->checkedListBox7->Name = L"checkedListBox7";
			this->checkedListBox7->Size = System::Drawing::Size(120, 96);
			this->checkedListBox7->TabIndex = 12;
			// 
			// checkedListBox6
			// 
			this->checkedListBox6->FormattingEnabled = true;
			this->checkedListBox6->Location = System::Drawing::Point(863, 55);
			this->checkedListBox6->Name = L"checkedListBox6";
			this->checkedListBox6->Size = System::Drawing::Size(120, 96);
			this->checkedListBox6->TabIndex = 14;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->Location = System::Drawing::Point(39, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(214, 46);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Номер, тип:";
			this->label1->UseMnemonic = false;
			this->label1->Click += gcnew System::EventHandler(this, &Form2::label1_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(318, 55);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 19;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label2->Location = System::Drawing::Point(39, 136);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(259, 46);
			this->label2->TabIndex = 20;
			this->label2->Text = L"ФИО жителей:";
			this->label2->UseMnemonic = false;
			this->label2->Click += gcnew System::EventHandler(this, &Form2::label1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label3->Location = System::Drawing::Point(39, 285);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(228, 92);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Даты \r\nпроживания:";
			this->label3->UseMnemonic = false;
			this->label3->Click += gcnew System::EventHandler(this, &Form2::label3_Click);
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->Location = System::Drawing::Point(318, 285);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(200, 26);
			this->dateTimePicker3->TabIndex = 22;
			// 
			// dateTimePicker4
			// 
			this->dateTimePicker4->Location = System::Drawing::Point(318, 351);
			this->dateTimePicker4->Name = L"dateTimePicker4";
			this->dateTimePicker4->Size = System::Drawing::Size(200, 26);
			this->dateTimePicker4->TabIndex = 23;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label4->Location = System::Drawing::Point(39, 440);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(171, 46);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Минибар:";
			this->label4->UseMnemonic = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label5->Location = System::Drawing::Point(609, 42);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(176, 46);
			this->label5->TabIndex = 25;
			this->label5->Text = L"Ресторан:";
			this->label5->UseMnemonic = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label6->Location = System::Drawing::Point(609, 265);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(212, 46);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Доп. услуги:";
			this->label6->UseMnemonic = false;
			this->label6->Click += gcnew System::EventHandler(this, &Form2::label6_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1053, 621);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dateTimePicker4);
			this->Controls->Add(this->dateTimePicker3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkedListBox6);
			this->Controls->Add(this->checkedListBox7);
			this->Controls->Add(this->checkedListBox5);
			this->Controls->Add(this->textBox2);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"Form2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Журнал2";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Form2_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}