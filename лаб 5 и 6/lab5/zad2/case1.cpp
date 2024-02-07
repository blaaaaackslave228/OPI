#include <iostream>
#include "case1.h"
#include <Windows.h>
using namespace std;
int case1()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	int n;
	cout << "¬ведите количество букв: ";
	cin >> n;
	char* lower = new char[n];
	char* upper = new char[n];
	cout << "¬ведите латинскую букву верхнего регистра: ";
	for (int i = 0; i < n; i++) {
		cin >> upper[i];
	}
	cout << "¬ведите латинскую букву нижнего регистра: ";
	for (int i = 0; i < n; i++) {
		cin >> lower[i];
	}
	for (int i = 0; i < n; i++) {
		if ((upper[i] >= 'A') && (upper[i] <= 'Z') || (lower[i] >= 'a') && (lower[i] <= 'z')) {
			cout << abs(int(upper[i] - lower[i]))<< endl;
		}
		else {
			cout << "ќшибка";
		}
	}return 0;
	delete[] upper, lower;
}

