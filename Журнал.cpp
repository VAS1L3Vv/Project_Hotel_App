#include "Form1.h"
#include <Windows.h>
using namespace Курсовая1; // Название проекта
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew NumberValue);
	Курсовая1::Form1 form;
	return 0;
}
