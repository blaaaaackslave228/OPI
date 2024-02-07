#include <iostream>
#include "result.h"
using namespace std;
void result(float n, float total)
{   if (total <= n) {
        float change = n - total;
        cout << "Ваша сдача после покупки товаров: " << change << endl;
    }
    else {
        cout << "Недостаточно средств!" << endl;
    }
}