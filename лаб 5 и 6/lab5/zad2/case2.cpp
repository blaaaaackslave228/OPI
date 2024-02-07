#include <iostream>
#include "case2.h"
#include <Windows.h>
using namespace std;
int case2()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	int n;
	cout << "Введите количество букв: ";
	cin >> n;
	char* lower1 = new char[n];
	char* upper1 = new char[n];
	cout << "Введите русскую букву верхнего регистра: ";
	for (int i = 0; i < n; i++) {
		cin >> upper1[i];
	}
	cout << "Введите русскую букву нижнего регистра: ";
	for (int i = 0; i < n; i++) {
		cin >> lower1[i];
	}
	for (int i = 0; i < n; i++){
		if ((upper1[i] >= 'А') && (upper1[i] <= 'Я') || (lower1[i] >= 'а') && (lower1[i] <= 'я')) {
			cout << hex << abs(int(upper1[i] - lower1[i])) << endl;
		}
		else {
			cout << "Ошибка";
		}
	}return 0;
	delete[] upper1, lower1;
}
