#pragma once

namespace CLRWindowsFormsPressFToAddNumbers {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
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
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
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
			this->button_stop->Text = L"暫停 加1";
			this->button_stop->UseVisualStyleBackColor = false;
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
			this->button_continue->Text = L"繼續 加1";
			this->button_continue->UseVisualStyleBackColor = false;
			// 
			// label_number
			// 
			this->label_number->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
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
			this->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->KeyPreview = true;
			this->Margin = System::Windows::Forms::Padding(8, 8, 8, 8);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"按F鍵 加1";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
