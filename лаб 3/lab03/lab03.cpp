#include <iostream>
//MamonkoDenis2006
// представление строки в Windows-1251: 004D 0061 006D 006F 006E 006B 006F 0044 0065 006E 0069 0073 0032 0030 0030 0036
// в UTF-8: 4D 61 6D 6F 6E 6B 6F 44 65 6E 69 73 32 30 30 36
// в UTF-16: 004D 0061 006D 006F 006E 006B 006F 0044 0065 006E 0069 0073 0032 0030 0030 0036

// МамонькоДенисАлександрович2006
// представление строки в Windows-1251: 00CC 00E0 00EC 00EE 00ED 00FC 00EA 00EE 00C4 00E5 00ED 00E8 00F1 00C0 00EB 00E5 00EA 00F1 00E0 00ED 00E4 00F0 00EE 00E2 00E8 00F7 0032 0030 0030 0036
// в UTF-8: CC E0 EC EE ED FC EA EE C4 E5 ED E8 F1 C0 EB E5 EA F1 E0 ED E4 F0 EE E2 E8 F7 32 30 30 36
// в UTF-16: 00CC 00E0 00EC 00EE 00ED 00FC 00EA 00EE 00C4 00E5 00ED 00E8 00F1 00C0 00EB 00E5 00EA 00F1 00E0 00ED 00E4 00F0 00EE 00E2 00E8 00F7 0032 0030 0030 0036

// Мамонько2006Denis
// представление строки в Windows-1251: 00CC 00E0 00EC 00EE 00ED 00FC 00EA 00EE 0032 0030 0030 0036 0044 0065 006E 0069 0073 
// в UTF-8: CC E0 EC EE ED FC EA EE 32 30 30 36 44 65 6E 69 73 
// в UTF-16: 00CC 00E0 00EC 00EE 00ED 00FC 00EA 00EE 0032 0030 0030 0036 0044 0065 006E 0069 0073 

int main()
{
	int number = 0x12345678;
	char hello[] = "Hello, ";
	char lfie[] = "MamonkoDenis2006";
	char rfie[] = "МамонькоДенисАлександрович2006";
	char lr[] = "Мамонько2006Denis";

	wchar_t Lfie[] = L"MamonkoDenis2006";
	wchar_t Rfie[] = L"МамонькоДенисАлександрович2006";
	wchar_t LR[] = L"Мамонько2006Denis";

	std::cout << hello << Lfie << std::endl;
	return 0;
}