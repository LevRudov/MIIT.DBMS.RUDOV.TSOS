#include <locale.h>
#include <windows.h>
#include <iostream>
#include "../List/List.h" 


	int main()
	{
		setlocale(LC_ALL, "Russian");
		SetConsoleCP(CP_UTF8);
		SetConsoleOutputCP(CP_UTF8);
		wordsList::List list1{ "глаза", "очи","браниться", "ругаться" };
		list1.PushBack("глаза", "очи");
		std::cout << list1.ToString() << "\n";
		list1.Insert("браниться", "ругаться");
		std::cout << list1.ToString() << "\n";
		std::cout << list1.slovosyn("очи") << "\n";
		return 0;
	}
//}
