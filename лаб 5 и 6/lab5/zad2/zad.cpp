#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	int k;
	cout << "��� ����� - 3" << endl << "������� ��������� ���� - 1" << endl << "������� ������� ���� - 2" << endl;
	cin >> k;
	switch (k)
	{
	case 1: {
		char upper, lower;
		cout << "������� ����� �������� ��������: ";
		cin >> upper;
		cout << "������� ����� ������� ��������: ";
		cin >> lower;
		if ((upper >= 'A') && (upper <= 'Z') || (lower >= 'a') && (lower <= 'z')) {
			cout << abs(int(upper) - int(lower));
		}
		else {
			cout << "������";
		}
		break;
	}
	case 2: {
		char upper1, lower1;
		cout << "������� ����� �������� ��������: ";
		cin >> upper1;
		cout << "������� ����� ������� ��������: ";
		cin >> lower1;
		if ((upper1 >= '�') && (upper1 <= '�') || (lower1 >= '�') && (lower1 <= '�')) {
			cout << hex << abs(int(upper1) - int(lower1));
		}
		else {
			cout << "������";
		}
		break;
	}
	case 3: {
		char b;
		cout << "������� �����: ";
		cin >> b;
		if ((b >= '0') && (b <= '9')) {
			printf("%x", b);
		}
		else {
			cout << "������";
		}
		break;
	}
	}
}