#include "List.h"
#include <sstream>
#include <vector>
#include <string>
namespace wordsList
	
{
	using namespace std;
	list::list() : head{ nullptr }, tail{ nullptr }
	{
	}

    list::list(initializer_list<string> list1)
	{
		auto paragraph = list1.begin();
		while (paragraph != list1.end())
		{
			this->PushBack(*paragraph, *(paragraph + 1));
			paragraph = paragraph + 2;
		}
	}

	list::~list()
	{
		auto temporary = this->head;
		while (temporary != nullptr)
		{
			auto temp = temporary;
			temporary = temporary->next;
			delete temp;
		}
	}

	void list::PushBack(string slovo, string syn)
	{
		auto words = new Words{ slovo, syn };
		if (this->IsEmpty())
		{
			this->head = words;
			this->tail = words;
		}
		else
		{
			this->tail->next = words;
			words->previous = this->tail;
			this->tail = words;
		}
	}

	void list::Insert(const string slovo, const string syn)
	{
		auto environment = new Words{ slovo, syn };
		if (this->IsEmpty())
		{
			this->head = environment;
			this->tail = environment;
		}
		else
		{
			auto actual = this->head;
			auto environment = new Words{ slovo, syn };

			while (actual != nullptr)
			{
				if (syn < actual->word_slovo)
				{
						auto environment = new Words{ slovo, syn };
						if (actual->previous == nullptr)
						{
							environment->next = this->head;
							this->head = environment;
						}
						else
						{
							environment->next = actual;
							environment->previous= actual->previous->next;
							actual->previous->next = environment;
							actual->previous = environment;
						}
						break;
				}
				actual = actual->next;
			}
			if (actual == nullptr)
			{
				this->tail->next = environment;
				environment->previous = this->tail;
				this->tail = environment;
			}
		}
	}

	bool list::IsEmpty() const
	{
		return this->head == nullptr;
	}

	string list::ToString() const
	{
		stringstream buffer{};
		auto current = this->head;
		while (current != nullptr)
		{
			buffer << current->word_slovo << "=" << current->word_syn << ";";
			current = current->next;
		}

		return buffer.str();
	}
    string list::slovosyn(const string slovo)
	{
		auto actual = this->head;

		while (actual != nullptr)
		{
			if (slovo == actual->word_slovo)
			{
				return actual->word_syn;
				break;
			}
			actual = actual->next;
		}
	}
}
