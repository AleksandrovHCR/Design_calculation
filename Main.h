#define _USE_MATH_DEFINES
#pragma once
#include <math.h>
#include <string>
#include "Selection_tablets.h"

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
	private: System::Windows::Forms::GroupBox^ Speed_group;
	private: System::Windows::Forms::GroupBox^ Size_group;


	private: System::Windows::Forms::GroupBox^ Depth_group;

	private: System::Windows::Forms::GroupBox^ D2_group;
	private: System::Windows::Forms::Button^ Calc_D2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::RadioButton^ epsilon_003;
	private: System::Windows::Forms::RadioButton^ epsilon_002;
	private: System::Windows::Forms::TextBox^ D2_n2_value;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::RichTextBox^ D2_results;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ Gab_calculate;

	private: System::Windows::Forms::TextBox^ Gab_n1;

	private: System::Windows::Forms::TextBox^ Gab_D1;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ToolStripMenuItem^ сброситьToolStripMenuItem;
	private: System::Windows::Forms::RadioButton^ Type_3;

	private: System::Windows::Forms::RadioButton^ Type_2;

	private: System::Windows::Forms::RadioButton^ Type_1;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::RichTextBox^ SG_D1_results;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ Calculate_D1_speed;
	private: System::Windows::Forms::TextBox^ BS_n1;
	private: System::Windows::Forms::GroupBox^ Main_Speed_group;
	private: System::Windows::Forms::RichTextBox^ Main_speed;
	private: System::Windows::Forms::GroupBox^ Axis_group;
	private: System::Windows::Forms::GroupBox^ Length_group;




	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::RichTextBox^ Axis_result;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ Axis_calculate;
	private: System::Windows::Forms::RadioButton^ High_speed_low_drag;
	private: System::Windows::Forms::RadioButton^ Middle_speed;
	private: System::Windows::Forms::RadioButton^ Length_lifetime;

	private: System::Windows::Forms::RadioButton^ Length_interaxis;
private: System::Windows::Forms::Button^ Choose_the_method_of_length;
private: System::Windows::Forms::GroupBox^ Length_througth_interaxis;
private: System::Windows::Forms::GroupBox^ Lifetime_group;

private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::TextBox^ I_freq;
private: System::Windows::Forms::Label^ I_Inhibitor;
private: System::Windows::Forms::Label^ Max_Length;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::TextBox^ Length_in_gr;
private: System::Windows::Forms::Button^ Select_length;
private: System::Windows::Forms::RichTextBox^ LTI_Results;
private: System::Windows::Forms::Button^ Calc_length_of_belt;

private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::TextBox^ Length_LTI;
private: System::Windows::Forms::Label^ Min_Length_2;
private: System::Windows::Forms::Label^ I_Inhibitor_2;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::TextBox^ i_freq_LTI;
private: System::Windows::Forms::GroupBox^ Last_interaxis_group;
private: System::Windows::Forms::RichTextBox^ richTextBox1;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::RadioButton^ Syntetic_belt;
private: System::Windows::Forms::RadioButton^ Rubber_belt;
private: System::Windows::Forms::CheckBox^ With_interlayer;



private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Button^ Calculate_D1_TD;

private: System::Windows::Forms::GroupBox^ Final_angle;

private: System::Windows::Forms::RichTextBox^ Depth_results;
private: System::Windows::Forms::ComboBox^ Synthetic_depth;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::TextBox^ n1_TD;

private: System::Windows::Forms::TextBox^ D1_TD;

private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Button^ Set_D1_TD;
private: System::Windows::Forms::ComboBox^ Prokladki;
private: System::Windows::Forms::GroupBox^ B_BNKL_group;
private: System::Windows::Forms::RadioButton^ BNKL;
private: System::Windows::Forms::RadioButton^ B800_B820;










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
			this->сброситьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->Speed_group = (gcnew System::Windows::Forms::GroupBox());
			this->SG_D1_results = (gcnew System::Windows::Forms::RichTextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->Type_3 = (gcnew System::Windows::Forms::RadioButton());
			this->Calculate_D1_speed = (gcnew System::Windows::Forms::Button());
			this->Type_2 = (gcnew System::Windows::Forms::RadioButton());
			this->BS_n1 = (gcnew System::Windows::Forms::TextBox());
			this->Type_1 = (gcnew System::Windows::Forms::RadioButton());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->Size_group = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Gab_calculate = (gcnew System::Windows::Forms::Button());
			this->Gab_n1 = (gcnew System::Windows::Forms::TextBox());
			this->Gab_D1 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->Depth_group = (gcnew System::Windows::Forms::GroupBox());
			this->B_BNKL_group = (gcnew System::Windows::Forms::GroupBox());
			this->BNKL = (gcnew System::Windows::Forms::RadioButton());
			this->B800_B820 = (gcnew System::Windows::Forms::RadioButton());
			this->Prokladki = (gcnew System::Windows::Forms::ComboBox());
			this->Set_D1_TD = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->Synthetic_depth = (gcnew System::Windows::Forms::ComboBox());
			this->n1_TD = (gcnew System::Windows::Forms::TextBox());
			this->Depth_results = (gcnew System::Windows::Forms::RichTextBox());
			this->D1_TD = (gcnew System::Windows::Forms::TextBox());
			this->Calculate_D1_TD = (gcnew System::Windows::Forms::Button());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->With_interlayer = (gcnew System::Windows::Forms::CheckBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->Syntetic_belt = (gcnew System::Windows::Forms::RadioButton());
			this->Rubber_belt = (gcnew System::Windows::Forms::RadioButton());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->D2_group = (gcnew System::Windows::Forms::GroupBox());
			this->D2_n2_value = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->D2_results = (gcnew System::Windows::Forms::RichTextBox());
			this->epsilon_003 = (gcnew System::Windows::Forms::RadioButton());
			this->Calc_D2 = (gcnew System::Windows::Forms::Button());
			this->epsilon_002 = (gcnew System::Windows::Forms::RadioButton());
			this->Main_Speed_group = (gcnew System::Windows::Forms::GroupBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->Main_speed = (gcnew System::Windows::Forms::RichTextBox());
			this->Axis_group = (gcnew System::Windows::Forms::GroupBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->Axis_calculate = (gcnew System::Windows::Forms::Button());
			this->High_speed_low_drag = (gcnew System::Windows::Forms::RadioButton());
			this->Middle_speed = (gcnew System::Windows::Forms::RadioButton());
			this->Axis_result = (gcnew System::Windows::Forms::RichTextBox());
			this->Length_group = (gcnew System::Windows::Forms::GroupBox());
			this->Choose_the_method_of_length = (gcnew System::Windows::Forms::Button());
			this->Length_lifetime = (gcnew System::Windows::Forms::RadioButton());
			this->Length_interaxis = (gcnew System::Windows::Forms::RadioButton());
			this->Length_througth_interaxis = (gcnew System::Windows::Forms::GroupBox());
			this->LTI_Results = (gcnew System::Windows::Forms::RichTextBox());
			this->Calc_length_of_belt = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->Length_LTI = (gcnew System::Windows::Forms::TextBox());
			this->Min_Length_2 = (gcnew System::Windows::Forms::Label());
			this->I_Inhibitor_2 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->i_freq_LTI = (gcnew System::Windows::Forms::TextBox());
			this->Lifetime_group = (gcnew System::Windows::Forms::GroupBox());
			this->Select_length = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->Length_in_gr = (gcnew System::Windows::Forms::TextBox());
			this->Max_Length = (gcnew System::Windows::Forms::Label());
			this->I_Inhibitor = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->I_freq = (gcnew System::Windows::Forms::TextBox());
			this->Last_interaxis_group = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->Final_angle = (gcnew System::Windows::Forms::GroupBox());
			this->D1_Group->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->Sav_group->SuspendLayout();
			this->Speed_group->SuspendLayout();
			this->Size_group->SuspendLayout();
			this->Depth_group->SuspendLayout();
			this->B_BNKL_group->SuspendLayout();
			this->D2_group->SuspendLayout();
			this->Main_Speed_group->SuspendLayout();
			this->Axis_group->SuspendLayout();
			this->Length_group->SuspendLayout();
			this->Length_througth_interaxis->SuspendLayout();
			this->Lifetime_group->SuspendLayout();
			this->Last_interaxis_group->SuspendLayout();
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
			this->menuStrip1->Size = System::Drawing::Size(1501, 28);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// расчётыToolStripMenuItem
			// 
			this->расчётыToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->сброситьToolStripMenuItem });
			this->расчётыToolStripMenuItem->Name = L"расчётыToolStripMenuItem";
			this->расчётыToolStripMenuItem->Size = System::Drawing::Size(79, 24);
			this->расчётыToolStripMenuItem->Text = L"Расчёты";
			// 
			// сброситьToolStripMenuItem
			// 
			this->сброситьToolStripMenuItem->Name = L"сброситьToolStripMenuItem";
			this->сброситьToolStripMenuItem->Size = System::Drawing::Size(158, 26);
			this->сброситьToolStripMenuItem->Text = L"Сбросить";
			this->сброситьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сброситьToolStripMenuItem_Click);
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
			this->Sav_group->Size = System::Drawing::Size(194, 300);
			this->Sav_group->TabIndex = 3;
			this->Sav_group->TabStop = false;
			this->Sav_group->Text = L"Формула Саверина";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 115);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(158, 32);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Частота вращения\r\n меньшего шкива 1/мин:";
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
			this->label4->Text = L"Мощность двигателя кВт:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 34);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Коэффициент:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Значения:";
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
			this->label1->Text = L"Результаты:";
			// 
			// Sav_results
			// 
			this->Sav_results->Enabled = false;
			this->Sav_results->Location = System::Drawing::Point(6, 222);
			this->Sav_results->Name = L"Sav_results";
			this->Sav_results->Size = System::Drawing::Size(182, 72);
			this->Sav_results->TabIndex = 4;
			this->Sav_results->Text = L"";
			// 
			// Sav_button
			// 
			this->Sav_button->Location = System::Drawing::Point(42, 177);
			this->Sav_button->Name = L"Sav_button";
			this->Sav_button->Size = System::Drawing::Size(92, 23);
			this->Sav_button->TabIndex = 4;
			this->Sav_button->Text = L"Расчитать";
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
			// Speed_group
			// 
			this->Speed_group->Controls->Add(this->SG_D1_results);
			this->Speed_group->Controls->Add(this->label12);
			this->Speed_group->Controls->Add(this->Type_3);
			this->Speed_group->Controls->Add(this->Calculate_D1_speed);
			this->Speed_group->Controls->Add(this->Type_2);
			this->Speed_group->Controls->Add(this->BS_n1);
			this->Speed_group->Controls->Add(this->Type_1);
			this->Speed_group->Controls->Add(this->label11);
			this->Speed_group->Enabled = false;
			this->Speed_group->Location = System::Drawing::Point(418, 31);
			this->Speed_group->Name = L"Speed_group";
			this->Speed_group->Size = System::Drawing::Size(225, 490);
			this->Speed_group->TabIndex = 11;
			this->Speed_group->TabStop = false;
			this->Speed_group->Text = L"Скорость ремня";
			// 
			// SG_D1_results
			// 
			this->SG_D1_results->Enabled = false;
			this->SG_D1_results->Location = System::Drawing::Point(6, 322);
			this->SG_D1_results->Name = L"SG_D1_results";
			this->SG_D1_results->Size = System::Drawing::Size(213, 118);
			this->SG_D1_results->TabIndex = 11;
			this->SG_D1_results->Text = L"";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(5, 252);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(158, 32);
			this->label12->TabIndex = 17;
			this->label12->Text = L"Частота вращения\r\n меньшего шкива 1/мин:";
			// 
			// Type_3
			// 
			this->Type_3->AutoSize = true;
			this->Type_3->Location = System::Drawing::Point(8, 179);
			this->Type_3->Name = L"Type_3";
			this->Type_3->Size = System::Drawing::Size(177, 68);
			this->Type_3->TabIndex = 3;
			this->Type_3->TabStop = true;
			this->Type_3->Text = L"Синтетические \r\nкапроновые c\r\nплёночным покрытием\r\n(МРТУ 17-645-68) Тип II\r\n";
			this->Type_3->UseVisualStyleBackColor = true;
			// 
			// Calculate_D1_speed
			// 
			this->Calculate_D1_speed->Location = System::Drawing::Point(71, 454);
			this->Calculate_D1_speed->Name = L"Calculate_D1_speed";
			this->Calculate_D1_speed->Size = System::Drawing::Size(92, 23);
			this->Calculate_D1_speed->TabIndex = 15;
			this->Calculate_D1_speed->Text = L"Расчитать";
			this->Calculate_D1_speed->UseVisualStyleBackColor = true;
			this->Calculate_D1_speed->Click += gcnew System::EventHandler(this, &MyForm::Calculate_D1_speed_Click);
			// 
			// Type_2
			// 
			this->Type_2->AutoSize = true;
			this->Type_2->Location = System::Drawing::Point(8, 105);
			this->Type_2->Name = L"Type_2";
			this->Type_2->Size = System::Drawing::Size(177, 68);
			this->Type_2->TabIndex = 2;
			this->Type_2->TabStop = true;
			this->Type_2->Text = L"Синтетические \r\nкапроновые c\r\nплёночным покрытием\r\n(МРТУ 17-645-68) Тип I\r\n";
			this->Type_2->UseVisualStyleBackColor = true;
			// 
			// BS_n1
			// 
			this->BS_n1->Location = System::Drawing::Point(73, 287);
			this->BS_n1->Name = L"BS_n1";
			this->BS_n1->Size = System::Drawing::Size(100, 22);
			this->BS_n1->TabIndex = 16;
			// 
			// Type_1
			// 
			this->Type_1->AutoSize = true;
			this->Type_1->Location = System::Drawing::Point(8, 47);
			this->Type_1->Name = L"Type_1";
			this->Type_1->Size = System::Drawing::Size(196, 52);
			this->Type_1->TabIndex = 1;
			this->Type_1->TabStop = true;
			this->Type_1->Text = L"Тканевые прорезиненые \r\nконечной длины\r\n(ГОСТ 38.05.98 76)";
			this->Type_1->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 25);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(78, 16);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Тип ремня:";
			// 
			// Size_group
			// 
			this->Size_group->Controls->Add(this->label9);
			this->Size_group->Controls->Add(this->Gab_calculate);
			this->Size_group->Controls->Add(this->Gab_n1);
			this->Size_group->Controls->Add(this->Gab_D1);
			this->Size_group->Controls->Add(this->label10);
			this->Size_group->Enabled = false;
			this->Size_group->Location = System::Drawing::Point(18, 498);
			this->Size_group->Name = L"Size_group";
			this->Size_group->Size = System::Drawing::Size(194, 176);
			this->Size_group->TabIndex = 12;
			this->Size_group->TabStop = false;
			this->Size_group->Text = L"Габариты";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(3, 70);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(158, 32);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Частота вращения\r\n меньшего шкива 1/мин:";
			// 
			// Gab_calculate
			// 
			this->Gab_calculate->Location = System::Drawing::Point(42, 148);
			this->Gab_calculate->Name = L"Gab_calculate";
			this->Gab_calculate->Size = System::Drawing::Size(92, 23);
			this->Gab_calculate->TabIndex = 0;
			this->Gab_calculate->Text = L"Расчитать";
			this->Gab_calculate->UseVisualStyleBackColor = true;
			this->Gab_calculate->Click += gcnew System::EventHandler(this, &MyForm::Gab_calculate_Click);
			// 
			// Gab_n1
			// 
			this->Gab_n1->Location = System::Drawing::Point(74, 104);
			this->Gab_n1->Name = L"Gab_n1";
			this->Gab_n1->Size = System::Drawing::Size(100, 22);
			this->Gab_n1->TabIndex = 13;
			// 
			// Gab_D1
			// 
			this->Gab_D1->Location = System::Drawing::Point(74, 45);
			this->Gab_D1->Name = L"Gab_D1";
			this->Gab_D1->Size = System::Drawing::Size(100, 22);
			this->Gab_D1->TabIndex = 11;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(3, 26);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(176, 32);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Диаметр меньшего шкива \r\nмм:";
			// 
			// Depth_group
			// 
			this->Depth_group->Controls->Add(this->B_BNKL_group);
			this->Depth_group->Controls->Add(this->Prokladki);
			this->Depth_group->Controls->Add(this->Set_D1_TD);
			this->Depth_group->Controls->Add(this->label22);
			this->Depth_group->Controls->Add(this->Synthetic_depth);
			this->Depth_group->Controls->Add(this->n1_TD);
			this->Depth_group->Controls->Add(this->Depth_results);
			this->Depth_group->Controls->Add(this->D1_TD);
			this->Depth_group->Controls->Add(this->Calculate_D1_TD);
			this->Depth_group->Controls->Add(this->label23);
			this->Depth_group->Controls->Add(this->label20);
			this->Depth_group->Controls->Add(this->With_interlayer);
			this->Depth_group->Controls->Add(this->label19);
			this->Depth_group->Controls->Add(this->Syntetic_belt);
			this->Depth_group->Controls->Add(this->Rubber_belt);
			this->Depth_group->Controls->Add(this->label13);
			this->Depth_group->Enabled = false;
			this->Depth_group->Location = System::Drawing::Point(218, 31);
			this->Depth_group->Name = L"Depth_group";
			this->Depth_group->Size = System::Drawing::Size(194, 643);
			this->Depth_group->TabIndex = 12;
			this->Depth_group->TabStop = false;
			this->Depth_group->Text = L"Толщина ремня";
			// 
			// B_BNKL_group
			// 
			this->B_BNKL_group->Controls->Add(this->BNKL);
			this->B_BNKL_group->Controls->Add(this->B800_B820);
			this->B_BNKL_group->Location = System::Drawing::Point(6, 134);
			this->B_BNKL_group->Name = L"B_BNKL_group";
			this->B_BNKL_group->Size = System::Drawing::Size(176, 100);
			this->B_BNKL_group->TabIndex = 24;
			this->B_BNKL_group->TabStop = false;
			this->B_BNKL_group->Text = L"Модель ремня";
			// 
			// BNKL
			// 
			this->BNKL->AutoSize = true;
			this->BNKL->Location = System::Drawing::Point(6, 57);
			this->BNKL->Name = L"BNKL";
			this->BNKL->Size = System::Drawing::Size(157, 20);
			this->BNKL->TabIndex = 1;
			this->BNKL->TabStop = true;
			this->BNKL->Text = L"БНКЛ-65/ БНКЛ-65-2 ";
			this->BNKL->UseVisualStyleBackColor = true;
			// 
			// B800_B820
			// 
			this->B800_B820->AutoSize = true;
			this->B800_B820->Location = System::Drawing::Point(6, 25);
			this->B800_B820->Name = L"B800_B820";
			this->B800_B820->Size = System::Drawing::Size(99, 20);
			this->B800_B820->TabIndex = 0;
			this->B800_B820->TabStop = true;
			this->B800_B820->Text = L"Б-800/Б820 \r\n";
			this->B800_B820->UseVisualStyleBackColor = true;
			// 
			// Prokladki
			// 
			this->Prokladki->Enabled = false;
			this->Prokladki->FormattingEnabled = true;
			this->Prokladki->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"3", L"4", L"5", L"6" });
			this->Prokladki->Location = System::Drawing::Point(30, 101);
			this->Prokladki->Name = L"Prokladki";
			this->Prokladki->Size = System::Drawing::Size(121, 24);
			this->Prokladki->TabIndex = 23;
			// 
			// Set_D1_TD
			// 
			this->Set_D1_TD->Location = System::Drawing::Point(43, 614);
			this->Set_D1_TD->Name = L"Set_D1_TD";
			this->Set_D1_TD->Size = System::Drawing::Size(92, 23);
			this->Set_D1_TD->TabIndex = 22;
			this->Set_D1_TD->Text = L"Расчитать";
			this->Set_D1_TD->UseVisualStyleBackColor = true;
			this->Set_D1_TD->Click += gcnew System::EventHandler(this, &MyForm::Set_D1_TD_Click);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(3, 545);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(158, 32);
			this->label22->TabIndex = 18;
			this->label22->Text = L"Частота вращения\r\n меньшего шкива 1/мин:";
			// 
			// Synthetic_depth
			// 
			this->Synthetic_depth->Enabled = false;
			this->Synthetic_depth->FormattingEnabled = true;
			this->Synthetic_depth->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"0,4", L"0,5", L"0,6", L"0,7", L"0,8", L"0,9",
					L"1,0", L"1,1", L"1,2"
			});
			this->Synthetic_depth->Location = System::Drawing::Point(30, 281);
			this->Synthetic_depth->Name = L"Synthetic_depth";
			this->Synthetic_depth->Size = System::Drawing::Size(121, 24);
			this->Synthetic_depth->TabIndex = 18;
			this->Synthetic_depth->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::Synthetic_depth_SelectedIndexChanged);
			// 
			// n1_TD
			// 
			this->n1_TD->Enabled = false;
			this->n1_TD->Location = System::Drawing::Point(35, 580);
			this->n1_TD->Name = L"n1_TD";
			this->n1_TD->Size = System::Drawing::Size(100, 22);
			this->n1_TD->TabIndex = 17;
			// 
			// Depth_results
			// 
			this->Depth_results->Enabled = false;
			this->Depth_results->Location = System::Drawing::Point(6, 337);
			this->Depth_results->Name = L"Depth_results";
			this->Depth_results->ReadOnly = true;
			this->Depth_results->Size = System::Drawing::Size(176, 162);
			this->Depth_results->TabIndex = 11;
			this->Depth_results->Text = L"";
			// 
			// D1_TD
			// 
			this->D1_TD->Enabled = false;
			this->D1_TD->Location = System::Drawing::Point(35, 520);
			this->D1_TD->Name = L"D1_TD";
			this->D1_TD->Size = System::Drawing::Size(100, 22);
			this->D1_TD->TabIndex = 15;
			// 
			// Calculate_D1_TD
			// 
			this->Calculate_D1_TD->Location = System::Drawing::Point(43, 308);
			this->Calculate_D1_TD->Name = L"Calculate_D1_TD";
			this->Calculate_D1_TD->Size = System::Drawing::Size(92, 23);
			this->Calculate_D1_TD->TabIndex = 11;
			this->Calculate_D1_TD->Text = L"Расчитать";
			this->Calculate_D1_TD->UseVisualStyleBackColor = true;
			this->Calculate_D1_TD->Click += gcnew System::EventHandler(this, &MyForm::Calculate_D1_TD_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(3, 502);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(176, 32);
			this->label23->TabIndex = 16;
			this->label23->Text = L"Диаметр меньшего шкива \r\nмм:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(12, 82);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(123, 16);
			this->label20->TabIndex = 20;
			this->label20->Text = L"Число прокладок:";
			// 
			// With_interlayer
			// 
			this->With_interlayer->AutoSize = true;
			this->With_interlayer->Enabled = false;
			this->With_interlayer->Location = System::Drawing::Point(15, 56);
			this->With_interlayer->Name = L"With_interlayer";
			this->With_interlayer->Size = System::Drawing::Size(128, 20);
			this->With_interlayer->TabIndex = 20;
			this->With_interlayer->Text = L"С прослойками";
			this->With_interlayer->UseVisualStyleBackColor = true;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(12, 18);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(78, 16);
			this->label19->TabIndex = 19;
			this->label19->Text = L"Тип ремня:";
			// 
			// Syntetic_belt
			// 
			this->Syntetic_belt->AutoSize = true;
			this->Syntetic_belt->Location = System::Drawing::Point(15, 240);
			this->Syntetic_belt->Name = L"Syntetic_belt";
			this->Syntetic_belt->Size = System::Drawing::Size(129, 20);
			this->Syntetic_belt->TabIndex = 18;
			this->Syntetic_belt->TabStop = true;
			this->Syntetic_belt->Text = L"Синтетический";
			this->Syntetic_belt->UseVisualStyleBackColor = true;
			this->Syntetic_belt->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Syntetic_belt_CheckedChanged);
			// 
			// Rubber_belt
			// 
			this->Rubber_belt->AutoSize = true;
			this->Rubber_belt->Location = System::Drawing::Point(15, 33);
			this->Rubber_belt->Name = L"Rubber_belt";
			this->Rubber_belt->Size = System::Drawing::Size(135, 20);
			this->Rubber_belt->TabIndex = 17;
			this->Rubber_belt->TabStop = true;
			this->Rubber_belt->Text = L"Прорезиненный";
			this->Rubber_belt->UseVisualStyleBackColor = true;
			this->Rubber_belt->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Rubber_belt_CheckedChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(18, 263);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(132, 16);
			this->label13->TabIndex = 16;
			this->label13->Text = L"Толщина ремня мм:";
			this->label13->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// D2_group
			// 
			this->D2_group->Controls->Add(this->D2_n2_value);
			this->D2_group->Controls->Add(this->label8);
			this->D2_group->Controls->Add(this->label7);
			this->D2_group->Controls->Add(this->label6);
			this->D2_group->Controls->Add(this->D2_results);
			this->D2_group->Controls->Add(this->epsilon_003);
			this->D2_group->Controls->Add(this->Calc_D2);
			this->D2_group->Controls->Add(this->epsilon_002);
			this->D2_group->Enabled = false;
			this->D2_group->Location = System::Drawing::Point(649, 32);
			this->D2_group->Name = L"D2_group";
			this->D2_group->Size = System::Drawing::Size(219, 380);
			this->D2_group->TabIndex = 13;
			this->D2_group->TabStop = false;
			this->D2_group->Text = L"Диаметр большего шкива";
			// 
			// D2_n2_value
			// 
			this->D2_n2_value->Location = System::Drawing::Point(19, 111);
			this->D2_n2_value->Name = L"D2_n2_value";
			this->D2_n2_value->Size = System::Drawing::Size(100, 22);
			this->D2_n2_value->TabIndex = 11;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(10, 76);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(157, 32);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Частота вращения\r\n большего шкива 1/мин:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 136);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(89, 16);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Результаты:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 18);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(180, 32);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Коэффициент скольжения\r\n ремня:";
			// 
			// D2_results
			// 
			this->D2_results->Location = System::Drawing::Point(9, 163);
			this->D2_results->Name = L"D2_results";
			this->D2_results->ReadOnly = true;
			this->D2_results->Size = System::Drawing::Size(182, 182);
			this->D2_results->TabIndex = 12;
			this->D2_results->Text = L"";
			// 
			// epsilon_003
			// 
			this->epsilon_003->AutoSize = true;
			this->epsilon_003->Location = System::Drawing::Point(67, 53);
			this->epsilon_003->Name = L"epsilon_003";
			this->epsilon_003->Size = System::Drawing::Size(52, 20);
			this->epsilon_003->TabIndex = 12;
			this->epsilon_003->TabStop = true;
			this->epsilon_003->Text = L"0.03";
			this->epsilon_003->UseVisualStyleBackColor = true;
			// 
			// Calc_D2
			// 
			this->Calc_D2->Location = System::Drawing::Point(65, 351);
			this->Calc_D2->Name = L"Calc_D2";
			this->Calc_D2->Size = System::Drawing::Size(92, 23);
			this->Calc_D2->TabIndex = 11;
			this->Calc_D2->Text = L"Расчитать";
			this->Calc_D2->UseVisualStyleBackColor = true;
			this->Calc_D2->Click += gcnew System::EventHandler(this, &MyForm::Calc_D2_Click);
			// 
			// epsilon_002
			// 
			this->epsilon_002->AutoSize = true;
			this->epsilon_002->Location = System::Drawing::Point(9, 53);
			this->epsilon_002->Name = L"epsilon_002";
			this->epsilon_002->Size = System::Drawing::Size(52, 20);
			this->epsilon_002->TabIndex = 11;
			this->epsilon_002->TabStop = true;
			this->epsilon_002->Text = L"0.02";
			this->epsilon_002->UseVisualStyleBackColor = true;
			// 
			// Main_Speed_group
			// 
			this->Main_Speed_group->Controls->Add(this->label14);
			this->Main_Speed_group->Controls->Add(this->Main_speed);
			this->Main_Speed_group->Enabled = false;
			this->Main_Speed_group->Location = System::Drawing::Point(874, 32);
			this->Main_Speed_group->Name = L"Main_Speed_group";
			this->Main_Speed_group->Size = System::Drawing::Size(200, 100);
			this->Main_Speed_group->TabIndex = 14;
			this->Main_Speed_group->TabStop = false;
			this->Main_Speed_group->Text = L"Скорость";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 22);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(137, 16);
			this->label14->TabIndex = 19;
			this->label14->Text = L"Скорость ремня м/с:";
			// 
			// Main_speed
			// 
			this->Main_speed->Enabled = false;
			this->Main_speed->Location = System::Drawing::Point(6, 46);
			this->Main_speed->Name = L"Main_speed";
			this->Main_speed->Size = System::Drawing::Size(188, 48);
			this->Main_speed->TabIndex = 18;
			this->Main_speed->Text = L"";
			// 
			// Axis_group
			// 
			this->Axis_group->Controls->Add(this->label15);
			this->Axis_group->Controls->Add(this->Axis_calculate);
			this->Axis_group->Controls->Add(this->High_speed_low_drag);
			this->Axis_group->Controls->Add(this->Middle_speed);
			this->Axis_group->Controls->Add(this->Axis_result);
			this->Axis_group->Enabled = false;
			this->Axis_group->Location = System::Drawing::Point(874, 132);
			this->Axis_group->Name = L"Axis_group";
			this->Axis_group->Size = System::Drawing::Size(200, 279);
			this->Axis_group->TabIndex = 15;
			this->Axis_group->TabStop = false;
			this->Axis_group->Text = L"Межосевое расстояние";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(6, 27);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(102, 16);
			this->label15->TabIndex = 4;
			this->label15->Text = L"Тип передачи:";
			// 
			// Axis_calculate
			// 
			this->Axis_calculate->Location = System::Drawing::Point(51, 251);
			this->Axis_calculate->Name = L"Axis_calculate";
			this->Axis_calculate->Size = System::Drawing::Size(92, 23);
			this->Axis_calculate->TabIndex = 3;
			this->Axis_calculate->Text = L"Расчитать";
			this->Axis_calculate->UseVisualStyleBackColor = true;
			this->Axis_calculate->Click += gcnew System::EventHandler(this, &MyForm::Axis_calculate_Click);
			// 
			// High_speed_low_drag
			// 
			this->High_speed_low_drag->AutoSize = true;
			this->High_speed_low_drag->Location = System::Drawing::Point(9, 74);
			this->High_speed_low_drag->Name = L"High_speed_low_drag";
			this->High_speed_low_drag->Size = System::Drawing::Size(121, 20);
			this->High_speed_low_drag->TabIndex = 2;
			this->High_speed_low_drag->TabStop = true;
			this->High_speed_low_drag->Text = L"Быстроходная";
			this->High_speed_low_drag->UseVisualStyleBackColor = true;
			// 
			// Middle_speed
			// 
			this->Middle_speed->AutoSize = true;
			this->Middle_speed->Location = System::Drawing::Point(9, 49);
			this->Middle_speed->Name = L"Middle_speed";
			this->Middle_speed->Size = System::Drawing::Size(152, 20);
			this->Middle_speed->TabIndex = 1;
			this->Middle_speed->TabStop = true;
			this->Middle_speed->Text = L"Среднескоростная";
			this->Middle_speed->UseVisualStyleBackColor = true;
			// 
			// Axis_result
			// 
			this->Axis_result->Location = System::Drawing::Point(6, 101);
			this->Axis_result->Name = L"Axis_result";
			this->Axis_result->ReadOnly = true;
			this->Axis_result->Size = System::Drawing::Size(179, 144);
			this->Axis_result->TabIndex = 0;
			this->Axis_result->Text = L"";
			// 
			// Length_group
			// 
			this->Length_group->Controls->Add(this->Choose_the_method_of_length);
			this->Length_group->Controls->Add(this->Length_lifetime);
			this->Length_group->Controls->Add(this->Length_interaxis);
			this->Length_group->Enabled = false;
			this->Length_group->Location = System::Drawing::Point(1080, 32);
			this->Length_group->Name = L"Length_group";
			this->Length_group->Size = System::Drawing::Size(209, 147);
			this->Length_group->TabIndex = 16;
			this->Length_group->TabStop = false;
			this->Length_group->Text = L"Длина ремня";
			// 
			// Choose_the_method_of_length
			// 
			this->Choose_the_method_of_length->Location = System::Drawing::Point(66, 111);
			this->Choose_the_method_of_length->Name = L"Choose_the_method_of_length";
			this->Choose_the_method_of_length->Size = System::Drawing::Size(92, 23);
			this->Choose_the_method_of_length->TabIndex = 4;
			this->Choose_the_method_of_length->Text = L"Выбрать";
			this->Choose_the_method_of_length->UseVisualStyleBackColor = true;
			this->Choose_the_method_of_length->Click += gcnew System::EventHandler(this, &MyForm::Choose_the_method_of_length_Click);
			// 
			// Length_lifetime
			// 
			this->Length_lifetime->AutoSize = true;
			this->Length_lifetime->Location = System::Drawing::Point(6, 58);
			this->Length_lifetime->Name = L"Length_lifetime";
			this->Length_lifetime->Size = System::Drawing::Size(171, 52);
			this->Length_lifetime->TabIndex = 1;
			this->Length_lifetime->TabStop = true;
			this->Length_lifetime->Text = L"Из условий \r\nсравнительной \r\nдолговечности ремня";
			this->Length_lifetime->UseVisualStyleBackColor = true;
			// 
			// Length_interaxis
			// 
			this->Length_interaxis->AutoSize = true;
			this->Length_interaxis->Location = System::Drawing::Point(6, 22);
			this->Length_interaxis->Name = L"Length_interaxis";
			this->Length_interaxis->Size = System::Drawing::Size(191, 36);
			this->Length_interaxis->TabIndex = 0;
			this->Length_interaxis->TabStop = true;
			this->Length_interaxis->Text = L"По выбранному \r\nмежосевому расстоянию";
			this->Length_interaxis->UseVisualStyleBackColor = true;
			// 
			// Length_througth_interaxis
			// 
			this->Length_througth_interaxis->Controls->Add(this->LTI_Results);
			this->Length_througth_interaxis->Controls->Add(this->Calc_length_of_belt);
			this->Length_througth_interaxis->Controls->Add(this->label18);
			this->Length_througth_interaxis->Controls->Add(this->Length_LTI);
			this->Length_througth_interaxis->Controls->Add(this->Min_Length_2);
			this->Length_througth_interaxis->Controls->Add(this->I_Inhibitor_2);
			this->Length_througth_interaxis->Controls->Add(this->label21);
			this->Length_througth_interaxis->Controls->Add(this->i_freq_LTI);
			this->Length_througth_interaxis->Enabled = false;
			this->Length_througth_interaxis->Location = System::Drawing::Point(1080, 185);
			this->Length_througth_interaxis->Name = L"Length_througth_interaxis";
			this->Length_througth_interaxis->Size = System::Drawing::Size(209, 336);
			this->Length_througth_interaxis->TabIndex = 17;
			this->Length_througth_interaxis->TabStop = false;
			this->Length_througth_interaxis->Text = L"Длина ремня через межосевое расстояние";
			// 
			// LTI_Results
			// 
			this->LTI_Results->Enabled = false;
			this->LTI_Results->Location = System::Drawing::Point(6, 41);
			this->LTI_Results->Name = L"LTI_Results";
			this->LTI_Results->Size = System::Drawing::Size(191, 70);
			this->LTI_Results->TabIndex = 11;
			this->LTI_Results->Text = L"";
			// 
			// Calc_length_of_belt
			// 
			this->Calc_length_of_belt->Location = System::Drawing::Point(48, 300);
			this->Calc_length_of_belt->Name = L"Calc_length_of_belt";
			this->Calc_length_of_belt->Size = System::Drawing::Size(92, 23);
			this->Calc_length_of_belt->TabIndex = 24;
			this->Calc_length_of_belt->Text = L"Выбрать";
			this->Calc_length_of_belt->UseVisualStyleBackColor = true;
			this->Calc_length_of_belt->Click += gcnew System::EventHandler(this, &MyForm::Calc_length_of_belt_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(6, 253);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(72, 16);
			this->label18->TabIndex = 30;
			this->label18->Text = L"Длина мм:";
			// 
			// Length_LTI
			// 
			this->Length_LTI->Location = System::Drawing::Point(74, 272);
			this->Length_LTI->Name = L"Length_LTI";
			this->Length_LTI->Size = System::Drawing::Size(100, 22);
			this->Length_LTI->TabIndex = 29;
			// 
			// Min_Length_2
			// 
			this->Min_Length_2->AutoSize = true;
			this->Min_Length_2->Location = System::Drawing::Point(6, 204);
			this->Min_Length_2->Name = L"Min_Length_2";
			this->Min_Length_2->Size = System::Drawing::Size(146, 16);
			this->Min_Length_2->TabIndex = 28;
			this->Min_Length_2->Text = L"Минимальная длина: ";
			// 
			// I_Inhibitor_2
			// 
			this->I_Inhibitor_2->AutoSize = true;
			this->I_Inhibitor_2->Location = System::Drawing::Point(6, 177);
			this->I_Inhibitor_2->Name = L"I_Inhibitor_2";
			this->I_Inhibitor_2->Size = System::Drawing::Size(74, 16);
			this->I_Inhibitor_2->TabIndex = 27;
			this->I_Inhibitor_2->Text = L"Не более: ";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(6, 111);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(121, 32);
			this->label21->TabIndex = 26;
			this->label21->Text = L"Частота пробега \r\nремня в секунду:";
			// 
			// i_freq_LTI
			// 
			this->i_freq_LTI->Location = System::Drawing::Point(74, 146);
			this->i_freq_LTI->Name = L"i_freq_LTI";
			this->i_freq_LTI->Size = System::Drawing::Size(100, 22);
			this->i_freq_LTI->TabIndex = 25;
			this->i_freq_LTI->TextChanged += gcnew System::EventHandler(this, &MyForm::i_freq_LTI_TextChanged);
			// 
			// Lifetime_group
			// 
			this->Lifetime_group->Controls->Add(this->Select_length);
			this->Lifetime_group->Controls->Add(this->label17);
			this->Lifetime_group->Controls->Add(this->Length_in_gr);
			this->Lifetime_group->Controls->Add(this->Max_Length);
			this->Lifetime_group->Controls->Add(this->I_Inhibitor);
			this->Lifetime_group->Controls->Add(this->label16);
			this->Lifetime_group->Controls->Add(this->I_freq);
			this->Lifetime_group->Enabled = false;
			this->Lifetime_group->Location = System::Drawing::Point(1295, 32);
			this->Lifetime_group->Name = L"Lifetime_group";
			this->Lifetime_group->Size = System::Drawing::Size(200, 272);
			this->Lifetime_group->TabIndex = 18;
			this->Lifetime_group->TabStop = false;
			this->Lifetime_group->Text = L"Длина ремня через условие долговечности ремня";
			// 
			// Select_length
			// 
			this->Select_length->Location = System::Drawing::Point(48, 241);
			this->Select_length->Name = L"Select_length";
			this->Select_length->Size = System::Drawing::Size(92, 23);
			this->Select_length->TabIndex = 5;
			this->Select_length->Text = L"Выбрать";
			this->Select_length->UseVisualStyleBackColor = true;
			this->Select_length->Click += gcnew System::EventHandler(this, &MyForm::Select_length_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(6, 194);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(72, 16);
			this->label17->TabIndex = 23;
			this->label17->Text = L"Длина мм:";
			// 
			// Length_in_gr
			// 
			this->Length_in_gr->Location = System::Drawing::Point(48, 213);
			this->Length_in_gr->Name = L"Length_in_gr";
			this->Length_in_gr->Size = System::Drawing::Size(100, 22);
			this->Length_in_gr->TabIndex = 22;
			// 
			// Max_Length
			// 
			this->Max_Length->AutoSize = true;
			this->Max_Length->Location = System::Drawing::Point(6, 145);
			this->Max_Length->Name = L"Max_Length";
			this->Max_Length->Size = System::Drawing::Size(146, 16);
			this->Max_Length->TabIndex = 21;
			this->Max_Length->Text = L"Минимальная длина: ";
			// 
			// I_Inhibitor
			// 
			this->I_Inhibitor->AutoSize = true;
			this->I_Inhibitor->Location = System::Drawing::Point(6, 118);
			this->I_Inhibitor->Name = L"I_Inhibitor";
			this->I_Inhibitor->Size = System::Drawing::Size(74, 16);
			this->I_Inhibitor->TabIndex = 20;
			this->I_Inhibitor->Text = L"Не более: ";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(6, 52);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(121, 32);
			this->label16->TabIndex = 19;
			this->label16->Text = L"Частота пробега \r\nремня в секунду:";
			// 
			// I_freq
			// 
			this->I_freq->Location = System::Drawing::Point(74, 87);
			this->I_freq->Name = L"I_freq";
			this->I_freq->Size = System::Drawing::Size(100, 22);
			this->I_freq->TabIndex = 18;
			this->I_freq->TextChanged += gcnew System::EventHandler(this, &MyForm::I_freq_TextChanged);
			// 
			// Last_interaxis_group
			// 
			this->Last_interaxis_group->Controls->Add(this->richTextBox1);
			this->Last_interaxis_group->Enabled = false;
			this->Last_interaxis_group->Location = System::Drawing::Point(649, 417);
			this->Last_interaxis_group->Name = L"Last_interaxis_group";
			this->Last_interaxis_group->Size = System::Drawing::Size(419, 104);
			this->Last_interaxis_group->TabIndex = 19;
			this->Last_interaxis_group->TabStop = false;
			this->Last_interaxis_group->Text = L"Окончательное межосевое расстояние";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Enabled = false;
			this->richTextBox1->Location = System::Drawing::Point(9, 21);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(401, 72);
			this->richTextBox1->TabIndex = 19;
			this->richTextBox1->Text = L"";
			// 
			// Final_angle
			// 
			this->Final_angle->Enabled = false;
			this->Final_angle->Location = System::Drawing::Point(1295, 307);
			this->Final_angle->Name = L"Final_angle";
			this->Final_angle->Size = System::Drawing::Size(200, 214);
			this->Final_angle->TabIndex = 20;
			this->Final_angle->TabStop = false;
			this->Final_angle->Text = L"Угол обхвата на меньшем шкиве";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1501, 686);
			this->Controls->Add(this->Final_angle);
			this->Controls->Add(this->Last_interaxis_group);
			this->Controls->Add(this->Lifetime_group);
			this->Controls->Add(this->Length_througth_interaxis);
			this->Controls->Add(this->Length_group);
			this->Controls->Add(this->Axis_group);
			this->Controls->Add(this->Main_Speed_group);
			this->Controls->Add(this->D2_group);
			this->Controls->Add(this->Depth_group);
			this->Controls->Add(this->Size_group);
			this->Controls->Add(this->Speed_group);
			this->Controls->Add(this->Sav_group);
			this->Controls->Add(this->D1_Group);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Проектировочный расчёт";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->D1_Group->ResumeLayout(false);
			this->D1_Group->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->Sav_group->ResumeLayout(false);
			this->Sav_group->PerformLayout();
			this->Speed_group->ResumeLayout(false);
			this->Speed_group->PerformLayout();
			this->Size_group->ResumeLayout(false);
			this->Size_group->PerformLayout();
			this->Depth_group->ResumeLayout(false);
			this->Depth_group->PerformLayout();
			this->B_BNKL_group->ResumeLayout(false);
			this->B_BNKL_group->PerformLayout();
			this->D2_group->ResumeLayout(false);
			this->D2_group->PerformLayout();
			this->Main_Speed_group->ResumeLayout(false);
			this->Main_Speed_group->PerformLayout();
			this->Axis_group->ResumeLayout(false);
			this->Axis_group->PerformLayout();
			this->Length_group->ResumeLayout(false);
			this->Length_group->PerformLayout();
			this->Length_througth_interaxis->ResumeLayout(false);
			this->Length_througth_interaxis->PerformLayout();
			this->Lifetime_group->ResumeLayout(false);
			this->Lifetime_group->PerformLayout();
			this->Last_interaxis_group->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: int i_gear;
		  double alpha_1;//Угол на меньшем шкиве
		  double u;//Передаточное число
		  double D1;//Диаметр меньшего шкива
		  double v_belt = NULL;//Скорость ремня
		  double n1_shkiv;//Частота вращения меньшего шкива
		  double D2_main;//Диаметр большего шкива
		  double a; //Межосевое расстояние
		  double L; //Длина
		  int Belt_type; //0 - резиновый 1 - синтетический



		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Sav_group->Enabled = false;
	}
#pragma region Math_Functions
		double Shkiv_D2(double epsilon , char P_type) {
			  switch (P_type) {
			  case 'U': return D1 * (1 - epsilon) * u;
			  case 'D': return (D1 * u) / (1 - epsilon);
			  }


			  
		  }
		void Saverin_function(double N, double n1, double w1) {//Формула Саверина
			
			D1 = w1 * pow(N * pow(10,3) / n1, 0.3333333333333333333333333333333333333333333333333333);

		  }
		double Peredatochnoe_chislo(double n1, double n2) { return n1 / n2; }
		bool TB_check(String^ Text) {//Проверка текстбоксов
			bool Correct = true;
			if (Text->Length == 0) return false;
			for (int i = 0; i < Text->Length; i++) {
				int Sym = Text[i];
				if ((Sym < 48 || Sym>57) && Sym != 44) Correct = false;//проверка на наличие цифр
			}
			

			return Correct;
		}
		double Caluclate_belt_speed() {
			if (v_belt != NULL)
				return v_belt;
			else {
				return (M_PI * n1_shkiv * D1) / (1000 * 60);
			}
		}
		double Interaxis_range(double W2) { return W2 * (D1 + D2_main); }
		//Длина
		double Length() { return 2 * a + M_PI * ((D1 + D2_main) / 2) + pow((D2_main - D1), 2) / (4 * a); }
		double Length_check(double i) {
			
			return v_belt / i;;
		}
		//Доп параметры к финальным формулам
		double Calculate_final_interaxis() {
			double delta = (D2_main - D1) / 2;
			double lambda = L - M_PI * ((D1 + D2_main) / 2);
			return (lambda + pow((pow(lambda, 2) - 8 * pow(delta, 2)),0.5))/4;
		}

		double Calculate_alpha() {
			return 180 - (D2_main * D1 / a) * 57;
		}
#pragma endregion

#pragma region Interface
	private: System::Void Rubber_belt_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (Rubber_belt->Checked) {
		Prokladki->Enabled = true;
		With_interlayer->Enabled = true;
		B_BNKL_group->Enabled = true;
	}
	else {
		Prokladki->Enabled = false;
		With_interlayer->Enabled = false;
		B_BNKL_group->Enabled = false;
	}
}
	private: System::Void I_freq_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if(!TB_check(this->I_freq->Text)){}
	else {
		if ((I_Inhibitor->Text->Contains("5") && (Convert::ToDouble(this->I_freq->Text)) <= 5) || (I_Inhibitor->Text->Contains("50") && (Convert::ToDouble(this->I_freq->Text)) <= 50)) {
			Max_Length->Text = "Минимальная длина:\n" + Length_check(Convert::ToDouble(this->I_freq->Text)) + " мм";
		}
		else {
			Max_Length->Text = "Минимальная длина:\n" + "??? мм";
		}
	}
}
	private: System::Void i_freq_LTI_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (!TB_check(this->i_freq_LTI->Text)) {}
	else {
		if ((I_Inhibitor_2->Text->Contains("5") && (Convert::ToDouble(this->i_freq_LTI->Text)) <= 5 ) || (I_Inhibitor_2->Text->Contains("50") && (Convert::ToDouble(this->i_freq_LTI->Text)) <= 50)) {
			Min_Length_2->Text = "Минимальная длина:\n" + Length_check(Convert::ToDouble(this->i_freq_LTI->Text)) + " мм";
		}
		else {
			Min_Length_2->Text = "Минимальная длина:\n" + "??? мм";
		}
	}
}
	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void сброситьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		D1_Group->Enabled = true;
		D2_group->Enabled = false;
		Sav_group->Enabled = false;
		Sav_results->Clear();
		D2_results->Clear();
	}
	private: System::Void Syntetic_belt_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (Syntetic_belt->Checked) {
		Synthetic_depth->Enabled = true;
	}
	else Synthetic_depth->Enabled = false;
}
#pragma endregion


#pragma region MainFunctions
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->Saverin->Checked == true || this->Belt_speed->Checked==true || this->Belt_depth->Checked==true || this->Gabarite->Checked==true) {
			this->D1_Group->Enabled = false;
			if (this->Saverin->Checked == true) {
				this->Sav_group->Enabled = true;
			}
			else {
				if (this->Belt_depth->Checked == true) {
					this->Depth_group->Enabled = true;
				}
				else {
					if (this->Belt_speed->Checked == true) {
						this->Speed_group->Enabled = true;
					}
					else {
						if (this->Gabarite->Checked == true) {
							this->Size_group->Enabled = true;
						}
					}
				}
			}
		}
		else { MessageBox::Show("Выберите способ расчёта диаметра!", "Ошибка!",MessageBoxButtons::OK,MessageBoxIcon::Asterisk); }
		
		

		}
	private: System::Void Sav_button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->Sav_W1_110_value->Checked == false && this->Sav_W1_130_value->Checked == false) { MessageBox::Show("Выберите значение коэффициента 110 или 130!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk); }
		else {
			if (!TB_check(this->Sav_N_value->Text) || !TB_check(this->Sav_n1_value->Text)){ MessageBox::Show("Проверьте правильность введённых данных!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk); }
			else {
				double sav_N = Convert::ToDouble(this->Sav_N_value->Text);
				double n1 = Convert::ToDouble(this->Sav_n1_value->Text);
				if(n1==0){ MessageBox::Show("Частота вращения не может быть равна нулю!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk); }
				else {
					if (this->Sav_W1_110_value->Checked == true)  Saverin_function(sav_N, n1, 110);
					else Saverin_function(sav_N, n1, 130);
					n1_shkiv = Convert::ToDouble(this->Sav_n1_value->Text);
					//D1 = Round_diametr(D1);
					Sav_results->Text += "Диаметр меньшего шкива (мм): " + D1 + "\n";
					this->D2_group->Enabled = true;
					this->Sav_group->Enabled = false;
				}
			}

		}
	}
	
	private: System::Void Calc_D2_Click(System::Object^ sender, System::EventArgs^ e) {
	if(!this->epsilon_002->Checked && !this->epsilon_003->Checked)MessageBox::Show("Выберите значение коэффициента скольжения ремня 0.02 или 0.03!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	else {
		if (!TB_check(this->D2_n2_value->Text)) { MessageBox::Show("Проверьте правильность введённых данных!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk); }
		double n2 = Convert::ToDouble(this->D2_n2_value->Text);
		if(n2==0)MessageBox::Show("Частота вращения не может быть равна нулю!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		else {
			double D2[2];
			u = Peredatochnoe_chislo(n1_shkiv, n2);
			if (this->epsilon_002->Checked) {
				D2[0] = Shkiv_D2(0.02, 'D');
				D2[1] = Shkiv_D2(0.02, 'U');
			}
			else {
				D2[0] = Shkiv_D2(0.03, 'D');
				D2[1] = Shkiv_D2(0.03, 'U');
			}
			D2[0] = Round_diametr(D2[0]);
			D2[1] = Round_diametr(D2[1]);
			D2_main = D2[1];
			D1 = Round_diametr(D1);
			this->D2_results->Text += "Диаметр большего шкива:\nДля понижающих передач: " + D2[0] + " мм\nДля повышающих передач: " + D2[1] +" мм\nДиаметр меньшего шкива: " +D1 +" мм\nПередаточное число: " + u;
			v_belt=Caluclate_belt_speed();
			this->D2_group->Enabled = false;
			this->Main_Speed_group->Enabled = true;
			this->Main_speed->Text += "Скорость ремня: " + v_belt + " м/с";
			this->Axis_group->Enabled = true;
		}
	}
}
	private: System::Void Gab_calculate_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!TB_check(this->Gab_D1->Text) || !TB_check(this->Gab_n1->Text)) { MessageBox::Show("Проверьте правильность введённых данных!"); }
		else {
			D1 = Convert::ToDouble(this->Gab_D1->Text);
			//D1 = Round_diametr(D1);
			n1_shkiv = Convert::ToDouble(this->Gab_n1->Text);
			this->D2_group->Enabled = true;
			this->Size_group->Enabled = false;
		}
	}
	
	private: System::Void Calculate_D1_speed_Click(System::Object^ sender, System::EventArgs^ e) {

	if (this->Type_1->Checked == false && this->Type_2->Checked == false && this->Type_3->Checked == false) { MessageBox::Show("Выберите тип ремня!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk); }
	else {
		if (!TB_check(this->BS_n1->Text)) { MessageBox::Show("Проверьте правильность введённых данных!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk); }
		else {
			n1_shkiv = Convert::ToDouble(this->BS_n1->Text);
			if (this->Type_1->Checked == true) {
				v_belt = Get_speed(1);
				D1 = Calculate_Diametr(1, n1_shkiv);
			}
			else {
				if (this->Type_2->Checked == true) {
					v_belt = Get_speed(2);
					D1 = Calculate_Diametr(2, n1_shkiv);
				}
				else {
					v_belt = Get_speed(3);
					D1 = Calculate_Diametr(3, n1_shkiv);
				}
			}

		}
		//D1 = Round_diametr(D1);
		n1_shkiv = Convert::ToDouble(this->BS_n1->Text);
		SG_D1_results->Text += "Диаметр меньшего шкива (мм): " + D1 + "\n";
		this->D2_group->Enabled = true;
		this->Speed_group->Enabled = false;
		}
	}
	private: System::Void Axis_calculate_Click(System::Object^ sender, System::EventArgs^ e) {
	if(this->Middle_speed->Checked==false && this->High_speed_low_drag->Checked==false)MessageBox::Show("Для какой передачи вы высчитываете межосевое расстояние?", "Вопрос", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	else {
		if (this->Middle_speed->Checked == true) a = Interaxis_range(2);
		else a = Interaxis_range(1.5);

		this->Axis_result->Text += "Межосевое расстояние: " + a + " мм\n";
		this->Axis_group->Enabled = false;
		this->Length_group->Enabled = true;
	}
}
	private: System::Void Choose_the_method_of_length_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->Length_interaxis->Checked == false && this->Length_lifetime->Checked == false)MessageBox::Show("Как вы собираетесь считать длину ремня?", "Вопрос", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	else {
		if (Length_lifetime->Checked) {
			Length_group->Enabled = false;
			if (High_speed_low_drag->Checked) I_Inhibitor->Text += 50;
			else  I_Inhibitor->Text += 5;
			this->Lifetime_group->Enabled = true;
			this->Length_group->Enabled = false;

		}
		else {
			if (High_speed_low_drag->Checked) I_Inhibitor_2->Text += 50;
			
			else I_Inhibitor_2->Text += 5;
			this->Length_group->Enabled = false;
			this->Length_througth_interaxis->Enabled = true;
			L = Length();
			LTI_Results->Text += "Длина ремня: " + L + " мм\n";
		}


	}
}
	
	private: System::Void Select_length_Click(System::Object^ sender, System::EventArgs^ e) {//Длина ремня WIP
	if(!TB_check(this->Length_in_gr->Text) || !TB_check(this->I_freq->Text))MessageBox::Show("Какую длину ремня вы хотите выбрать?", "Вопрос", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	else {
		if (Convert::ToDouble(this->Length_in_gr->Text)< Length_check(Convert::ToDouble(this->I_freq->Text))) {
			MessageBox::Show("Слишком маленькая длина ремня!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}

}
	private: System::Void Calc_length_of_belt_Click(System::Object^ sender, System::EventArgs^ e) {//Длина ремня WIP
	

	}
	private: System::Void Calculate_D1_TD_Click(System::Object^ sender, System::EventArgs^ e) {
		if(Rubber_belt->Checked==false && Syntetic_belt->Checked==false)MessageBox::Show("Какой ремень?", "Вопрос", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		else {
			if (Syntetic_belt->Checked) {
				if (!Synthetic_depth->SelectedItem) { MessageBox::Show("Какая толщина ремня?", "Вопрос", MessageBoxButtons::OK, MessageBoxIcon::Warning); }
				else {
					D1 = D1_synthetic(Convert::ToDouble(Synthetic_depth->SelectedItem->ToString()));
					Depth_results->Text += "Минимальный диаметр меньшего шкива: " + D1 + " мм";
				}
			}
			else {
				if(!Prokladki->SelectedItem)MessageBox::Show("Сколько прокладок?", "Вопрос", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				else {
					if (B800_B820->Checked == false && BNKL->Checked == false)MessageBox::Show("Какая модель ремня?", "Вопрос", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					else {
						bool Interlay=false;
						if (With_interlayer->Checked) Interlay = true;
						if (B800_B820->Checked) {
							D1 = D1_rubber(1, Convert::ToInt64(Prokladki->SelectedItem->ToString()), Interlay);
							Depth_results->Text += "Допустимый минимальный диаметр меньшего шкива: " + D1 + " мм\n Рекомендуемый минимальный диаметр меньшего шкива: "+ D1_rubber_R(1, Convert::ToInt64(Prokladki->SelectedItem->ToString()), Interlay); +" мм";
						}
						else {
							D1 = D1_rubber(2, Convert::ToInt64(Prokladki->SelectedItem->ToString()), Interlay);
							Depth_results->Text += "Допустимый минимальный диаметр меньшего шкива: " + D1 + " мм\n Рекомендуемый минимальный диаметр меньшего шкива: " + D1_rubber_R(2, Convert::ToInt64(Prokladki->SelectedItem->ToString()), Interlay); +" мм";
						}
					}
				}
			}
			if (D1 != NULL) {
				Depth_results->Enabled = true;
				Rubber_belt->Enabled = false;
				Syntetic_belt->Enabled = false;
				Calculate_D1_TD->Enabled = false;
				Set_D1_TD->Enabled = true;
				D1_TD->Enabled = true;
				n1_TD->Enabled = true;
			}
		}

	}
	private: System::Void Set_D1_TD_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!TB_check(D1_TD->Text) && !TB_check(n1_TD->Text)) MessageBox::Show("Вы правильно ввели данные?", "Вопрос", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		else {
			if(Convert::ToDouble(D1_TD->Text)<D1)MessageBox::Show("Почему диаметр меньше допустимого значения?", "Вопрос", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			else {
				n1_shkiv = Convert::ToDouble(n1_TD->Text);
				D1 = Convert::ToDouble(D1_TD->Text);
				Depth_group -> Enabled = false;
				D2_group->Enabled = true;
			}
		}
	}
#pragma endregion


	

private: System::Void Synthetic_depth_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
  
	

}
