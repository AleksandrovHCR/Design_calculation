#include "Main.h"
#include <Windows.h>
#include <process.h>
#include <string.h>

using namespace  урсова€работа;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm);
    return 0;
}