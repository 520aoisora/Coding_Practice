#ifndef CODING_PRACTICE_CHAPTER1_QUESTION7_H_
#define CODING_PRACTICE_CHAPTER1_QUESTION7_H_

// 1. Preferred location

// 2. C system files

// 3. C++ system files

// 4. Other libraries' .h files

// 5. Your project's .h files
#include "../ClassTemplete.h"

class C1Q7 : ClassTemplete
{

public:

	void runRegression();

private:

	bool areEqualArray3(int matrix1[3][3], int matrix2[3][3]);

	void repaintArray(int matrix[3][3]);
};

#endif