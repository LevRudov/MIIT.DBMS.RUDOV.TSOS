#include "pch.h"
#include "CppUnitTest.h"
#include "../Dictionary/Dictionary.h"  

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace wordsList 
{
	namespace DictionaryLinkedListTest
	{
		TEST_CLASS(DictionaryLinkedListTest)
		{
		public:

			TEST_METHOD(ToString_Valid_Success)
			{
				//arrange
				list list1{ "глаза","очи","браниться","ругаться" };

				std::string expected{ "глаза=очи; браниться=ругаться;" };

				//act
				auto actual = list1.ToString();

				//assert
				Assert::AreEqual(expected, actual);
			}
		};
	}
}
 