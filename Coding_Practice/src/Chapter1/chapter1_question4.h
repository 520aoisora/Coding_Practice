#ifndef CODING_PRACTICE_CHAPTER1_QUESTION4_H_
#define CODING_PRACTICE_CHAPTER1_QUESTION4_H_

// 1. Preferred location

// 2. C system files

// 3. C++ system files
#include <string>

// 4. Other libraries' .h files

// 5. Your project's .h files
#include "../class_templete.h"

class C1Q4 : public ClassTemplete
{

public:

	void runRegression();

private:

	bool replaceSpace(std::string& str, int realLength);
};

#endif