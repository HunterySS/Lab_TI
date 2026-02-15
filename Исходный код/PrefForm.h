#pragma once
#include <msclr/marshal_cppstd.h>
#include <fstream>
#include <string>
#include <tuple>

namespace LabTi {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::IO;

    /// <summary>
    /// Сводка для PrefForm
    /// </summary>
    public ref class PrefForm : public System::Windows::Forms::Form
    {
    public:
        PrefForm(void)
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
        ~PrefForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::TextBox^ inputTextBox;
    private: System::Windows::Forms::TextBox^ keyBox1;
    private: System::Windows::Forms::TextBox^ keyBox2;
    private: System::Windows::Forms::TextBox^ resultBox;
    protected:
    protected:
    private: System::Windows::Forms::TextBox^ keyBox4;
    private: System::Windows::Forms::TextBox^ keyBox3;
    private: System::Windows::Forms::Button^ encryptBtn;
    private: System::Windows::Forms::Button^ decryptBtn;
    private: System::Windows::Forms::Button^ inputDataFromFileBtn;
    private: System::Windows::Forms::Button^ clearBtn;
    private: System::Windows::Forms::Button^ outputDataInFileBtn;
    private: System::Windows::Forms::Button^ backBtn;
    private: System::Windows::Forms::Label^ inputTextLabel;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::CheckBox^ showTableCheckBox;
    private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
    private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
    private:
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        void InitializeComponent(void)
        {
            this->inputTextBox = (gcnew System::Windows::Forms::TextBox());
            this->keyBox1 = (gcnew System::Windows::Forms::TextBox());
            this->keyBox2 = (gcnew System::Windows::Forms::TextBox());
            this->resultBox = (gcnew System::Windows::Forms::TextBox());
            this->keyBox4 = (gcnew System::Windows::Forms::TextBox());
            this->keyBox3 = (gcnew System::Windows::Forms::TextBox());
            this->encryptBtn = (gcnew System::Windows::Forms::Button());
            this->decryptBtn = (gcnew System::Windows::Forms::Button());
            this->inputDataFromFileBtn = (gcnew System::Windows::Forms::Button());
            this->clearBtn = (gcnew System::Windows::Forms::Button());
            this->outputDataInFileBtn = (gcnew System::Windows::Forms::Button());
            this->backBtn = (gcnew System::Windows::Forms::Button());
            this->inputTextLabel = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->showTableCheckBox = (gcnew System::Windows::Forms::CheckBox());
            this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
            this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
            this->SuspendLayout();
            // 
            // inputTextBox
            // 
            this->inputTextBox->Location = System::Drawing::Point(244, 41);
            this->inputTextBox->Multiline = true;
            this->inputTextBox->Name = L"inputTextBox";
            this->inputTextBox->Size = System::Drawing::Size(225, 22);
            this->inputTextBox->TabIndex = 0;
            // 
            // keyBox1
            // 
            this->keyBox1->Location = System::Drawing::Point(24, 92);
            this->keyBox1->Name = L"keyBox1";
            this->keyBox1->Size = System::Drawing::Size(100, 22);
            this->keyBox1->TabIndex = 1;
            // 
            // keyBox2
            // 
            this->keyBox2->Location = System::Drawing::Point(244, 92);
            this->keyBox2->Name = L"keyBox2";
            this->keyBox2->Size = System::Drawing::Size(100, 22);
            this->keyBox2->TabIndex = 2;
            // 
            // resultBox
            // 
            this->resultBox->Location = System::Drawing::Point(247, 214);
            this->resultBox->Multiline = true;
            this->resultBox->Name = L"resultBox";
            this->resultBox->Size = System::Drawing::Size(222, 22);
            this->resultBox->TabIndex = 3;
            // 
            // keyBox4
            // 
            this->keyBox4->Location = System::Drawing::Point(622, 92);
            this->keyBox4->Name = L"keyBox4";
            this->keyBox4->Size = System::Drawing::Size(100, 22);
            this->keyBox4->TabIndex = 4;
            // 
            // keyBox3
            // 
            this->keyBox3->Location = System::Drawing::Point(439, 92);
            this->keyBox3->Name = L"keyBox3";
            this->keyBox3->Size = System::Drawing::Size(100, 22);
            this->keyBox3->TabIndex = 5;
            // 
            // encryptBtn
            // 
            this->encryptBtn->Location = System::Drawing::Point(24, 151);
            this->encryptBtn->Name = L"encryptBtn";
            this->encryptBtn->Size = System::Drawing::Size(112, 29);
            this->encryptBtn->TabIndex = 6;
            this->encryptBtn->Text = L"Шифровать";
            this->encryptBtn->UseVisualStyleBackColor = true;
            this->encryptBtn->Click += gcnew System::EventHandler(this, &PrefForm::encryptBtn_Click);
            // 
            // decryptBtn
            // 
            this->decryptBtn->Location = System::Drawing::Point(244, 151);
            this->decryptBtn->Name = L"decryptBtn";
            this->decryptBtn->Size = System::Drawing::Size(112, 29);
            this->decryptBtn->TabIndex = 7;
            this->decryptBtn->Text = L"Дешифровать";
            this->decryptBtn->UseVisualStyleBackColor = true;
            this->decryptBtn->Click += gcnew System::EventHandler(this, &PrefForm::decryptBtn_Click);
            // 
            // inputDataFromFileBtn
            // 
            this->inputDataFromFileBtn->Location = System::Drawing::Point(622, 151);
            this->inputDataFromFileBtn->Name = L"inputDataFromFileBtn";
            this->inputDataFromFileBtn->Size = System::Drawing::Size(104, 60);
            this->inputDataFromFileBtn->TabIndex = 8;
            this->inputDataFromFileBtn->Text = L"Ввести данные из файла";
            this->inputDataFromFileBtn->UseVisualStyleBackColor = true;
            this->inputDataFromFileBtn->Click += gcnew System::EventHandler(this, &PrefForm::inputDataFromFileBtn_Click);
            // 
            // clearBtn
            // 
            this->clearBtn->Location = System::Drawing::Point(439, 151);
            this->clearBtn->Name = L"clearBtn";
            this->clearBtn->Size = System::Drawing::Size(112, 29);
            this->clearBtn->TabIndex = 9;
            this->clearBtn->Text = L"Очистить";
            this->clearBtn->UseVisualStyleBackColor = true;
            this->clearBtn->Click += gcnew System::EventHandler(this, &PrefForm::clearBtn_Click);
            // 
            // outputDataInFileBtn
            // 
            this->outputDataInFileBtn->Location = System::Drawing::Point(287, 273);
            this->outputDataInFileBtn->Name = L"outputDataInFileBtn";
            this->outputDataInFileBtn->Size = System::Drawing::Size(119, 60);
            this->outputDataInFileBtn->TabIndex = 10;
            this->outputDataInFileBtn->Text = L"Вывести результат в файл";
            this->outputDataInFileBtn->UseVisualStyleBackColor = true;
            this->outputDataInFileBtn->Click += gcnew System::EventHandler(this, &PrefForm::outputDataInFileBtn_Click);
            // 
            // backBtn
            // 
            this->backBtn->Location = System::Drawing::Point(610, 364);
            this->backBtn->Name = L"backBtn";
            this->backBtn->Size = System::Drawing::Size(112, 29);
            this->backBtn->TabIndex = 12;
            this->backBtn->Text = L"Вернуться";
            this->backBtn->UseVisualStyleBackColor = true;
            this->backBtn->Click += gcnew System::EventHandler(this, &PrefForm::backBtn_Click);
            // 
            // inputTextLabel
            // 
            this->inputTextLabel->AutoSize = true;
            this->inputTextLabel->Location = System::Drawing::Point(241, 22);
            this->inputTextLabel->Name = L"inputTextLabel";
            this->inputTextLabel->Size = System::Drawing::Size(110, 16);
            this->inputTextLabel->TabIndex = 13;
            this->inputTextLabel->Text = L"Исходный текст";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(21, 73);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(55, 16);
            this->label1->TabIndex = 14;
            this->label1->Text = L"Ключ_1";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(241, 73);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(55, 16);
            this->label2->TabIndex = 15;
            this->label2->Text = L"Ключ_2";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(436, 73);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(55, 16);
            this->label3->TabIndex = 16;
            this->label3->Text = L"Ключ_3";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(619, 73);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(55, 16);
            this->label4->TabIndex = 17;
            this->label4->Text = L"Ключ_4";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(244, 195);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(77, 16);
            this->label5->TabIndex = 18;
            this->label5->Text = L"Результат";
            // 
            // showTableCheckBox
            // 
            this->showTableCheckBox->AutoSize = true;
            this->showTableCheckBox->Location = System::Drawing::Point(24, 313);
            this->showTableCheckBox->Name = L"showTableCheckBox";
            this->showTableCheckBox->Size = System::Drawing::Size(150, 20);
            this->showTableCheckBox->TabIndex = 19;
            this->showTableCheckBox->Text = L"Показать таблицу";
            this->showTableCheckBox->UseVisualStyleBackColor = true;
            this->showTableCheckBox->CheckedChanged += gcnew System::EventHandler(this, &PrefForm::showTableCheckBox_CheckedChanged);
            // 
            // openFileDialog1
            // 
            this->openFileDialog1->FileName = L"openFileDialog1";
            this->openFileDialog1->Filter = L"Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*";
            this->openFileDialog1->InitialDirectory = L"C:\\Users\\Александр Момотюк\\Documents";
            this->openFileDialog1->Title = L"Выберите файл для чтения";
            // 
            // saveFileDialog1
            // 
            this->saveFileDialog1->DefaultExt = L"txt";
            this->saveFileDialog1->FileName = L"result.txt";
            this->saveFileDialog1->Filter = L"Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*";
            this->saveFileDialog1->InitialDirectory = L"C:\\Users\\Александр Момотюк\\Documents";
            this->saveFileDialog1->Title = L"Сохранить результат в файл";
            // 
            // PrefForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(755, 428);
            this->Controls->Add(this->showTableCheckBox);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->inputTextLabel);
            this->Controls->Add(this->backBtn);
            this->Controls->Add(this->outputDataInFileBtn);
            this->Controls->Add(this->clearBtn);
            this->Controls->Add(this->inputDataFromFileBtn);
            this->Controls->Add(this->decryptBtn);
            this->Controls->Add(this->encryptBtn);
            this->Controls->Add(this->keyBox3);
            this->Controls->Add(this->keyBox4);
            this->Controls->Add(this->resultBox);
            this->Controls->Add(this->keyBox2);
            this->Controls->Add(this->keyBox1);
            this->Controls->Add(this->inputTextBox);
            this->Name = L"PrefForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Шифр Плейфейра с 4мя шифрующими таблицами";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private: String^ CleanKey(String^ key) {
        System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
        key = key->ToUpper()->Replace(L"J", L"I");

        for each (wchar_t c in key) {
            if (c >= 'A' && c <= 'Z') {
                sb->Append(c);
            }
        }

        if (sb->Length == 0) {
            return "DEFAULT";
        }

        return sb->ToString();
    }

    private: array<Char, 2>^ GenerateSquare(String^ key) {
        String^ alphabet = L"ABCDEFGHIKLMNOPQRSTUVWXYZ"; 
        System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

        String^ cleanKey = CleanKey(key);

        for each (wchar_t c in cleanKey) {
            if (alphabet->IndexOf(c) >= 0 && sb->ToString()->IndexOf(c) < 0) {
                sb->Append(c);
            }
        }

        for each (wchar_t c in alphabet) {
            if (sb->ToString()->IndexOf(c) < 0) {
                sb->Append(c);
            }
        }

        array<Char, 2>^ square = gcnew array<Char, 2>(5, 5);
        int index = 0;
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                square[i, j] = sb->ToString()[index++];
            }
        }
        return square;
    }

    private: value struct Position {
        int Row;
        int Col;

        Position(int row, int col) {
            Row = row;
            Col = col;
        }
    };

    private: Position FindPosition(array<Char, 2>^ square, Char c) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (square[i, j] == c) {
                    return Position(i, j);
                }
            }
        }
        return Position(-1, -1);
    }

    private: String^ FourSquareEncrypt(String^ text, array<Char, 2>^ sq1, array<Char, 2>^ sq2, array<Char, 2>^ sq3, array<Char, 2>^ sq4) {
        System::Text::StringBuilder^ result = gcnew System::Text::StringBuilder();
        System::Text::StringBuilder^ letters = gcnew System::Text::StringBuilder();

        // Сначала собираем все буквы для обработки, сохраняя позиции не-букв
        String^ upperText = text->ToUpper()->Replace(L"J", L"I");

        // Проходим по исходному тексту и строим результат с сохранением структуры
        for each (wchar_t c in text) {
            wchar_t uc = Char::ToUpper(c);
            if (uc == 'J') uc = 'I';

            // Проверяем, является ли символ английской буквой
            if (uc >= 'A' && uc <= 'Z') {
                letters->Append(uc);
            }
        }

        // Обрабатываем буквы парами
        String^ letterStr = letters->ToString();
        int len = letterStr->Length;

        // Добавляем 'X' если нечетное количество букв
        if (len % 2 == 1) {
            letterStr += "X";
            len++;
        }

        // Обрабатываем пары букв
        System::Text::StringBuilder^ encryptedLetters = gcnew System::Text::StringBuilder();

        for (int i = 0; i < len; i += 2) {
            Char a = letterStr[i];
            Char b = letterStr[i + 1];

            // Если буквы одинаковые, заменяем вторую на 'X'
            if (a == b) {
                b = 'X';
            }

            Position posA = FindPosition(sq1, a);
            Position posB = FindPosition(sq3, b);

            Char c1 = sq2[posA.Row, posB.Col];
            Char c2 = sq4[posB.Row, posA.Col];

            encryptedLetters->Append(c1);
            encryptedLetters->Append(c2);
        }

        int letterIndex = 0;
        for each (wchar_t c in text) {
            wchar_t uc = Char::ToUpper(c);
            if (uc == 'J') uc = 'I';

            if (uc >= 'A' && uc <= 'Z') {
                if (letterIndex < encryptedLetters->Length) {
                    wchar_t encryptedChar = encryptedLetters[letterIndex];
                    if (Char::IsLower(c)) {
                        result->Append(Char::ToLower(encryptedChar));
                    }
                    else {
                        result->Append(encryptedChar);
                    }
                    letterIndex++;
                }
            }
            else {
                result->Append(c);
            }
        }

        return result->ToString();
    }

    private: String^ FourSquareDecrypt(String^ text, array<Char, 2>^ sq1, array<Char, 2>^ sq2, array<Char, 2>^ sq3, array<Char, 2>^ sq4) {
        System::Text::StringBuilder^ result = gcnew System::Text::StringBuilder();
        System::Text::StringBuilder^ letters = gcnew System::Text::StringBuilder();

        for each (wchar_t c in text) {
            wchar_t uc = Char::ToUpper(c);
            if (uc == 'J') uc = 'I';

            if (uc >= 'A' && uc <= 'Z') {
                letters->Append(uc);
            }
        }

        String^ letterStr = letters->ToString();
        int len = letterStr->Length;

        if (len % 2 != 0) {
            return "Ошибка: нечетное количество букв в зашифрованном тексте";
        }

        // Дешифруем пары букв
        System::Text::StringBuilder^ decryptedLetters = gcnew System::Text::StringBuilder();

        for (int i = 0; i < len; i += 2) {
            Char c1 = letterStr[i];
            Char c2 = letterStr[i + 1];

            Position posC1 = FindPosition(sq2, c1);
            Position posC2 = FindPosition(sq4, c2);

            Char a = sq1[posC1.Row, posC2.Col];
            Char b = sq3[posC2.Row, posC1.Col];

            decryptedLetters->Append(a);
            decryptedLetters->Append(b);
        }

        int letterIndex = 0;
        for each (wchar_t c in text) {
            wchar_t uc = Char::ToUpper(c);
            if (uc == 'J') uc = 'I';

            if (uc >= 'A' && uc <= 'Z') {
                if (letterIndex < decryptedLetters->Length) {
                    wchar_t decryptedChar = decryptedLetters[letterIndex];
                    if (Char::IsLower(c)) {
                        result->Append(Char::ToLower(decryptedChar));
                    }
                    else {
                        result->Append(decryptedChar);
                    }
                    letterIndex++;
                }
            }
            else {
                result->Append(c);
            }
        }

        return result->ToString();
    }

    private: void ShowTables(array<Char, 2>^ sq1, array<Char, 2>^ sq2, array<Char, 2>^ sq3, array<Char, 2>^ sq4) {
        System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();

        sb->Append(L"Таблица 1 (верхняя левая):\r\n");
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                sb->Append(sq1[i, j] + " ");
            }
            sb->Append("\r\n");
        }

        sb->Append(L"\r\nТаблица 2 (верхняя правая):\r\n");
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                sb->Append(sq2[i, j] + " ");
            }
            sb->Append("\r\n");
        }

        sb->Append(L"\r\nТаблица 3 (нижняя левая):\r\n");
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                sb->Append(sq3[i, j] + " ");
            }
            sb->Append("\r\n");
        }

        sb->Append(L"\r\nТаблица 4 (нижняя правая):\r\n");
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                sb->Append(sq4[i, j] + " ");
            }
            sb->Append("\r\n");
        }

        MessageBox::Show(sb->ToString(), L"Шифрующие таблицы");
    }

    private: System::Void encryptBtn_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ text = inputTextBox->Text;
        String^ key1 = keyBox1->Text;
        String^ key2 = keyBox2->Text;
        String^ key3 = keyBox3->Text;
        String^ key4 = keyBox4->Text;

        if (String::IsNullOrEmpty(text)) {
            MessageBox::Show(L"Введите текст!", L"Ошибка");
            return;
        }

        // Проверяем, что ключи не пустые после очистки
        if (String::IsNullOrEmpty(CleanKey(key1)) || String::IsNullOrEmpty(CleanKey(key2)) ||
            String::IsNullOrEmpty(CleanKey(key3)) || String::IsNullOrEmpty(CleanKey(key4))) {
            MessageBox::Show(L"Ключи должны содержать хотя бы одну английскую букву!", L"Ошибка");
            return;
        }

        array<Char, 2>^ sq1 = GenerateSquare(key1);
        array<Char, 2>^ sq2 = GenerateSquare(key2);
        array<Char, 2>^ sq3 = GenerateSquare(key3);
        array<Char, 2>^ sq4 = GenerateSquare(key4);

        resultBox->Text = FourSquareEncrypt(text, sq1, sq2, sq3, sq4);

        if (showTableCheckBox->Checked) {
            ShowTables(sq1, sq2, sq3, sq4);
        }
    }

    private: System::Void decryptBtn_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ text = inputTextBox->Text;
        String^ key1 = keyBox1->Text;
        String^ key2 = keyBox2->Text;
        String^ key3 = keyBox3->Text;
        String^ key4 = keyBox4->Text;

        if (String::IsNullOrEmpty(text)) {
            MessageBox::Show(L"Введите текст!", L"Ошибка");
            return;
        }

        // Проверяем, что ключи не пустые после очистки
        if (String::IsNullOrEmpty(CleanKey(key1)) || String::IsNullOrEmpty(CleanKey(key2)) ||
            String::IsNullOrEmpty(CleanKey(key3)) || String::IsNullOrEmpty(CleanKey(key4))) {
            MessageBox::Show(L"Ключи должны содержать хотя бы одну английскую букву!", L"Ошибка");
            return;
        }

        array<Char, 2>^ sq1 = GenerateSquare(key1);
        array<Char, 2>^ sq2 = GenerateSquare(key2);
        array<Char, 2>^ sq3 = GenerateSquare(key3);
        array<Char, 2>^ sq4 = GenerateSquare(key4);

        resultBox->Text = FourSquareDecrypt(text, sq1, sq2, sq3, sq4);

        if (showTableCheckBox->Checked) {
            ShowTables(sq1, sq2, sq3, sq4);
        }
    }

    private: System::Void clearBtn_Click(System::Object^ sender, System::EventArgs^ e) {
        inputTextBox->Text = "";
        keyBox1->Text = "";
        keyBox2->Text = "";
        keyBox3->Text = "";
        keyBox4->Text = "";
        resultBox->Text = "";
    }

    private: System::Void inputDataFromFileBtn_Click(System::Object^ sender, System::EventArgs^ e) {
        if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
            try {
                String^ content = File::ReadAllText(openFileDialog1->FileName, System::Text::Encoding::UTF8);
                array<String^>^ lines = content->Split(gcnew array<wchar_t>{'\r', '\n'}, StringSplitOptions::RemoveEmptyEntries);

                if (lines->Length >= 5) {
                    keyBox1->Text = lines[0]->Trim();
                    keyBox2->Text = lines[1]->Trim();
                    keyBox3->Text = lines[2]->Trim();
                    keyBox4->Text = lines[3]->Trim();

                    String^ text = "";
                    for (int i = 4; i < lines->Length; i++) {
                        if (i > 4) text += "\r\n";
                        text += lines[i];
                    }
                    inputTextBox->Text = text;

                    MessageBox::Show(L"Данные загружены: ключи и текст.", L"Успех");
                }
                else {
                    MessageBox::Show(L"Файл должен содержать минимум 5 строк: 4 ключа + текст.", L"Ошибка");
                }
            }
            catch (Exception^ ex) {
                MessageBox::Show(L"Ошибка чтения файла: " + ex->Message, L"Ошибка");
            }
        }
    }

    private: System::Void outputDataInFileBtn_Click(System::Object^ sender, System::EventArgs^ e) {
        if (String::IsNullOrEmpty(resultBox->Text)) {
            MessageBox::Show(L"Нет результата для сохранения!", L"Предупреждение");
            return;
        }

        if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
            try {
                String^ content = "КЛЮЧ 1: " + keyBox1->Text + "\r\n" +
                    "КЛЮЧ 2: " + keyBox2->Text + "\r\n" +
                    "КЛЮЧ 3: " + keyBox3->Text + "\r\n" +
                    "КЛЮЧ 4: " + keyBox4->Text + "\r\n\r\n" +
                    "ИСХОДНЫЙ ТЕКСТ:\r\n" + inputTextBox->Text + "\r\n\r\n" +
                    "РЕЗУЛЬТАТ:\r\n" + resultBox->Text;

                File::WriteAllText(saveFileDialog1->FileName, content, System::Text::Encoding::UTF8);
                MessageBox::Show(L"Файл успешно сохранен.", L"Успех");
            }
            catch (Exception^ ex) {
                MessageBox::Show(L"Ошибка записи файла: " + ex->Message, L"Ошибка");
            }
        }
    }

    private: System::Void backBtn_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Close();
    }

    private: System::Void showTableCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
        if (showTableCheckBox->Checked) {
            String^ key1 = keyBox1->Text;
            String^ key2 = keyBox2->Text;
            String^ key3 = keyBox3->Text;
            String^ key4 = keyBox4->Text;

            if (String::IsNullOrEmpty(CleanKey(key1)) || String::IsNullOrEmpty(CleanKey(key2)) ||
                String::IsNullOrEmpty(CleanKey(key3)) || String::IsNullOrEmpty(CleanKey(key4))) {
                MessageBox::Show(L"Введите все ключи для показа таблиц.", L"Ошибка");
                showTableCheckBox->Checked = false;
                return;
            }

            array<Char, 2>^ sq1 = GenerateSquare(key1);
            array<Char, 2>^ sq2 = GenerateSquare(key2);
            array<Char, 2>^ sq3 = GenerateSquare(key3);
            array<Char, 2>^ sq4 = GenerateSquare(key4);

            ShowTables(sq1, sq2, sq3, sq4);
        }
    }
    };
}