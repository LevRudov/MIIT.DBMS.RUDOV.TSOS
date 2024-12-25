#include <locale.h>
#include <windows.h>
#include <iostream>
#include "../List/List.h" 


	int main()
	{
		setlocale(LC_ALL, "Russian");
		SetConsoleCP(CP_UTF8);
		SetConsoleOutputCP(CP_UTF8);
		wordsList::Dictionary list1{ "глаза", "очи","браниться", "ругаться" };
		list1.PushBack("window", "okno");
		std::cout << list1.ToString() << "\n";
		list1.Insert("table", "stol");
		std::cout << list1.ToString() << "\n";
		std::cout << list1.TranslationToRus("window") << "\n";

		return 0;
	}
//}
