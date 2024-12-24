#pragma once
#include <initializer_list>
#include <string>
#include "Words.h"
namespace wordsList 
 {
	class Dictionary final
	{
	private:
		Words* head;
		Words* tail;
	public:
		Dictionary();
		Dictionary(std::initializer_list<char> list);
		~Dictionary();
		Dictionary(const Dictionary& other) = delete;
		Dictionary(Dictionary&& other) noexcept = delete;
		Dictionary& operator = (const Dictionary& other) = delete;
		Dictionary& operator = (Dictionary&& other) noexcept = delete;
		void PushBack(const char negl, const char rus);
		bool IsEmpty() const;
		std::string ToString() const;
	};
}