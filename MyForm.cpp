#include "MyForm.h"
#include <Windows.h>
#include <string>
#include <math.h>
// Название проекта
using namespace LNGCPP; 

[STAThreadAttribute]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	System::Windows::Forms::Application::EnableVisualStyles();
	System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false);
	//Application::EnableVisualStyles();
	//Application::SetCompatibleTextRenderingDefault(false);
	System::Windows::Forms::Application::Run(gcnew MyForm());
	//Application::Run(gcnew MyForm);
	return 0;
}
