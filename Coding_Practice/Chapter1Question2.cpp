#include <iostream>

#include "Chapter1Question2.h"

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