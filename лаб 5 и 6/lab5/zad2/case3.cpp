#include <iostream>
#include "case3.h"
#include <Windows.h>
using namespace std;
int case3()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
    int n;
	cout << "������� ���������� ����: ";
	cin >> n;
	char*b= new char[n];
	cout << "������� �����: ";
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < n; i++){
		if ((b[i] >= 48) && (b[i] <= 57)) {
			printf("%X ", b[i]);
		}
		else {
			cout << "������";
		}
	}return 0;
	delete[] b;
}
