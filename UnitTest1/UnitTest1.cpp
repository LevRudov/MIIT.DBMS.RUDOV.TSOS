#include "pch.h"
#include "CppUnitTest.h"
#include "../List/List.h"  

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace wordsList 
{
	namespace ListLinkedListTest
	{
		TEST_CLASS(ListLinkedListTest)
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
 
