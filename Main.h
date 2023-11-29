#pragma once
#include <math.h>
#include <string>



namespace �������������� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ D1_Group;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::RadioButton^ Belt_speed;

	private: System::Windows::Forms::RadioButton^ Saverin;
	private: System::Windows::Forms::RadioButton^ Belt_depth;
	private: System::Windows::Forms::RadioButton^ Gabarite;
	private: System::Windows::Forms::GroupBox^ Sav_group;
	private: System::Windows::Forms::RadioButton^ Sav_W1_130_value;


	private: System::Windows::Forms::RadioButton^ Sav_W1_110_value;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ Sav_results;

	private: System::Windows::Forms::Button^ Sav_button;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ Sav_N_value;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ Sav_n1_value;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->D1_Group = (gcnew System::Windows::Forms::GroupBox());
			this->Belt_depth = (gcnew System::Windows::Forms::RadioButton());
			this->Gabarite = (gcnew System::Windows::Forms::RadioButton());
			this->Belt_speed = (gcnew System::Windows::Forms::RadioButton());
			this->Saverin = (gcnew System::Windows::Forms::RadioButton());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Sav_group = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Sav_n1_value = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Sav_N_value = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Sav_results = (gcnew System::Windows::Forms::RichTextBox());
			this->Sav_button = (gcnew System::Windows::Forms::Button());
			this->Sav_W1_130_value = (gcnew System::Windows::Forms::RadioButton());
			this->Sav_W1_110_value = (gcnew System::Windows::Forms::RadioButton());
			this->D1_Group->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->Sav_group->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(48, 125);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"�������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// D1_Group
			// 
			this->D1_Group->Controls->Add(this->Belt_depth);
			this->D1_Group->Controls->Add(this->button1);
			this->D1_Group->Controls->Add(this->Gabarite);
			this->D1_Group->Controls->Add(this->Belt_speed);
			this->D1_Group->Controls->Add(this->Saverin);
			this->D1_Group->Location = System::Drawing::Point(12, 31);
			this->D1_Group->Name = L"D1_Group";
			this->D1_Group->Size = System::Drawing::Size(200, 155);
			this->D1_Group->TabIndex = 1;
			this->D1_Group->TabStop = false;
			this->D1_Group->Text = L"������� �������� �����";
			// 
			// Belt_depth
			// 
			this->Belt_depth->AutoSize = true;
			this->Belt_depth->Location = System::Drawing::Point(6, 99);
			this->Belt_depth->Name = L"Belt_depth";
			this->Belt_depth->Size = System::Drawing::Size(171, 20);
			this->Belt_depth->TabIndex = 3;
			this->Belt_depth->TabStop = true;
			this->Belt_depth->Text = L"����� ������� �����";
			this->Belt_depth->UseVisualStyleBackColor = true;
			// 
			// Gabarite
			// 
			this->Gabarite->AutoSize = true;
			this->Gabarite->Location = System::Drawing::Point(6, 73);
			this->Gabarite->Name = L"Gabarite";
			this->Gabarite->Size = System::Drawing::Size(134, 20);
			this->Gabarite->TabIndex = 2;
			this->Gabarite->TabStop = true;
			this->Gabarite->Text = L"����� ��������";
			this->Gabarite->UseVisualStyleBackColor = true;
			// 
			// Belt_speed
			// 
			this->Belt_speed->AutoSize = true;
			this->Belt_speed->Location = System::Drawing::Point(6, 47);
			this->Belt_speed->Name = L"Belt_speed";
			this->Belt_speed->Size = System::Drawing::Size(152, 20);
			this->Belt_speed->TabIndex = 1;
			this->Belt_speed->TabStop = true;
			this->Belt_speed->Text = L"�� �������� �����";
			this->Belt_speed->UseVisualStyleBackColor = true;
			// 
			// Saverin
			// 
			this->Saverin->AutoSize = true;
			this->Saverin->Location = System::Drawing::Point(6, 21);
			this->Saverin->Name = L"Saverin";
			this->Saverin->Size = System::Drawing::Size(177, 20);
			this->Saverin->TabIndex = 0;
			this->Saverin->TabStop = true;
			this->Saverin->Text = L"�� ������� ��������";
			this->Saverin->UseVisualStyleBackColor = true;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�������ToolStripMenuItem,
					this->�����ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(868, 28);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(79, 24);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem_Click);
			// 
			// Sav_group
			// 
			this->Sav_group->Controls->Add(this->label5);
			this->Sav_group->Controls->Add(this->Sav_n1_value);
			this->Sav_group->Controls->Add(this->label4);
			this->Sav_group->Controls->Add(this->label3);
			this->Sav_group->Controls->Add(this->label2);
			this->Sav_group->Controls->Add(this->Sav_N_value);
			this->Sav_group->Controls->Add(this->label1);
			this->Sav_group->Controls->Add(this->Sav_results);
			this->Sav_group->Controls->Add(this->Sav_button);
			this->Sav_group->Controls->Add(this->Sav_W1_130_value);
			this->Sav_group->Controls->Add(this->Sav_W1_110_value);
			this->Sav_group->Location = System::Drawing::Point(18, 192);
			this->Sav_group->Name = L"Sav_group";
			this->Sav_group->Size = System::Drawing::Size(194, 322);
			this->Sav_group->TabIndex = 3;
			this->Sav_group->TabStop = false;
			this->Sav_group->Text = L"������� ��������";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 115);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(158, 32);
			this->label5->TabIndex = 10;
			this->label5->Text = L"������� ��������\r\n �������� ����� 1/���:";
			// 
			// Sav_n1_value
			// 
			this->Sav_n1_value->Location = System::Drawing::Point(77, 149);
			this->Sav_n1_value->Name = L"Sav_n1_value";
			this->Sav_n1_value->Size = System::Drawing::Size(100, 22);
			this->Sav_n1_value->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 71);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(172, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"�������� ��������� ���:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 34);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"�����������:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"��������:";
			// 
			// Sav_N_value
			// 
			this->Sav_N_value->Location = System::Drawing::Point(77, 90);
			this->Sav_N_value->Name = L"Sav_N_value";
			this->Sav_N_value->Size = System::Drawing::Size(100, 22);
			this->Sav_N_value->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(45, 203);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"����������:";
			// 
			// Sav_results
			// 
			this->Sav_results->Enabled = false;
			this->Sav_results->Location = System::Drawing::Point(6, 222);
			this->Sav_results->Name = L"Sav_results";
			this->Sav_results->Size = System::Drawing::Size(182, 94);
			this->Sav_results->TabIndex = 4;
			this->Sav_results->Text = L"";
			// 
			// Sav_button
			// 
			this->Sav_button->Location = System::Drawing::Point(42, 177);
			this->Sav_button->Name = L"Sav_button";
			this->Sav_button->Size = System::Drawing::Size(92, 23);
			this->Sav_button->TabIndex = 4;
			this->Sav_button->Text = L"���������";
			this->Sav_button->UseVisualStyleBackColor = true;
			this->Sav_button->Click += gcnew System::EventHandler(this, &MyForm::Sav_button_Click);
			// 
			// Sav_W1_130_value
			// 
			this->Sav_W1_130_value->AutoSize = true;
			this->Sav_W1_130_value->Location = System::Drawing::Point(103, 53);
			this->Sav_W1_130_value->Name = L"Sav_W1_130_value";
			this->Sav_W1_130_value->Size = System::Drawing::Size(49, 20);
			this->Sav_W1_130_value->TabIndex = 5;
			this->Sav_W1_130_value->TabStop = true;
			this->Sav_W1_130_value->Text = L"130";
			this->Sav_W1_130_value->UseVisualStyleBackColor = true;
			// 
			// Sav_W1_110_value
			// 
			this->Sav_W1_110_value->AutoSize = true;
			this->Sav_W1_110_value->Location = System::Drawing::Point(52, 53);
			this->Sav_W1_110_value->Name = L"Sav_W1_110_value";
			this->Sav_W1_110_value->Size = System::Drawing::Size(49, 20);
			this->Sav_W1_110_value->TabIndex = 4;
			this->Sav_W1_110_value->TabStop = true;
			this->Sav_W1_110_value->Text = L"110";
			this->Sav_W1_110_value->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(868, 533);
			this->Controls->Add(this->Sav_group);
			this->Controls->Add(this->D1_Group);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"��������� ��������";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->D1_Group->ResumeLayout(false);
			this->D1_Group->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->Sav_group->ResumeLayout(false);
			this->Sav_group->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: int i_gear;
		  double alpha;
		  double u;
		  double D1;
		  int Step = 0;





	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Sav_group->Enabled = false;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->Saverin->Checked == true || this->Belt_speed->Checked==true || this->Belt_depth->Checked==true || this->Gabarite->Checked==true) {
			this->D1_Group->Enabled = false;
			if (this->Saverin->Checked == true) {
				this->Sav_group->Enabled = true;
			}



		}
		else { MessageBox::Show("�������� ������ ������� ��������!", "������!",MessageBoxButtons::OK,MessageBoxIcon::Asterisk); }
		
		

	}
    private: System::Void Sav_button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->Sav_W1_110_value->Checked == false && this->Sav_W1_130_value->Checked == false) { MessageBox::Show("�������� �������� ������������ 110 ��� 130!", "������!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk); }
		else {
			if (!TB_check(this->Sav_N_value->Text) || !TB_check(this->Sav_n1_value->Text)){ MessageBox::Show("��������� ������������ �������� ������!", "������!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk); }
			else {
				double sav_N = Convert::ToDouble(this->Sav_N_value->Text);
				double n1 = Convert::ToDouble(this->Sav_n1_value->Text);
				if(n1==0){ MessageBox::Show("������� �������� �� ����� ���� ����� ����!", "������!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk); }
				else {
					if (this->Sav_W1_110_value->Checked == true)  Saverin_function(sav_N, n1, 110);
					else Saverin_function(sav_N, n1, 130);
					Sav_results->Text += "������� �������� �����: " + D1 + "\n";
				}
			}

		}
	}
	private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
		double Shkiv_D2(int Type, double D1, double u, char P_type) {
			  double epsilon;
			  int E = 1;
			  switch (E) {
			  case 1: epsilon = 0.01; break;
			  case 2: epsilon = 0.02; break;
			  }
			  switch (P_type) {
			  case 'U': return D1 * (1 - epsilon) * u;
			  case 'D': return (D1 * u) / (1 - epsilon);
			  }


			  
		  }
		void Saverin_function(double N, double n1, double w1) {//������� ��������
			
			D1 = w1 * pow(N * pow(10,3) / n1, 0.333333333);

		  }
		double Peredatochnoe_chislo(double n1, double n2) { return n1 / n2; }
		bool TB_check(String^ Text) {//�������� �����������
			bool Correct = true;
			if (Text->Length == 0) return false;
			for (int i = 0; i < Text->Length; i++) {
				int Sym = Text[i];
				if ((Sym < 48 || Sym>57) && Sym != 44) Correct = false;//�������� �� ������� ����
			}
			

			return Correct;
		}
	
//private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
//}
//private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
//}
	
};
  
	

}
