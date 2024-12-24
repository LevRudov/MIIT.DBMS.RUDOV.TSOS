#pragma once
#include <string>
namespace wordsList
{
	struct Words final
	{
		std::string word_slovo;
		std::string word_syn;
		Words* previous;
		Words* next;
		Words(const std::string slovo, const std::string syn);
	};
};

