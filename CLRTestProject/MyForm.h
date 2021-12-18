#pragma once
#include "mainForm.h"

namespace CLRTestProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ topLable;
	private: System::Windows::Forms::Button^ loginButton;
	private: System::Windows::Forms::PictureBox^ loginPictureBox;
	private: System::Windows::Forms::PictureBox^ passPictureBox;


	private: System::Windows::Forms::TextBox^ loginTextBox;
	private: System::Windows::Forms::TextBox^ passTextBox;
	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->topLable = (gcnew System::Windows::Forms::Label());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->loginPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->passPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->loginTextBox = (gcnew System::Windows::Forms::TextBox());
			this->passTextBox = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->loginPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->passPictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// topLable
			// 
			this->topLable->Dock = System::Windows::Forms::DockStyle::Top;
			this->topLable->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 42, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->topLable->Location = System::Drawing::Point(0, 0);
			this->topLable->Name = L"topLable";
			this->topLable->Size = System::Drawing::Size(587, 143);
			this->topLable->TabIndex = 0;
			this->topLable->Text = L"Авторизация";
			this->topLable->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->topLable->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// loginButton
			// 
			this->loginButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->loginButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Silver;
			this->loginButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loginButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->loginButton->Location = System::Drawing::Point(163, 426);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(251, 58);
			this->loginButton->TabIndex = 1;
			this->loginButton->Text = L"Ввод";
			this->loginButton->UseVisualStyleBackColor = true;
			this->loginButton->Click += gcnew System::EventHandler(this, &MyForm::loginButton_Click);
			// 
			// loginPictureBox
			// 
			this->loginPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"loginPictureBox.Image")));
			this->loginPictureBox->Location = System::Drawing::Point(61, 179);
			this->loginPictureBox->Name = L"loginPictureBox";
			this->loginPictureBox->Size = System::Drawing::Size(100, 50);
			this->loginPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->loginPictureBox->TabIndex = 2;
			this->loginPictureBox->TabStop = false;
			// 
			// passPictureBox
			// 
			this->passPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"passPictureBox.Image")));
			this->passPictureBox->Location = System::Drawing::Point(61, 262);
			this->passPictureBox->Name = L"passPictureBox";
			this->passPictureBox->Size = System::Drawing::Size(100, 50);
			this->passPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->passPictureBox->TabIndex = 3;
			this->passPictureBox->TabStop = false;
			// 
			// loginTextBox
			// 
			this->loginTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->loginTextBox->Location = System::Drawing::Point(191, 184);
			this->loginTextBox->Name = L"loginTextBox";
			this->loginTextBox->Size = System::Drawing::Size(280, 45);
			this->loginTextBox->TabIndex = 4;
			// 
			// passTextBox
			// 
			this->passTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->passTextBox->Location = System::Drawing::Point(191, 267);
			this->passTextBox->Name = L"passTextBox";
			this->passTextBox->PasswordChar = '*';
			this->passTextBox->Size = System::Drawing::Size(280, 45);
			this->passTextBox->TabIndex = 5;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(587, 605);
			this->ControlBox = false;
			this->Controls->Add(this->passTextBox);
			this->Controls->Add(this->loginTextBox);
			this->Controls->Add(this->passPictureBox);
			this->Controls->Add(this->loginPictureBox);
			this->Controls->Add(this->loginButton);
			this->Controls->Add(this->topLable);
			this->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Tag = L"\\SQLEXPRESS";
			this->Text = L"Клиническая больница № 6";
			this->TransparencyKey = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->loginPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->passPictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool login_Password(String^ login, String^ password) {
			if (login == "Admin" && password == "Admin") {
				return true;
			}else {
				MessageBox::Show("Вы ввели неверный пароль", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return false;
			}
		}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ log = loginTextBox -> Text;
		String^ pass = passTextBox->Text;
		if (login_Password(log, pass)) {
			mainForm^ mf = gcnew mainForm();
			mf->Show();
			MyForm::Hide();
		}
		
	}
	private: System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
};
}
