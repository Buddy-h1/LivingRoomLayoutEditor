#pragma once
#include "EnumGraphicElement.h"
#include "DrawingField.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace LivingRoomLayoutEditor {

	public ref class MainForm : public System::Windows::Forms::Form {

	private:
		DrawingField^ drawingField;

	public:

		MainForm(void)
		{
			InitializeComponent();
			drawingField = gcnew DrawingField();
			drawingField->getPictureBoxField()->Parent = this;
		}

	protected:
		~MainForm() {
			if (components) {
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button_add_armchair;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button_add_tv;
	private: System::Windows::Forms::Button^ button_add_sofa;
	private: System::Windows::Forms::Button^ button_add_table;
	private: System::Windows::Forms::Button^ button_add_plant;
	private: System::Windows::Forms::Button^ button_add_door;
	private: System::Windows::Forms::Button^ button_add_window;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button_save;
	private: System::Windows::Forms::Button^ button_delete;
	private: System::Windows::Forms::Button^ button_rotate;
	private: System::Windows::Forms::Button^ button_clear;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->button_add_armchair = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_add_tv = (gcnew System::Windows::Forms::Button());
			this->button_add_sofa = (gcnew System::Windows::Forms::Button());
			this->button_add_table = (gcnew System::Windows::Forms::Button());
			this->button_add_plant = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button_save = (gcnew System::Windows::Forms::Button());
			this->button_delete = (gcnew System::Windows::Forms::Button());
			this->button_rotate = (gcnew System::Windows::Forms::Button());
			this->button_clear = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->button_add_door = (gcnew System::Windows::Forms::Button());
			this->button_add_window = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_add_armchair
			// 
			this->button_add_armchair->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_add_armchair->Location = System::Drawing::Point(18, 48);
			this->button_add_armchair->Name = L"button_add_armchair";
			this->button_add_armchair->Size = System::Drawing::Size(134, 35);
			this->button_add_armchair->TabIndex = 1;
			this->button_add_armchair->Text = L"Кресло";
			this->button_add_armchair->UseVisualStyleBackColor = true;
			this->button_add_armchair->Click += gcnew System::EventHandler(this, &MainForm::button_add_armchair_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(17, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 33);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Добавить:";
			// 
			// button_add_tv
			// 
			this->button_add_tv->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_add_tv->Location = System::Drawing::Point(18, 130);
			this->button_add_tv->Name = L"button_add_tv";
			this->button_add_tv->Size = System::Drawing::Size(134, 35);
			this->button_add_tv->TabIndex = 5;
			this->button_add_tv->Text = L"Телевизор";
			this->button_add_tv->UseVisualStyleBackColor = true;
			this->button_add_tv->Click += gcnew System::EventHandler(this, &MainForm::button_add_tv_Click);
			// 
			// button_add_sofa
			// 
			this->button_add_sofa->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_add_sofa->Location = System::Drawing::Point(18, 89);
			this->button_add_sofa->Name = L"button_add_sofa";
			this->button_add_sofa->Size = System::Drawing::Size(134, 35);
			this->button_add_sofa->TabIndex = 6;
			this->button_add_sofa->Text = L"Диван";
			this->button_add_sofa->UseVisualStyleBackColor = true;
			this->button_add_sofa->Click += gcnew System::EventHandler(this, &MainForm::button_add_sofa_Click);
			// 
			// button_add_table
			// 
			this->button_add_table->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_add_table->Location = System::Drawing::Point(18, 171);
			this->button_add_table->Name = L"button_add_table";
			this->button_add_table->Size = System::Drawing::Size(134, 35);
			this->button_add_table->TabIndex = 7;
			this->button_add_table->Text = L"Столик";
			this->button_add_table->UseVisualStyleBackColor = true;
			this->button_add_table->Click += gcnew System::EventHandler(this, &MainForm::button_add_table_Click);
			// 
			// button_add_plant
			// 
			this->button_add_plant->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_add_plant->Location = System::Drawing::Point(18, 212);
			this->button_add_plant->Name = L"button_add_plant";
			this->button_add_plant->Size = System::Drawing::Size(134, 35);
			this->button_add_plant->TabIndex = 8;
			this->button_add_plant->Text = L"Растение";
			this->button_add_plant->UseVisualStyleBackColor = true;
			this->button_add_plant->Click += gcnew System::EventHandler(this, &MainForm::button_add_plant_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(17, 392);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(140, 33);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Действия:";
			// 
			// button_save
			// 
			this->button_save->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_save->Location = System::Drawing::Point(18, 428);
			this->button_save->Name = L"button_save";
			this->button_save->Size = System::Drawing::Size(134, 35);
			this->button_save->TabIndex = 10;
			this->button_save->Text = L"Сохранить";
			this->button_save->UseVisualStyleBackColor = true;
			this->button_save->Click += gcnew System::EventHandler(this, &MainForm::button_save_Click);
			// 
			// button_delete
			// 
			this->button_delete->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_delete->Location = System::Drawing::Point(18, 469);
			this->button_delete->Name = L"button_delete";
			this->button_delete->Size = System::Drawing::Size(134, 35);
			this->button_delete->TabIndex = 11;
			this->button_delete->Text = L"Удалить";
			this->button_delete->UseVisualStyleBackColor = true;
			this->button_delete->Click += gcnew System::EventHandler(this, &MainForm::button_delete_Click);
			// 
			// button_rotate
			// 
			this->button_rotate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_rotate->Location = System::Drawing::Point(18, 510);
			this->button_rotate->Name = L"button_rotate";
			this->button_rotate->Size = System::Drawing::Size(134, 35);
			this->button_rotate->TabIndex = 12;
			this->button_rotate->Text = L"Повернуть";
			this->button_rotate->UseVisualStyleBackColor = true;
			this->button_rotate->Click += gcnew System::EventHandler(this, &MainForm::button_rotate_Click);
			// 
			// button_clear
			// 
			this->button_clear->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_clear->Location = System::Drawing::Point(18, 551);
			this->button_clear->Name = L"button_clear";
			this->button_clear->Size = System::Drawing::Size(134, 35);
			this->button_clear->TabIndex = 13;
			this->button_clear->Text = L"Очистить";
			this->button_clear->UseVisualStyleBackColor = true;
			this->button_clear->Click += gcnew System::EventHandler(this, &MainForm::button_clear_Click);
			// 
			// button_add_door
			// 
			this->button_add_door->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_add_door->Location = System::Drawing::Point(18, 253);
			this->button_add_door->Name = L"button_add_door";
			this->button_add_door->Size = System::Drawing::Size(134, 35);
			this->button_add_door->TabIndex = 15;
			this->button_add_door->Text = L"Дверь";
			this->button_add_door->UseVisualStyleBackColor = true;
			this->button_add_door->Click += gcnew System::EventHandler(this, &MainForm::button_add_door_Click);
			// 
			// button_add_window
			// 
			this->button_add_window->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_add_window->Location = System::Drawing::Point(18, 294);
			this->button_add_window->Name = L"button_add_window";
			this->button_add_window->Size = System::Drawing::Size(134, 35);
			this->button_add_window->TabIndex = 16;
			this->button_add_window->Text = L"Окно";
			this->button_add_window->UseVisualStyleBackColor = true;
			this->button_add_window->Click += gcnew System::EventHandler(this, &MainForm::button_add_window_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(1107, 598);
			this->Controls->Add(this->button_add_window);
			this->Controls->Add(this->button_add_door);
			this->Controls->Add(this->button_clear);
			this->Controls->Add(this->button_rotate);
			this->Controls->Add(this->button_delete);
			this->Controls->Add(this->button_save);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button_add_plant);
			this->Controls->Add(this->button_add_table);
			this->Controls->Add(this->button_add_sofa);
			this->Controls->Add(this->button_add_tv);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_add_armchair);
			this->MaximumSize = System::Drawing::Size(1123, 637);
			this->MinimumSize = System::Drawing::Size(1123, 637);
			this->Name = L"MainForm";
			this->Text = L"Living Room Editor";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_add_armchair_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_add_sofa_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_add_tv_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_add_table_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_add_plant_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_add_door_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_add_window_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_delete_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_save_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_clear_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_rotate_Click(System::Object^ sender, System::EventArgs^ e);
};
}
