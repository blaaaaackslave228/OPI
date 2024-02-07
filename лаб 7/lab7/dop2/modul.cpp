#include <iostream>
#include <Windows.h>
#include "symbol.h"
#include "rus1.h"
#include "rus2.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(1251);
    int n;
    wcout << L"¬ведите число символов, которые будем вводить с клавиатуры через пробел: ";
    wcin >> n;
    wchar_t* symbol = new wchar_t[n];
    symbols(symbol, n);
    for (int i = 0; i < n; i++) {
        rus1(symbol, i);
        rus2(symbol, i);
    }
    delete[] symbol;
    return 0;
}