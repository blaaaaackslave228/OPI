#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	float n, a, b, c, q1, q2, q3, change;
	cout << "������� ����� �����, � ������� �� ����� � �������: " << endl;
	cin >> n;
	cout << "������� ���� �����: " << endl;
	cin >> a;
	cout << "������� ���������� ��� �����, ������� ����� ������: " << endl;
	cin >> q1;
	cout << "������� ���� �����: " << endl;
	cin >> b;
	cout << "������� ���������� ����, ������� �� ����� ������: " << endl;
	cin >> q2;
	cout << "������� ���� �����: " << endl;
	cin >> c;
	cout << "�������, ����� ���������� ������ �� ����� ������: " << endl;
	cin >> q3;
	float total = a * q1 + b * q2 + c * q3;
	if (total <= n) {
		change = n - total;
		cout << "���� ����� ����� ������� �������: " << change << endl;
	}
	else if (total > n) {
		cout << "������������ �������!" << endl;
	}
}
