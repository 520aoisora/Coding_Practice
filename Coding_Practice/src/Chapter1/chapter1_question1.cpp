////////////////////////////////////////////////////////////////////////////////////////////////////
//	Question description: Implement an algorithm to determine if a string has all unique characters.
//						  What if you cannot use additional data structure.
//
//		File description: This file declares class C1Q1 with member function areAllUniqueCharacters
//						  to check if all characters in a string are unique.
//
////////////////////////////////////////////////////////////////////////////////////////////////////

// 1. Preferred location
#include "chapter1_question1.h"

// 2. C system files

// 3. C++ system files
#include <algorithm>
#include <iostream>
#include <stdlib.h>     /* qsort */

// 4. Other libraries' .h files

// 5. Your project's .h files

using namespace std;

QuestionName C1Q1::question_name_ = "C1Q1";

C1Q1 C1Q1::question_instance_(C1Q1::question_name_);

ClassTemplate *C1Q1::CreateSpecificQuestionPointer()
{
	return new C1Q1();
}

void C1Q1::RunRegression()
{
	string str[10];
	str[0] = "";
	str[1] = "abc123";
	str[2] = "aab123";
	str[3] = ",.abc123";
	str[4] = ",abc123,";
	str[5] = ",a c1 3";
	str[6] = "12345678901234567890";
	str[7] = "12345678901234567890";
	str[8] = "12345678901234567890";
	str[9] = "12345678901234567890";

	for (int i = 0; i < 10; i++)
	{
		cout << "All characters in string: " << str[i] << " are ";

		if (!areAllUniqueCharacters(str[i]))
			cout << "not ";

		cout << "unique." << endl;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << "All characters in string: " << str[i] << " are ";

		if (!areAllUniqueCharacters_doubleForLoop(str[i]))
			cout << "not ";

		cout << "unique." << endl;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << "All characters in string: " << str[i] << " are ";

		if (!areAllUniqueCharacters_withQuickSort(str[i]))
			cout << "not ";

		cout << "unique." << endl;
	}

	return;
}

bool C1Q1::areAllUniqueCharacters(const string &iStr)
{
	unsigned int len = iStr.size();
	if(len == 0 || len > 256)
		return false;

	bool characterSet[256] = { false };
	for(unsigned int i = 0; i < len; i++)
	{
		if(characterSet[iStr[i]] == true)
			return false;
		else
			characterSet[iStr[i]] = true;
	}

	return true;
}

bool C1Q1::areAllUniqueCharacters_doubleForLoop(const string &iStr)
{
	unsigned int len = iStr.size();
	if (len == 0 || len > 256)
		return false;

	for (unsigned int left_compare_char_index = 0;
		left_compare_char_index < len - 1;
		left_compare_char_index++)
	{
		for (unsigned int right_compare_char_index = left_compare_char_index + 1;
			right_compare_char_index < len;
			right_compare_char_index++)
		{
			if (iStr[left_compare_char_index] == iStr[right_compare_char_index])
				return false;
		}
	}

	return true;
}

int compare(const void *a, const void *b)
{
	return (*(char*)a - *(char*)b);
}

bool C1Q1::areAllUniqueCharacters_withQuickSort(string iStr)
{
	unsigned int len = iStr.size();
	if (len == 0 || len > 256)
		return false;

	// Using qsort(). Slower than sort()
	//const char *const_char_array = iStr.c_str();
	//char *char_array = const_cast<char *> (const_char_array);

	//qsort(char_array, len, sizeof(char), compare);

	//bool are_all_unique_characters = true;
	//for (unsigned int index = 0; index < len - 1; index++)
	//	if (*(char_array + index) == *(char_array + index + 1))
	//		are_all_unique_characters = false;

	sort(iStr.begin(), iStr.end());

	bool are_all_unique_characters = true;
	for (unsigned int index = 0; index < len - 1; index++)
		if (iStr[index] == iStr[index+1])
			are_all_unique_characters = false;

	if (are_all_unique_characters)
		return true;
	else
		return false;
}