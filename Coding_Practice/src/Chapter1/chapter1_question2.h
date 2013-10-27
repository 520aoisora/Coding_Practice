#ifndef CODING_PRACTICE_CHAPTER1_QUESTION2_H_
#define CODING_PRACTICE_CHAPTER1_QUESTION2_H_

// 1. Preferred location

// 2. C system files

// 3. C++ system files

// 4. Other libraries' .h files

// 5. Your project's .h files
#include "../class_templete.h"

class C1Q2 : public ClassTemplete
{

public:

	void runRegression();

private:

	void swap(char *begin, char *end);

	void reverse(char *str);
};

#endif