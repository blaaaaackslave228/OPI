#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	int a, b;
	cout << "¬ведите число a: ";
	cin >> a;
	cout << "¬ведите число b: ";
	cin >> b;
	int sum = 0;
	sum = a + b;
	cout << sum;
}