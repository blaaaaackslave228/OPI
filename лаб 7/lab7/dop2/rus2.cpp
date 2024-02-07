#include <iostream>
using namespace std;

void rus2(wchar_t* symbol, int i)
{
    if (symbol[i] >= L'А' && symbol[i] <= L'я') {
        wcout << L"UTF-8 код символа " << symbol[i] << ": ";
        if (symbol[i] >= 0x00 && symbol[i] <= 0x7F) {
            wcout << hex << ((symbol[i] & 0x7F) | 0x00);
        }
        else if (symbol[i] >= 0x80 && symbol[i] <= 0x7FF) {
            wcout << hex << ((symbol[i] >> 6) | 0xC0) << ((symbol[i] & 0x3F) | 0x80);
        }
        else if (symbol[i] >= 0x800 && symbol[i] <= 0xFFFF) {
            wcout << hex << ((symbol[i] >> 12) | 0xE0) << ' ' << (((symbol[i] >> 6) & 0x3F) | 0x80) << ' ' << ((symbol[i] & 0x3F) | 0x80);
        }
        else if (symbol[i] >= 0x10000 && symbol[i] <= 0x1FFFF) {
            wcout << hex << ((symbol[i] >> 18) | 0xF0) << ' '
                << (((symbol[i] >> 12) & 0x3F) | 0x80) << ' '
                << (((symbol[i] >> 6) & 0x3F) | 0x80) << ' '
                << ((symbol[i] & 0x3F) | 0x80);
        }
        wcout << endl;
    }
}