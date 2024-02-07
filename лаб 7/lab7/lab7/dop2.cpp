#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(1251);
    int n;
    wcout << L"Введите число символов, которые будем вводить с клавиатуры через пробел: ";
    wcin >> n;
    wchar_t* symbol = new wchar_t[n];
    wcout << L"Введите символы: ";
    for (int i = 0; i < n; i++) {
        wcin >> symbol[i];
    }
    for (int i = 0; i < n; i++) {
        if ((symbol[i] >= L'!') && (symbol[i] <= L'~')) {
            wcout << L"UTF-8 код символа " << symbol[i] << ": ";
            if (symbol[i]>=0x00 && symbol[i]<=0x7F) {
                wcout << hex << ((symbol[i] & 0x7F) | 0x00);
            }
            wcout << endl;
        }
        else if ((symbol[i] >= L'А') && (symbol[i] <= L'я')) {
            wcout << L"UTF-8 код символа " << symbol[i] << ": ";
            if (symbol[i] >= 0x00 && symbol[i] <= 0x7F) {
                wcout << hex << ((symbol[i] & 0x7F) | 0x00);
            }
            else if (symbol[i]>=0x80 && symbol[i]<=0x7FF) {
                wcout << hex << ((symbol[i] >> 6) | 0xC0) << ((symbol[i] & 0x3F) | 0x80);
            }
            else if (symbol[i]>=0x800 && symbol[i]<=0xFFFF) {
                wcout << hex << ((symbol[i] >> 12) | 0xE0) << ' ' << (((symbol[i] >> 6) & 0x3F) | 0x80) << ' ' << ((symbol[i] & 0x3F) | 0x80);
            }
            if (symbol[i] >= 0x10000 && symbol[i] <= 0x1FFFF) {
                wcout << hex << ((symbol[i] >> 18) | 0xF0) << ' '
                    << (((symbol[i] >> 12) & 0x3F) | 0x80) << ' '
                    << (((symbol[i] >> 6) & 0x3F) | 0x80) << ' '
                    << ((symbol[i] & 0x3F) | 0x80);
            }
            wcout << endl;
        }
    }
    delete[] symbol;
    return 0;
}
