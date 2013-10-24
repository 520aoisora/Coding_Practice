#ifndef _CHAPTER1_QUESTION1_H_
#define _CHAPTER1_QUESTION1_H_

#include "ClassTemplete.h"
#include <string>

class C1Q1 : public ClassTemplete
{

public:
		
	void runRegression();

private:

	bool areAllUniqueCharacters(std::string iStr);
};

#endif