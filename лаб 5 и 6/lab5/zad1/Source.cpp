#include <iostream>
#include <string>
#include "data.h"
#include "result.h"
#include "total1.h"
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    float n = get_data("������� ����� �����, � ������� �� ����� � �������:");
    float a = get_data("������� ���� �����:");
    float q1 = get_data("������� ���������� ��� �����, ������� ����� ������:");
    float b = get_data("������� ���� �����:");
    float q2 = get_data("������� ���������� ����, ������� �� ����� ������:");
    float c = get_data("������� ���� �����:");
    float q3 = get_data("�������, ����� ���������� ������ �� ����� ������:");
    float total = total1(a, q1, b, q2, c, q3);
    result(n, total);
}