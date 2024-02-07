#include <iostream>
#include <Windows.h>
#include "symbol.h"
using namespace std;
void symbols(wchar_t* symbol, int n)
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(1251);
    wcout << L"¬ведите символы, использу€ пробел: ";
    for (int i = 0; i < n; i++) {
        wcin >> symbol[i];
    }
}