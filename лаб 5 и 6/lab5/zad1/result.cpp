#include <iostream>
#include "result.h"
using namespace std;
void result(float n, float total)
{   if (total <= n) {
        float change = n - total;
        cout << "���� ����� ����� ������� �������: " << change << endl;
    }
    else {
        cout << "������������ �������!" << endl;
    }
}