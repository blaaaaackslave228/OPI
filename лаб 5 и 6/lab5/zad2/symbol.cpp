#include <iostream>
#include "symbol.h"
#include <Windows.h>
using namespace std;
int symbol()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	int k;
	cout << "��� ����� - 3" << endl << "������� ��������� ���� - 1" << endl << "������� ������� ���� - 2" << endl << "����� �� ��������� - 4" << endl;
	cin >> k;
	return k;
}