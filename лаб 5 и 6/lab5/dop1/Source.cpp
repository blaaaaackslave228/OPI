#include <iostream>
#include "function.h"
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    int number;
   cout << "¬ведите число: ";
   cin >> number;
   cout << " вадрат числа: " << square(number) << endl;
    return 0;
}