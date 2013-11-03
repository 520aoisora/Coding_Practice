#ifndef CODING_PRACTICE_CHAPTER1_QUESTION3_H_
#define CODING_PRACTICE_CHAPTER1_QUESTION3_H_

// 1. Preferred location

// 2. C system files

// 3. C++ system files
#include <string>

// 4. Other libraries' .h files

// 5. Your project's .h files
#include "../class_template.h"

class C1Q3 : public ClassTemplate
{

public:

	void runRegression();

private:

	bool isPermutation(std::string str1, std::string str2);

	bool isPermutation_Sort(std::string str1, std::string str2);
};

#endif