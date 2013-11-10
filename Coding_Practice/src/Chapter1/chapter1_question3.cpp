// 1. Preferred location
#include "chapter1_question3.h"

// 2. C system files

// 3. C++ system files
#include <algorithm>
#include <iostream>

// 4. Other libraries' .h files

// 5. Your project's .h files

using namespace std;

QuestionName C1Q3::question_name_ = "C1Q3";

C1Q3 C1Q3::question_instance_(C1Q3::question_name_);

ClassTemplate *C1Q3::CreateSpecificQuestionPointer()
{
	return new C1Q3();
}

bool C1Q3::isPermutation(const string &iStr1, const string &iStr2)
{
	int str_length1 = iStr1.length();
	int str_length2 = iStr2.length();

	if (str_length1 != str_length2)
		return false;

	int counter1[256], counter2[256];

	for (int i = 0; i < str_length1; i++)
	{
		counter1[iStr1[i]]++;
		counter2[iStr2[i]]++;
	}

	for(int i = 0; i < 256; i++)
		if(counter1[i] != counter2[i])
			return false;

	return true;
}
	
bool C1Q3::isPermutation_withQuickSort(string iStr1, string iStr2)
{
	int str_length1 = iStr1.length();
	int str_length2 = iStr2.length();
	
	if (str_length1 != str_length2)
		return false;

	sort(iStr1.begin(), iStr1.end());
	sort(iStr2.begin(), iStr2.end());

	for (int i = 0; i < str_length1; i++)
		if (iStr1[i] != iStr2[i])
			return false;

	return true;
}

void C1Q3::RunRegression()
{
	string str1[3];
	str1[0] = "abcdefgh";
	str1[1] = "abcdefgh";
	str1[2] = "abcdefgh";

	string str2[3];
	str2[0] = "hgfedcba";
	str2[1] = "hgfedcb";
	str2[2] = "hgfedcbb";

	for (int i = 0; i < 3; i++)
	{
		cout << "str1: " << str1[i] << " is ";

		if (!isPermutation(str1[i], str2[i]))
			cout << "not ";

		cout << "the permutation of str2: " << str2[i] << endl;
	}

	for(int i = 0; i < 3; i++)
	{
		cout << "str1: " << str1[i] << " is ";

		if (!isPermutation_withQuickSort(str1[i], str2[i]))
			cout << "not ";

		cout << "the permutation of str2: " << str2[i] << endl;
	}

	return;
}