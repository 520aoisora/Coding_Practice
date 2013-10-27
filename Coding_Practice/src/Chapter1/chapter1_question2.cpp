// 1. Preferred location
#include "chapter1_question2.h"

// 2. C system files

// 3. C++ system files
#include <iostream>

// 4. Other libraries' .h files

// 5. Your project's .h files

using namespace std;

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

void C1Q2::runRegression()
{
	char str[] = "hello";

	char *str1 = str;

	reverse(str1);

	cout << str1 << endl;

	return;
}