#ifndef _CHAPTER1_QUESTION4_H_
#define _CHAPTER1_QUESTION4_H_

#include "ClassTemplete.h"
#include <string>

class C1Q4 : public ClassTemplete
{

public:

	void runRegression();

private:

	bool replaceSpace(std::string& str, int realLength);
};

#endif