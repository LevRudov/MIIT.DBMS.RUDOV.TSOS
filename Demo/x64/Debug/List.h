#pragma once
#include <initializer_list>
#include <string>
#include "Words.h"
namespace wordsList 
 {
	class List final
	{
	private:
		Words* head;
		Words* tail;
	public:
		List();
		List(std::initializer_list<char> list);
		~List();
		List(const List& other) = delete;
		List(List&& other) noexcept = delete;
		List& operator = (const List& other) = delete;
		List& operator = (List&& other) noexcept = delete;
		void PushBack(const char negl, const char rus);
		bool IsEmpty() const;
		std::string ToString() const;
	};
}
