#ifndef CODING_PRACTICE_CHAPTER1_QUESTION1_H_
#define CODING_PRACTICE_CHAPTER1_QUESTION1_H_

// 1. Preferred location

// 2. C system files

// 3. C++ system files
#include <string>

// 4. Other libraries' .h files

// 5. Your project's .h files
#include "../ClassTemplete.h"

class C1Q1 : public ClassTemplete
{

public:
		
	void runRegression();

private:

	bool areAllUniqueCharacters(std::string iStr);
};

#endif