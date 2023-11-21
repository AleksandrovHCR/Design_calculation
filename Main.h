#pragma once

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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ расчётыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::RadioButton^ Belt_speed;

	private: System::Windows::Forms::RadioButton^ Saverin;
	private: System::Windows::Forms::RadioButton^ Belt_depth;
	private: System::Windows::Forms::RadioButton^ Gabarite;
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->расчётыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Saverin = (gcnew System::Windows::Forms::RadioButton());
			this->Belt_speed = (gcnew System::Windows::Forms::RadioButton());
			this->Gabarite = (gcnew System::Windows::Forms::RadioButton());
			this->Belt_depth = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(48, 125);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Расчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->Belt_depth);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->Gabarite);
			this->groupBox1->Controls->Add(this->Belt_speed);
			this->groupBox1->Controls->Add(this->Saverin);
			this->groupBox1->Location = System::Drawing::Point(12, 31);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 155);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Диаметр меньшего шкива";
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(868, 482);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Параметры передачи";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: int i_gear;
		  double alpha;
		 
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
};


	double Saverin(double N, double n1, double w1) {
		double D1=w1*pow((N*pow(10,3)/n1),1/3);
		return D1;

	}

}
