////////////////////////////////////////////////////////////////////////////////////////////////////
//	Question description: Implement a function void reverse(char* str) in C++ which reverses a
//						  null-terminated string.
//
//		File description: This file declares class C1Q2 with member function reverse(char *str)
//						  to reverse a null-terminated string.
//
////////////////////////////////////////////////////////////////////////////////////////////////////

// 1. Preferred location
#include "chapter1_question2.h"

// 2. C system files

// 3. C++ system files
#include <iostream>

// 4. Other libraries' .h files

// 5. Your project's .h files

using namespace std;

QuestionName C1Q2::question_name_ = "C1Q2";

C1Q2 C1Q2::question_instance_(C1Q2::question_name_);

ClassTemplate *C1Q2::CreateSpecificQuestionPointer() const
{
	return new C1Q2();
}

void C1Q2::RunRegression() const
{
	char str[] = "hello";

	reverseCharStarString(str);

	cout << str << endl;

	return;
}

void C1Q2::swapTwoCharacters(char *ioLeftChar, char *ioRightChar) const
{
	char temp_char = *ioLeftChar;
	*ioLeftChar = *ioRightChar;
	*ioRightChar = temp_char;
}

void C1Q2::reverseCharStarString(char *ioStr) const
{
	char *begin = ioStr;
	char *end = ioStr;

	while(*end != NULL)
		end++;
	end--;

	for(; begin < end; begin++, end--)
		swapTwoCharacters(begin, end);
}

