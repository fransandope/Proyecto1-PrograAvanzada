#include "MainForm.h"
#include"FormInicio.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	StackPropio::FormInicio form;
	Application::Run(% form);
	return 0;
}
