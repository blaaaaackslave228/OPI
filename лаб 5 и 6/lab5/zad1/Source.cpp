#include <iostream>
#include <string>
#include "data.h"
#include "result.h"
#include "total1.h"
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    float n = get_data("¬ведите сумму денег, с которой мы пошли в магазин:");
    float a = get_data("¬ведите цену джинс:");
    float q1 = get_data("¬ведите количество пар джинс, которые хотим купить:");
    float b = get_data("¬ведите цену книги:");
    float q2 = get_data("¬ведите количество книг, которое мы хотим купить:");
    float c = get_data("¬ведите цену торта:");
    float q3 = get_data("¬ведите, какое количество тортов мы хотим купить:");
    float total = total1(a, q1, b, q2, c, q3);
    result(n, total);
}