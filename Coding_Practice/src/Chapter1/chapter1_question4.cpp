////////////////////////////////////////////////////////////////////////////////////////////////////
//	Question description: Write a method to replace all spaces in a string with '%20'.
//						  You may assume that the string has sufficient space at the end of the
//						  string to hold the additional characters, and that you are given the
//						  "true" length of the string.
//
//		File description: This file declares class C1Q4 with member function replaceAllSpaces
//						  to replace all spaces in a string with '%20'.
//
////////////////////////////////////////////////////////////////////////////////////////////////////

// 1. Preferred location
#include "chapter1_question4.h"

// 2. C system files

// 3. C++ system files
#include <iostream>

// 4. Other libraries' .h files

// 5. Your project's .h files

using namespace std;

QuestionName C1Q4::question_name_ = "C1Q4";

C1Q4 C1Q4::question_instance_(C1Q4::question_name_);

ClassTemplate *C1Q4::CreateSpecificQuestionPointer()
{
	return new C1Q4();
}

bool C1Q4::replaceAllSpaces(string &ioStr, const int &iRealStringLength)
{
	if (iRealStringLength <= 0)
		return false;

	int space_counter = 0;
	for (int index = 0; index < iRealStringLength; index++)
		if (ioStr[index] == ' ')
			space_counter++;

	if (space_counter == 0)
		return true;

	int new_string_length = iRealStringLength + 2 * space_counter;
	int index_of_writing = new_string_length - 1;

	for (int index = iRealStringLength - 1; index >= 0; index--)
	{
		if (ioStr[index] != ' ')
			ioStr[index_of_writing--] = ioStr[index];
		else
		{
			ioStr[index_of_writing--] = '0';
			ioStr[index_of_writing--] = '2';
			ioStr[index_of_writing--] = '%';
		}
	}

	return true;
}

void C1Q4::RunRegression()
{
	string str[3];
	str[0] = "abcdefgh";
	str[1] = " bcdefgh  ";
	str[2] = "ab defgh  ";

	int realLength[3];
	realLength[0] = 8;
	realLength[1] = 8;
	realLength[2] = 8;

	string resultStr[3];
	resultStr[0] = "abcdefgh";
	resultStr[1] = "%20bcdefgh";
	resultStr[2] = "ab%20defgh";


	for(int i = 0; i < 3; i++)
	{
		cout << "Test " << i << ": ";
		if (replaceAllSpaces(str[i], realLength[i]) && (str[i].compare(resultStr[i]) == 0))
			cout << "OK";
		else
			cout << "Fail";

		cout << "." << endl;
	}

	return;
}