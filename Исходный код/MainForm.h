#pragma once
#include "MyForm.h"
#include "PrefForm.h"

namespace LabTi {
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
/// <summary>
/// Сводка для MainForm
/// </summary>
public ref class MainForm : public System::Windows::Forms::Form
{
public:
MainForm(void)
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
~MainForm()
{
if (components)
{
delete components;
}
}
private: System::Windows::Forms::Label^ titleLabel;
private: System::Windows::Forms::Button^ visinerEncBtn;
private: System::Windows::Forms::Button^ playferEncBtn;
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
    this->titleLabel = (gcnew System::Windows::Forms::Label());
    this->visinerEncBtn = (gcnew System::Windows::Forms::Button());
    this->playferEncBtn = (gcnew System::Windows::Forms::Button());
    this->SuspendLayout();
    // 
    // titleLabel
    // 
    this->titleLabel->AutoSize = true;
    this->titleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
    this->titleLabel->Location = System::Drawing::Point(145, 74);
    this->titleLabel->Name = L"titleLabel";
    this->titleLabel->Size = System::Drawing::Size(401, 32);
    this->titleLabel->TabIndex = 0;
    this->titleLabel->Text = L"Выберите вид шифрования";
    // 
    // visinerEncBtn
    // 
    this->visinerEncBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
    this->visinerEncBtn->Location = System::Drawing::Point(99, 196);
    this->visinerEncBtn->Name = L"visinerEncBtn";
    this->visinerEncBtn->Size = System::Drawing::Size(149, 86);
    this->visinerEncBtn->TabIndex = 1;
    this->visinerEncBtn->Text = L"Алгоритм Виженера";
    this->visinerEncBtn->UseVisualStyleBackColor = true;
    this->visinerEncBtn->Click += gcnew System::EventHandler(this, &MainForm::visinerEncBtn_Click);
    // 
    // playferEncBtn
    // 
    this->playferEncBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
    this->playferEncBtn->Location = System::Drawing::Point(458, 196);
    this->playferEncBtn->Name = L"playferEncBtn";
    this->playferEncBtn->Size = System::Drawing::Size(149, 86);
    this->playferEncBtn->TabIndex = 2;
    this->playferEncBtn->Text = L"Шифр Плейфейра";
    this->playferEncBtn->UseVisualStyleBackColor = true;
    this->playferEncBtn->Click += gcnew System::EventHandler(this, &MainForm::playferEncBtn_Click);
    // 
    // MainForm
    // 
    this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
    this->ClientSize = System::Drawing::Size(709, 412);
    this->Controls->Add(this->playferEncBtn);
    this->Controls->Add(this->visinerEncBtn);
    this->Controls->Add(this->titleLabel);
    this->Name = L"MainForm";
    this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
    this->Text = L"MainForm";
    this->ResumeLayout(false);
    this->PerformLayout();

}
#pragma endregion
private: System::Void visinerEncBtn_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Hide();                       
    LabTi::MyForm^ myForm = gcnew LabTi::MyForm();
    myForm->ShowDialog();               
    this->Show();
}
private: System::Void playferEncBtn_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Hide();
    LabTi::PrefForm^ PrefForm = gcnew LabTi::PrefForm();
    PrefForm->ShowDialog();
    this->Show();
}
};
}