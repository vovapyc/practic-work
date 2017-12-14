#include "MyForm.h"

using namespace PracrticWork;

[STAThreadAttribute]

int main()
{
	Application::EnableVisualStyles();
	Application::Run(gcnew MyForm);

	return 0;
}
