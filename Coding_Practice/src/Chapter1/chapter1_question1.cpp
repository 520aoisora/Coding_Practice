////////////////////////////////////////////////////////////////////////////////////////////////////
//	Question description: Implement an algorithm to determine if a string has all unique characters.
//						  What if you cannot use additional data structure.
//
//		File description: This file declares class C1Q1 with member function areAllUniqueCharacters
//						  to check if all characters in a string are unique.
//
//			  Change log: Person		Date		Comment
//						  Yi Ji			27/10/2013	Initial version. Only best solution is available.
//
////////////////////////////////////////////////////////////////////////////////////////////////////

// 1. Preferred location
#include "chapter1_question1.h"

// 2. C system files

// 3. C++ system files
#include <iostream>

// 4. Other libraries' .h files

// 5. Your project's .h files

using namespace std;

bool C1Q1::areAllUniqueCharacters(const string &iStr)
{
	int len = iStr.size();
	if(len == 0)
		return false;

	int characterSet[300];
	for(int i = 0; i < len; i++)
	{
		if(characterSet[(int)iStr[i]] == 1)
		{
			return false;
		}
		else
		{
			characterSet[(int)iStr[i]] = 1;
		}
	}

	return true;
}

void C1Q1::runRegression()
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

	for(int i = 0; i < 10; i++)
	{
		cout << "All characters in string: " << str[i] << "are ";

		if(!areAllUniqueCharacters(str[i]))
			cout << "not ";

		cout << "unique." << endl;
	}
	
	return;
}