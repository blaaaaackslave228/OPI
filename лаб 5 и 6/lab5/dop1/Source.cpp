#include <iostream>
#include "function.h"
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    int number;
   cout << "������� �����: ";
   cin >> number;
   cout << "������� �����: " << square(number) << endl;
    return 0;
}