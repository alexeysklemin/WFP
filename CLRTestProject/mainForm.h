#pragma once

namespace CLRTestProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� mainForm
	/// </summary>
	public ref class mainForm : public System::Windows::Forms::Form
	{
	public:
		mainForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ firstButton;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->firstButton = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstButton))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel1->Location = System::Drawing::Point(191, 72);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(860, 423);
			this->panel1->TabIndex = 0;
			// 
			// firstButton
			// 
			this->firstButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"firstButton.Image")));
			this->firstButton->Location = System::Drawing::Point(52, 144);
			this->firstButton->Name = L"firstButton";
			this->firstButton->Size = System::Drawing::Size(100, 50);
			this->firstButton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->firstButton->TabIndex = 1;
			this->firstButton->TabStop = false;
			this->firstButton->Click += gcnew System::EventHandler(this, &mainForm::firstButton_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(52, 284);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &mainForm::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(52, 407);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &mainForm::pictureBox2_Click);
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(1050, 492);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->firstButton);
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"mainForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"����������� �������� � 6";
			this->TransparencyKey = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Load += gcnew System::EventHandler(this, &mainForm::mainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->firstButton))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void mainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void firstButton_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("�� ����� ������ ������", "���������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("�� ����� ������ ������", "���������", MessageBoxButtons::OK, MessageBoxIcon::Warning);

	}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("�� ����� ������ ������", "���������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
}
};
}
