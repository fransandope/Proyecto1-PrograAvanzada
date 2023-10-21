#include "MyForm.h"
#include "Procedimientos.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ColorMania::MyForm form;
	Application::Run(% form);
	return 0;
}

