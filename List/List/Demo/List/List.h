#pragma once
#include <initializer_list>

#include "Words.h"
namespace wordsList 
 {
	using namespace std;
	class list final
	{
	private:
		Words* head;
		Words* tail;
	public:
		list();
		list(std::initializer_list<string> list1);
		~list();
		list(const list& other) = delete;
		list(list&& other) noexcept = delete;
		list& operator = (const list& other) = delete;
		list& operator = (list&& other) noexcept = delete;
		void PushBack(const string slovo, const string syn);
		void Insert(const std::string slovo, const string syn);
		bool IsEmpty() const;
		std::string ToString() const;
		std::string slovosyn(const string slovo);
	};
}