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

ClassTemplate *C1Q2::CreateSpecificQuestionPointer()
{
	return new C1Q2();
}

void C1Q2::RunRegression()
{
	char str[] = "hello";

	char *str1 = str;

	reverse(str1);

	cout << str1 << endl;

	return;
}

void C1Q2::swap(char *begin, char *end)
{
	char tmp = *begin;
	*begin = *end;
	*end = tmp;
}

void C1Q2::reverse(char *str)
{
	char *begin = str;
	char *end = str;

	while(*end != NULL)
		end++;
	end--;

	for(; begin < end; begin++, end--)
		swap(begin, end);
}

