#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	float n, a, b, c, q1, q2, q3, change;
	cout << "¬ведите сумму денег, с которой мы пошли в магазин: " << endl;
	cin >> n;
	cout << "¬ведите цену джинс: " << endl;
	cin >> a;
	cout << "¬ведите количество пар джинс, которые хотим купить: " << endl;
	cin >> q1;
	cout << "¬ведите цену книги: " << endl;
	cin >> b;
	cout << "¬ведите количество книг, которое мы хотим купить: " << endl;
	cin >> q2;
	cout << "¬ведите цену торта: " << endl;
	cin >> c;
	cout << "¬ведите, какое количество тортов мы хотим купить: " << endl;
	cin >> q3;
	float total = a * q1 + b * q2 + c * q3;
	if (total <= n) {
		change = n - total;
		cout << "¬аша сдача после покупки товаров: " << change << endl;
	}
	else if (total > n) {
		cout << "Ќедостаточно средств!" << endl;
	}
}
