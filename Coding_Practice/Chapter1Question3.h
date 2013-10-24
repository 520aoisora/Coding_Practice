#ifndef _CHAPTER1_QUESTION3_H_
#define _CHAPTER1_QUESTION3_H_

#include "ClassTemplete.h"
#include <string>

class C1Q3 : public ClassTemplete
{

public:

	void run();

private:

	bool isPermutation(std::string str1, std::string str2);

	bool isPermutation_Sort(std::string str1, std::string str2);
};

#endif