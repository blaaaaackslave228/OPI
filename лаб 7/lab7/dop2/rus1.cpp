#include <iostream>
using namespace std;

void rus1(wchar_t*symbol, int i)
{
    if (symbol[i] >= L'!' && symbol[i] <= L'~') {
        wcout << L"UTF-8 код символа " << symbol[i] << ": ";
        if (symbol[i] >= 0x00 && symbol[i] <= 0x7F) {
            wcout << hex << ((symbol[i] & 0x7F) | 0x00);
        }
        wcout << endl;
    }
}