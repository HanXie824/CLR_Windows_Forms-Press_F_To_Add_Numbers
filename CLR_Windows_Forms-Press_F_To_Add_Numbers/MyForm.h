#pragma once

namespace CLRWindowsFormsPressFToAddNumbers 
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm ���K�n
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form 
	{
		public:
			MyForm(void)
			{
				InitializeComponent();
				//
				//TODO:  �b���[�J�غc�禡�{���X
				//
			}

		protected:
			/// <summary>
			/// �M������ϥΤ����귽�C
			/// </summary>
			~MyForm()
			{
				if (components)
				{
					delete components;
				}
			}
	
		private: System::Windows::Forms::Button^ button_stop;
		private: System::Windows::Forms::Button^ button_continue;
		private: System::Windows::Forms::Label^ label_number;
		
		protected:

		private:
			/// <summary>
			/// �]�p�u��һݪ��ܼơC
			/// </summary>
			System::ComponentModel::Container ^components;

		#pragma region Windows Form Designer generated code
			/// <summary>
			/// �����]�p�u��䴩�һݪ���k - �ФŨϥε{���X�s�边�ק�
			/// �o�Ӥ�k�����e�C
			/// </summary>
			void InitializeComponent(void)
			{
				this->button_stop = (gcnew System::Windows::Forms::Button());
				this->button_continue = (gcnew System::Windows::Forms::Button());
				this->label_number = (gcnew System::Windows::Forms::Label());
				this->SuspendLayout();
				// 
				// button_stop
				// 
				this->button_stop->BackColor = System::Drawing::Color::IndianRed;
				this->button_stop->Cursor = System::Windows::Forms::Cursors::Hand;
				this->button_stop->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				this->button_stop->Location = System::Drawing::Point(12, 12);
				this->button_stop->Name = L"button_stop";
				this->button_stop->Size = System::Drawing::Size(200, 80);
				this->button_stop->TabIndex = 0;
				this->button_stop->Text = L"�Ȱ� �[1";
				this->button_stop->UseVisualStyleBackColor = false;
				this->button_stop->Click += gcnew System::EventHandler(this, &MyForm::button_stop_Click);
				// 
				// button_continue
				// 
				this->button_continue->BackColor = System::Drawing::Color::RoyalBlue;
				this->button_continue->Cursor = System::Windows::Forms::Cursors::Hand;
				this->button_continue->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				this->button_continue->Location = System::Drawing::Point(12, 152);
				this->button_continue->Name = L"button_continue";
				this->button_continue->Size = System::Drawing::Size(200, 80);
				this->button_continue->TabIndex = 1;
				this->button_continue->Text = L"�~�� �[1";
				this->button_continue->UseVisualStyleBackColor = false;
				this->button_continue->Click += gcnew System::EventHandler(this, &MyForm::button_continue_Click);
				// 
				// label_number
				// 
				this->label_number->Font = (gcnew System::Drawing::Font(L"�L�n������", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(136)));
				this->label_number->Location = System::Drawing::Point(233, 12);
				this->label_number->Name = L"label_number";
				this->label_number->Size = System::Drawing::Size(233, 220);
				this->label_number->TabIndex = 2;
				this->label_number->Text = L"0";
				this->label_number->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
				// 
				// MyForm
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(25, 50);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->BackColor = System::Drawing::SystemColors::ControlDark;
				this->ClientSize = System::Drawing::Size(478, 244);
				this->Controls->Add(this->label_number);
				this->Controls->Add(this->button_continue);
				this->Controls->Add(this->button_stop);
				this->Font = (gcnew System::Drawing::Font(L"�L�n������", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
				this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
				this->KeyPreview = true;
				this->Margin = System::Windows::Forms::Padding(8);
				this->MaximizeBox = false;
				this->Name = L"MyForm";
				this->Text = L"��F�� �[1";
				this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
				this->ResumeLayout(false);

			}
		#pragma endregion
	
		/* ��L����Q���U���ƥ� */
		private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) 
		{
			int number = Convert::ToInt32(label_number->Text);

			if (e->KeyCode == Keys::F)
			{
				number += 1;
				label_number->Text = number.ToString();
			}
		}
		
		/* ���s�i�Ȱ� �[1�j�Q�I�����ƥ� */
		private: System::Void button_stop_Click(System::Object^ sender, System::EventArgs^ e)
		{
			MyForm::KeyPreview = false; // ����������ƥ�
		}

		/* ���s�i�~�� �[1�j�Q�I�����ƥ� */
		private: System::Void button_continue_Click(System::Object^ sender, System::EventArgs^ e)
		{
			MyForm::KeyPreview = true; // ��������ƥ�
		}
	};
}
