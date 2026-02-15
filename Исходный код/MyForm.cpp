#include "pch.h"
#include "MyForm.h"
#include "MainForm.h"
#include "PrefForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

int main(array<System::String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	LabTi::MyForm form;
	LabTi::MainForm form1;
	LabTi::PrefForm form2;
	Application::Run(% form1);
}