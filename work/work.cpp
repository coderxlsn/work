// work.cpp: ������� ���� �������.

#include "stdafx.h"
#include "Main.h"
#include "config.h"

using namespace work;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// ��������� ���������� �������� Windows XP �� �������� �����-���� ��������� ����������
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// �������� �������� ���� � ��� ������
	Application::Run(gcnew Main());
	Application::Run(gcnew config());
	return 0;
}
