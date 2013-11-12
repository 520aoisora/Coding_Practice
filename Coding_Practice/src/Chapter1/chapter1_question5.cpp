////////////////////////////////////////////////////////////////////////////////////////////////////
//	Question description: Implement a method to perform basic string compression using the counts of
//						  repeated characters. For example, the string aabcccccaaa would become
//						  a2b1c5a3. If the "compressed" string would not become smaller than the
//						  original string, your method should return the original string.
//
//		File description: This file declares class C1Q5 with member function compressString
//						  to compress a string and return the shorter one between the original string
//						  and new compressed string.
//
////////////////////////////////////////////////////////////////////////////////////////////////////

// 1. Preferred location
#include "chapter1_question5.h"

// 2. C system files

// 3. C++ system files
#include <iostream>
#include <sstream>

// 4. Other libraries' .h files

// 5. Your project's .h files

using namespace std;

QuestionName C1Q5::question_name_ = "C1Q5";

C1Q5 C1Q5::question_instance_(C1Q5::question_name_);

ClassTemplate *C1Q5::CreateSpecificQuestionPointer()
{
	return new C1Q5();
}

void C1Q5::appendCharToStringEnd(std::string& ioStr, const char &lastChar, const int &charCount)
{
	stringstream ss_last_char;
	ss_last_char << lastChar;
	ioStr.append(ss_last_char.str());

	stringstream ss_char_count;
	ss_char_count << charCount;
	ioStr.append(ss_char_count.str());
}

bool C1Q5::compressString(string& ioStr)
{
	unsigned int str_length = ioStr.size();
	if (str_length == 0)
		return false;

	char last_char = ioStr[0];
	int char_count = 0;
	string new_str = "";

	for (unsigned int i = 0; i < str_length; i++)
	{
		if (ioStr[i] != last_char)
		{
			appendCharToStringEnd(new_str, last_char, char_count);
			last_char = ioStr[i];
			char_count = 1;
		}
		else
			char_count++;
	}

	appendCharToStringEnd(new_str, last_char, char_count);

	if (new_str.size() < str_length)
		ioStr = new_str;

	return true;
}

void C1Q5::RunRegression()
{
	string str[3];
	str[0] = "abcdefgh";
	str[1] = "aabbccdd";
	str[2] = "aaaabbbb";

	string resultStr[3];
	resultStr[0] = "abcdefgh";
	resultStr[1] = "aabbccdd";
	resultStr[2] = "a4b4";


	for(int i = 0; i < 3; i++)
	{
		cout << "Test " << i << ": ";
		if(compressString(str[i]) && (str[i].compare(resultStr[i]) == 0))
			cout << "OK";
		else
			cout << "Fail";

		cout << "." << endl;
	}

	return;
}