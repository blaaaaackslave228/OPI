#include <iostream>
#include <Windows.h>
#include "symbol.h"
#include "case1.h"
#include "case2.h"
#include "case3.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	int k = symbol();
	switch (k) {
	case 1: case1(); break;
	case 2: case2(); break;
	case 3: case3(); break;
	}
}
	