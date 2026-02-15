#pragma once

#include <msclr/marshal_cppstd.h>
#include <fstream>
#include <string>

namespace LabTi {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::IO;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Button^ encryptBtn;
    private: System::Windows::Forms::TextBox^ InputBox1;
    private: System::Windows::Forms::Button^ decryptBtn;
    private: System::Windows::Forms::Button^ clearBtn;
    private: System::Windows::Forms::TextBox^ resultBox2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Button^ backBtn;
    private: System::Windows::Forms::Button^ inputFormFileBtn;
    private: System::Windows::Forms::Button^ outputFormFileBtn;
    private: System::Windows::Forms::TextBox^ inputKeyBtn;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
    private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;


    private: System::ComponentModel::Container^ components;

           void InitializeComponent(void)
           {
               this->encryptBtn = (gcnew System::Windows::Forms::Button());
               this->InputBox1 = (gcnew System::Windows::Forms::TextBox());
               this->decryptBtn = (gcnew System::Windows::Forms::Button());
               this->clearBtn = (gcnew System::Windows::Forms::Button());
               this->resultBox2 = (gcnew System::Windows::Forms::TextBox());
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->label2 = (gcnew System::Windows::Forms::Label());
               this->backBtn = (gcnew System::Windows::Forms::Button());
               this->inputFormFileBtn = (gcnew System::Windows::Forms::Button());
               this->outputFormFileBtn = (gcnew System::Windows::Forms::Button());
               this->inputKeyBtn = (gcnew System::Windows::Forms::TextBox());
               this->label3 = (gcnew System::Windows::Forms::Label());
               this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
               this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
               this->SuspendLayout();
               // 
               // encryptBtn
               // 
               this->encryptBtn->Location = System::Drawing::Point(12, 169);
               this->encryptBtn->Name = L"encryptBtn";
               this->encryptBtn->Size = System::Drawing::Size(133, 25);
               this->encryptBtn->TabIndex = 0;
               this->encryptBtn->Text = L"Шифровать";
               this->encryptBtn->UseVisualStyleBackColor = true;
               this->encryptBtn->Click += gcnew System::EventHandler(this, &MyForm::encryptBtn_Click);
               // 
               // InputBox1
               // 
               this->InputBox1->Location = System::Drawing::Point(212, 103);
               this->InputBox1->Name = L"InputBox1";
               this->InputBox1->Size = System::Drawing::Size(304, 22);
               this->InputBox1->TabIndex = 1;
               // 
               // decryptBtn
               // 
               this->decryptBtn->Location = System::Drawing::Point(308, 169);
               this->decryptBtn->Name = L"decryptBtn";
               this->decryptBtn->Size = System::Drawing::Size(119, 25);
               this->decryptBtn->TabIndex = 2;
               this->decryptBtn->Text = L"Дешифровать";
               this->decryptBtn->UseVisualStyleBackColor = true;
               this->decryptBtn->Click += gcnew System::EventHandler(this, &MyForm::decryptBtn_Click);
               // 
               // clearBtn
               // 
               this->clearBtn->Location = System::Drawing::Point(593, 169);
               this->clearBtn->Name = L"clearBtn";
               this->clearBtn->Size = System::Drawing::Size(133, 23);
               this->clearBtn->TabIndex = 3;
               this->clearBtn->Text = L"Очистить";
               this->clearBtn->UseVisualStyleBackColor = true;
               this->clearBtn->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
               // 
               // resultBox2
               // 
               this->resultBox2->Location = System::Drawing::Point(212, 254);
               this->resultBox2->Name = L"resultBox2";
               this->resultBox2->Size = System::Drawing::Size(304, 22);
               this->resultBox2->TabIndex = 4;
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->Location = System::Drawing::Point(209, 82);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(110, 16);
               this->label1->TabIndex = 5;
               this->label1->Text = L"Исходный текст";
               // 
               // label2
               // 
               this->label2->AutoSize = true;
               this->label2->Location = System::Drawing::Point(209, 222);
               this->label2->Name = L"label2";
               this->label2->Size = System::Drawing::Size(77, 16);
               this->label2->TabIndex = 6;
               this->label2->Text = L"Результат";
               // 
               // backBtn
               // 
               this->backBtn->Location = System::Drawing::Point(593, 320);
               this->backBtn->Name = L"backBtn";
               this->backBtn->Size = System::Drawing::Size(133, 23);
               this->backBtn->TabIndex = 7;
               this->backBtn->Text = L"Вернуться";
               this->backBtn->UseVisualStyleBackColor = true;
               this->backBtn->Click += gcnew System::EventHandler(this, &MyForm::backBtn_Click);
               // 
               // inputFormFileBtn
               // 
               this->inputFormFileBtn->Location = System::Drawing::Point(593, 82);
               this->inputFormFileBtn->Name = L"inputFormFileBtn";
               this->inputFormFileBtn->Size = System::Drawing::Size(133, 43);
               this->inputFormFileBtn->TabIndex = 8;
               this->inputFormFileBtn->Text = L"Ввести текст из файла";
               this->inputFormFileBtn->UseVisualStyleBackColor = true;
               this->inputFormFileBtn->Click += gcnew System::EventHandler(this, &MyForm::inputFormFileBtn_Click);
               // 
               // outputFormFileBtn
               // 
               this->outputFormFileBtn->Location = System::Drawing::Point(308, 292);
               this->outputFormFileBtn->Name = L"outputFormFileBtn";
               this->outputFormFileBtn->Size = System::Drawing::Size(133, 51);
               this->outputFormFileBtn->TabIndex = 9;
               this->outputFormFileBtn->Text = L"Вывести результат в файл";
               this->outputFormFileBtn->UseVisualStyleBackColor = true;
               this->outputFormFileBtn->Click += gcnew System::EventHandler(this, &MyForm::outputFormFileBtn_Click);
               // 
               // inputKeyBtn
               // 
               this->inputKeyBtn->Location = System::Drawing::Point(212, 34);
               this->inputKeyBtn->Name = L"inputKeyBtn";
               this->inputKeyBtn->Size = System::Drawing::Size(304, 22);
               this->inputKeyBtn->TabIndex = 10;
               // 
               // label3
               // 
               this->label3->AutoSize = true;
               this->label3->Location = System::Drawing::Point(209, 9);
               this->label3->Name = L"label3";
               this->label3->Size = System::Drawing::Size(99, 16);
               this->label3->TabIndex = 11;
               this->label3->Text = L"Введите ключ";
               // 
               // openFileDialog1
               // 
               this->openFileDialog1->Filter = L"Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*";
               this->openFileDialog1->Title = L"Выберите файл для чтения";
               // 
               // saveFileDialog1
               // 
               this->saveFileDialog1->DefaultExt = L"txt";
               this->saveFileDialog1->FileName = L"result.txt";
               this->saveFileDialog1->Filter = L"Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*";
               this->saveFileDialog1->Title = L"Сохранить результат в файл";
               // 
               // MyForm
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->ClientSize = System::Drawing::Size(755, 401);
               this->Controls->Add(this->label3);
               this->Controls->Add(this->inputKeyBtn);
               this->Controls->Add(this->outputFormFileBtn);
               this->Controls->Add(this->inputFormFileBtn);
               this->Controls->Add(this->backBtn);
               this->Controls->Add(this->label2);
               this->Controls->Add(this->label1);
               this->Controls->Add(this->resultBox2);
               this->Controls->Add(this->clearBtn);
               this->Controls->Add(this->decryptBtn);
               this->Controls->Add(this->InputBox1);
               this->Controls->Add(this->encryptBtn);
               this->Name = L"MyForm";
               this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
               this->Text = L"алгоритм Виженера, прямой ключ";
               this->ResumeLayout(false);
               this->PerformLayout();

           }

    private: String^ VigenereEncrypt(String^ plaintext, String^ key)
    {
        String^ alphabet = L"АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ";
        int mod = alphabet->Length;

        String^ clean_key = "";
        for each (wchar_t c in key)
        {
            wchar_t uc = Char::ToUpper(c);
            if (alphabet->IndexOf(uc) >= 0)
                clean_key += uc;
        }
        if (clean_key->Length == 0) return plaintext;

        System::Text::StringBuilder^ result = gcnew System::Text::StringBuilder();
        int key_index = 0;

        for each (wchar_t c in plaintext)
        {
            wchar_t uc = Char::ToUpper(c);
            int idx = alphabet->IndexOf(uc);
            if (idx >= 0)
            {
                wchar_t key_char = clean_key[key_index % clean_key->Length];
                int key_pos = alphabet->IndexOf(key_char);
                int cipher_pos = (idx + key_pos) % mod;
                wchar_t cipher_char = alphabet[cipher_pos];
                if (Char::IsLower(c)) cipher_char = Char::ToLower(cipher_char);
                result->Append(cipher_char);
                key_index++;
            }
            else
            {
                result->Append(c);
            }
        }
        return result->ToString();
    }

    private: String^ VigenereDecrypt(String^ ciphertext, String^ key)
    {
        String^ alphabet = L"АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ";
        int mod = alphabet->Length;

        String^ clean_key = "";
        for each (wchar_t c in key)
        {
            wchar_t uc = Char::ToUpper(c);
            if (alphabet->IndexOf(uc) >= 0)
                clean_key += uc;
        }
        if (clean_key->Length == 0) return ciphertext;

        System::Text::StringBuilder^ result = gcnew System::Text::StringBuilder();
        int key_index = 0;

        for each (wchar_t c in ciphertext)
        {
            wchar_t uc = Char::ToUpper(c);
            int idx = alphabet->IndexOf(uc);
            if (idx >= 0)
            {
                wchar_t key_char = clean_key[key_index % clean_key->Length];
                int key_pos = alphabet->IndexOf(key_char);
                int plain_pos = (idx - key_pos + mod) % mod;
                wchar_t plain_char = alphabet[plain_pos];
                if (Char::IsLower(c)) plain_char = Char::ToLower(plain_char);
                result->Append(plain_char);
                key_index++;
            }
            else
            {
                result->Append(c);
            }
        }
        return result->ToString();
    }

    private: void ShowVigenereTable(String^ key)
    {
        String^ alphabet = L"АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ";
        System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

        String^ clean_key = "";
        for each (wchar_t c in key) {
            wchar_t uc = Char::ToUpper(c);
            if (alphabet->IndexOf(uc) >= 0) {
                clean_key += uc;
            }
        }

        if (clean_key->Length == 0) {
            MessageBox::Show(L"Нет допустимых символов в ключе для отображения таблицы!", L"Ошибка");
            return;
        }

        sb->Append(L"Таблица шифрования Виженера (первые 10 позиций):\r\n\r\n");
        sb->Append(L"     ");
        for (int i = 0; i < 10 && i < alphabet->Length; i++) {
            sb->Append(alphabet[i] + L" ");
        }
        sb->Append(L"\r\n");
        sb->Append(L"     ");
        for (int i = 0; i < 10 && i < alphabet->Length; i++) {
            sb->Append(L"--");
        }
        sb->Append(L"\r\n");

        for (int row = 0; row < 10 && row < alphabet->Length; row++) {
            sb->Append(alphabet[row] + L" | ");
            for (int col = 0; col < 10 && col < alphabet->Length; col++) {
                int shift = row;
                int shifted_pos = (col + shift) % alphabet->Length;
                sb->Append(alphabet[shifted_pos] + L" ");
            }
            sb->Append(L"\r\n");
        }

        sb->Append(L"\r\nКлюч: " + clean_key + L"\r\n");
        sb->Append(L"Длина ключа: " + clean_key->Length + L"\r\n");

        MessageBox::Show(sb->ToString(), L"Таблица Виженера");
    }

    private: System::Void encryptBtn_Click(System::Object^ sender, System::EventArgs^ e)
    {
        String^ input = InputBox1->Text->Trim();
        String^ key = inputKeyBtn->Text->Trim();

        if (String::IsNullOrEmpty(input) || String::IsNullOrEmpty(key))
        {
            MessageBox::Show(L"Введите текст и ключ!", L"Ошибка");
            return;
        }

        resultBox2->Text = VigenereEncrypt(input, key);

    }

    private: System::Void decryptBtn_Click(System::Object^ sender, System::EventArgs^ e)
    {
        String^ input = InputBox1->Text->Trim();
        String^ key = inputKeyBtn->Text->Trim();

        if (String::IsNullOrEmpty(input) || String::IsNullOrEmpty(key))
        {
            MessageBox::Show(L"Введите текст и ключ!", L"Ошибка");
            return;
        }

        resultBox2->Text = VigenereDecrypt(input, key);


    }

    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
    {
        InputBox1->Text = "";
        resultBox2->Text = "";
        inputKeyBtn->Text = "";
    }

    private: System::Void backBtn_Click(System::Object^ sender, System::EventArgs^ e)
    {
        this->Close();
    }

           // Простое чтение из файла через File::ReadAllText
    private: System::Void inputFormFileBtn_Click(System::Object^ sender, System::EventArgs^ e)
    {
        // Настройка диалога открытия файла
        openFileDialog1->InitialDirectory = Environment::GetFolderPath(Environment::SpecialFolder::MyDocuments);
        openFileDialog1->Filter = "Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*";
        openFileDialog1->FilterIndex = 1;
        openFileDialog1->RestoreDirectory = true;

        // Показываем диалог
        if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
        {
            try
            {
                // Читаем весь текст из файла (просто и надежно)
                String^ fileContent = File::ReadAllText(openFileDialog1->FileName, System::Text::Encoding::UTF8);

                // Разделяем на строки
                array<String^>^ lines = fileContent->Split(gcnew array<wchar_t>{ '\r', '\n' }, StringSplitOptions::RemoveEmptyEntries);

                if (lines->Length > 0)
                {
                    // Первая строка - ключ
                    inputKeyBtn->Text = lines[0]->Trim();

                    // Остальные строки - текст
                    if (lines->Length > 1)
                    {
                        String^ text = "";
                        for (int i = 1; i < lines->Length; i++)
                        {
                            if (i > 1) text += Environment::NewLine;
                            text += lines[i];
                        }
                        InputBox1->Text = text;
                    }

                    MessageBox::Show(L"Файл успешно загружен!\nПервая строка использована как ключ.",
                        L"Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);
                }
            }
            catch (Exception^ ex)
            {
                MessageBox::Show(L"Ошибка при чтении файла:\n" + ex->Message,
                    L"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
    }

           // Простая запись в файл через File::WriteAllText
    private: System::Void outputFormFileBtn_Click(System::Object^ sender, System::EventArgs^ e)
    {
        // Проверяем, есть ли результат
        if (String::IsNullOrEmpty(resultBox2->Text))
        {
            MessageBox::Show(L"Нет результата для сохранения.\nСначала выполните шифрование или дешифрование.",
                L"Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
            return;
        }

        // Настройка диалога сохранения файла
        saveFileDialog1->InitialDirectory = Environment::GetFolderPath(Environment::SpecialFolder::MyDocuments);
        saveFileDialog1->Filter = "Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*";
        saveFileDialog1->FilterIndex = 1;
        saveFileDialog1->DefaultExt = "txt";
        saveFileDialog1->FileName = "result.txt";
        saveFileDialog1->RestoreDirectory = true;
        saveFileDialog1->OverwritePrompt = true;

        // Показываем диалог
        if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
        {
            try
            {
                // Формируем содержимое файла
                String^ content = "КЛЮЧ: " + inputKeyBtn->Text + Environment::NewLine +
                    Environment::NewLine +
                    "ИСХОДНЫЙ ТЕКСТ:" + Environment::NewLine +
                    InputBox1->Text + Environment::NewLine +
                    Environment::NewLine +
                    "РЕЗУЛЬТАТ:" + Environment::NewLine +
                    resultBox2->Text;

                // Записываем в файл (просто и надежно)
                File::WriteAllText(saveFileDialog1->FileName, content, System::Text::Encoding::UTF8);

                MessageBox::Show(L"Файл успешно сохранён!\n" + saveFileDialog1->FileName,
                    L"Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);
            }
            catch (Exception^ ex)
            {
                MessageBox::Show(L"Ошибка при сохранении файла:\n" + ex->Message,
                    L"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
    }
    };
}