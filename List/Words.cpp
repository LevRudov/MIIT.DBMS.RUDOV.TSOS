#include "Words.h"
namespace wordsList
{
	Words::Words(const std::string slovo, const std::string syn) : word_slovo{slovo}, word_syn{ syn },previous{nullptr},next{nullptr}
	{
	}
}