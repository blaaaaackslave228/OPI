#include <iostream>
#include "case2.h"
#include <Windows.h>
using namespace std;
int case2()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	int n;
	cout << "������� ���������� ����: ";
	cin >> n;
	char* lower1 = new char[n];
	char* upper1 = new char[n];
	cout << "������� ������� ����� �������� ��������: ";
	for (int i = 0; i < n; i++) {
		cin >> upper1[i];
	}
	cout << "������� ������� ����� ������� ��������: ";
	for (int i = 0; i < n; i++) {
		cin >> lower1[i];
	}
	for (int i = 0; i < n; i++){
		if ((upper1[i] >= '�') && (upper1[i] <= '�') || (lower1[i] >= '�') && (lower1[i] <= '�')) {
			cout << hex << abs(int(upper1[i] - lower1[i])) << endl;
		}
		else {
			cout << "������";
		}
	}return 0;
	delete[] upper1, lower1;
}
