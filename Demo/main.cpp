#include <locale.h>
#include <windows.h>
#include <iostream>
#include "../Dictionary/Dictionary.h" 

/* #include "Dictionary.h" */
//namespace wordsList 
//{
	int main()
	{
		setlocale(LC_ALL, "Russian");
		SetConsoleCP(CP_UTF8);
		SetConsoleOutputCP(CP_UTF8);
		wordsList::Dictionary list1{ "aple", "yabloko","chair", "stul" };
		list1.PushBack("window", "okno");
		std::cout << list1.ToString() << "\n";
		list1.Insert("table", "stol");
		std::cout << list1.ToString() << "\n";
		std::cout << list1.TranslationToRus("window") << "\n";

		return 0;
	}
//}