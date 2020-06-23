#pragma once

namespace Lab33 {

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
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;



	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label7;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 84);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(260, 26);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"0";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(12, 140);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(260, 26);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"0";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(12, 196);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(260, 26);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"0";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(278, 301);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(260, 32);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 301);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(260, 32);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Сбросить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 19);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 24);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Сложение";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"Сложение", L"Вычитание", L"Умножение", L"Деление",
					L"Сложение дробей", L"Вычитание дробей", L"Умножение дробей", L"Деление дробей", L"Перевод из дес. в об. дробь(один знак)", L"Перевод из дес. в об. дробь(два знака)",
					L"Перевод из об. в дес. дробь"
			});
			this->comboBox1->Location = System::Drawing::Point(278, 19);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(331, 28);
			this->comboBox1->TabIndex = 9;
			this->comboBox1->Text = L"Сложение";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Первое число(числитель 1)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(157, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Второе число(знаменатель 1)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 180);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(180, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Результат(Числитель для дробей)";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(278, 84);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(260, 26);
			this->textBox4->TabIndex = 13;
			this->textBox4->Text = L"0";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(278, 140);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(260, 26);
			this->textBox5->TabIndex = 14;
			this->textBox5->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(275, 68);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Числитель 2";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(275, 124);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Знаменатель 2";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(12, 255);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(260, 26);
			this->textBox6->TabIndex = 17;
			this->textBox6->Text = L"0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(13, 239);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(193, 13);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Результат(Знаменатель для дробей)";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(614, 345);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
		 bool Protect() {
			 if ((textBox1->Text->Length == 0) || (textBox2->Text->Length == 0)) { return false; }
			 for (int i = 0; i < textBox1->Text->Length; i++) {
				 if((textBox1->Text[i]>='0')&&(textBox1->Text[i]<='9')|| (textBox1->Text[i]==',')) {}
				 else { return false; }
			 }
			 for (int i = 0; i < textBox2->Text->Length; i++) {
				 if ((textBox2->Text[i] >= '0') && (textBox2->Text[i] <= '9') || (textBox2->Text[i] == ',')) {}
				 else { return false; }
			 }
			 return true;
		 }

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (Protect()) {
			double Num1, Num2, Num3, Num4, Result, Result2;
			Num1 = System::Convert::ToDouble(textBox1->Text);
			Num2 = System::Convert::ToDouble(textBox2->Text);
			Num3 = System::Convert::ToDouble(textBox4->Text);
			Num4 = System::Convert::ToDouble(textBox5->Text);

			if (comboBox1->SelectedItem == "Сложение") {
				Result = Num1 + Num2;
				label4->Text = L"Сложение";
			}
			else
				if (comboBox1->SelectedItem == "Вычитание") {
					Result = Num1 - Num2;
					label4->Text = L"Вычитание";
				}
				else
					if (comboBox1->SelectedItem == "Умножение") {
						Result = Num1 * Num2;
						label4->Text = L"Умножение";
					}
					else
						if (comboBox1->SelectedItem == "Деление") {
							if (Num2 != 0) {
								Result = Num1 / Num2;
								label4->Text = L"Деление";
							}
							else { MessageBox::Show("Попытка деления на 0", "Ошибка"); }
						}
			if (comboBox1->SelectedItem == "Сложение дробей") {
				Result = (Num1*Num4)+(Num3*Num2);
				Result2 = Num2 * Num4;
				label4->Text = L"Сложение дробей";
			}else
				if (comboBox1->SelectedItem == "Вычитание дробей") {
					Result = (Num1*Num4) - (Num3*Num2);
					Result2 = Num2 * Num4;
					label4->Text = L"Вычитание дробей";
				}else
					if (comboBox1->SelectedItem == "Умножение дробей") {
						Result = Num1 * Num3;
						Result2 = Num2 * Num4;
						label4->Text = L"Умножение дробей";
					}else
						if (comboBox1->SelectedItem == "Деление дробей") {
							Result = Num1 * Num4;
							Result2 = Num2 * Num3;
							label4->Text = L"Деление дробей";
						}else
							if (comboBox1->SelectedItem == "Перевод из дес. в об. дробь(один знак)") {
								Result = Num1 * 10;
								Result2 = 10;
								label4->Text = L"Перевод из дес. в об. дробь";
							}else
								if (comboBox1->SelectedItem == "Перевод из дес. в об. дробь(два знака)") {
									Result = Num1 * 100;
									Result2 = 100;
									label4->Text = L"Перевод из дес. в об. дробь";
								}else
									if (comboBox1->SelectedItem == "Перевод из об. в дес. дробь") {
										Result = Num1/Num2;
										label4->Text = L"Перевод из об. в дес. дробь";
									}
								
            textBox3->Text = System::Convert::ToString(Result);
			textBox6->Text = System::Convert::ToString(Result2);
		}
		else { MessageBox::Show("Ошибка ввода", "Ошибка"); }
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text = L"0";
	textBox2->Text = L"0";
	textBox3->Text = L"0";
	textBox4->Text = L"0";
	textBox5->Text = L"0";
	textBox6->Text = L"0";
	label4->Text = L"";
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
