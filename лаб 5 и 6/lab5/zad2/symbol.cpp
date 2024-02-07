#include <iostream>
#include "symbol.h"
#include <Windows.h>
using namespace std;
int symbol()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	int k;
	cout << "Код цифры - 3" << endl << "Разница латинских букв - 1" << endl << "Разница русских букв - 2" << endl << "Выход из программы - 4" << endl;
	cin >> k;
	return k;
}