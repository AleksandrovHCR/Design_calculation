#pragma once
#include <math.h>


namespace Курсоваяработа {

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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ D1_Group;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ расчётыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::RadioButton^ Belt_speed;

	private: System::Windows::Forms::RadioButton^ Saverin;
	private: System::Windows::Forms::RadioButton^ Belt_depth;
	private: System::Windows::Forms::RadioButton^ Gabarite;
	private: System::Windows::Forms::GroupBox^ Sav_group;

	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ Sav_button;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->D1_Group = (gcnew System::Windows::Forms::GroupBox());
			this->Belt_depth = (gcnew System::Windows::Forms::RadioButton());
			this->Gabarite = (gcnew System::Windows::Forms::RadioButton());
			this->Belt_speed = (gcnew System::Windows::Forms::RadioButton());
			this->Saverin = (gcnew System::Windows::Forms::RadioButton());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->расчётыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Sav_group = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->Sav_button = (gcnew System::Windows::Forms::Button());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
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
			this->button1->Text = L"Выбрать";
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
			this->D1_Group->Text = L"Диаметр меньшего шкива";
			// 
			// Belt_depth
			// 
			this->Belt_depth->AutoSize = true;
			this->Belt_depth->Location = System::Drawing::Point(6, 99);
			this->Belt_depth->Name = L"Belt_depth";
			this->Belt_depth->Size = System::Drawing::Size(171, 20);
			this->Belt_depth->TabIndex = 3;
			this->Belt_depth->TabStop = true;
			this->Belt_depth->Text = L"Через толщину ремня";
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
			this->Gabarite->Text = L"Через габариты";
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
			this->Belt_speed->Text = L"Из скорости ремня";
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
			this->Saverin->Text = L"По формуле Саверина";
			this->Saverin->UseVisualStyleBackColor = true;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->расчётыToolStripMenuItem,
					this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(868, 28);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// расчётыToolStripMenuItem
			// 
			this->расчётыToolStripMenuItem->Name = L"расчётыToolStripMenuItem";
			this->расчётыToolStripMenuItem->Size = System::Drawing::Size(79, 24);
			this->расчётыToolStripMenuItem->Text = L"Расчёты";
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			// 
			// Sav_group
			// 
			this->Sav_group->Controls->Add(this->label1);
			this->Sav_group->Controls->Add(this->richTextBox1);
			this->Sav_group->Controls->Add(this->Sav_button);
			this->Sav_group->Controls->Add(this->radioButton2);
			this->Sav_group->Controls->Add(this->radioButton1);
			this->Sav_group->Location = System::Drawing::Point(18, 192);
			this->Sav_group->Name = L"Sav_group";
			this->Sav_group->Size = System::Drawing::Size(194, 229);
			this->Sav_group->TabIndex = 3;
			this->Sav_group->TabStop = false;
			this->Sav_group->Text = L"Формула Саверина";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(39, 108);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Результаты:";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Enabled = false;
			this->richTextBox1->Location = System::Drawing::Point(6, 127);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(182, 96);
			this->richTextBox1->TabIndex = 4;
			this->richTextBox1->Text = L"";
			// 
			// Sav_button
			// 
			this->Sav_button->Location = System::Drawing::Point(42, 83);
			this->Sav_button->Name = L"Sav_button";
			this->Sav_button->Size = System::Drawing::Size(92, 23);
			this->Sav_button->TabIndex = 4;
			this->Sav_button->Text = L"Расчитать";
			this->Sav_button->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(42, 57);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(49, 20);
			this->radioButton2->TabIndex = 5;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"130";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(42, 31);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(49, 20);
			this->radioButton1->TabIndex = 4;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"110";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(868, 482);
			this->Controls->Add(this->Sav_group);
			this->Controls->Add(this->D1_Group);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Параметры передачи";
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
		else { MessageBox::Show("Выберите способ расчёта диаметра!", "Error",MessageBoxButtons::OK,MessageBoxIcon::Asterisk); }
		
		

	}
	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
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
		double Saverin_f(double N, double n1, double w1) {
			  double D1 = w1 * pow((N * pow(10, 3) / n1), 1 / 3);
			  return D1;

		  }
		 double Peredatochnoe_chislo(double n1, double n2) { return n1 / n2; }

	
};
  
	

}
