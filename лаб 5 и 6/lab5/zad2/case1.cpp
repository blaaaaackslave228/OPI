#include <iostream>
#include "case1.h"
#include <Windows.h>
using namespace std;
int case1()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	int n;
	cout << "������� ���������� ����: ";
	cin >> n;
	char* lower = new char[n];
	char* upper = new char[n];
	cout << "������� ��������� ����� �������� ��������: ";
	for (int i = 0; i < n; i++) {
		cin >> upper[i];
	}
	cout << "������� ��������� ����� ������� ��������: ";
	for (int i = 0; i < n; i++) {
		cin >> lower[i];
	}
	for (int i = 0; i < n; i++) {
		if ((upper[i] >= 'A') && (upper[i] <= 'Z') || (lower[i] >= 'a') && (lower[i] <= 'z')) {
			cout << abs(int(upper[i] - lower[i]))<< endl;
		}
		else {
			cout << "������";
		}
	}return 0;
	delete[] upper, lower;
}

