#include "Form1.h"
#include <Windows.h>
using namespace ��������1; // �������� �������
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew NumberValue);
	��������1::Form1 form;
	return 0;
}
