#ifndef CODING_PRACTICE_CHAPTER1_QUESTION6_H_
#define CODING_PRACTICE_CHAPTER1_QUESTION6_H_

// 1. Preferred location

// 2. C system files

// 3. C++ system files

// 4. Other libraries' .h files

// 5. Your project's .h files
#include "../class_template.h"

class C1Q6 : public ClassTemplate
{

public:

	void runRegression();

private:

	bool areEqualArray2(int matrix1[2][2], int matrix2[2][2]);

	void rotate2(int matrix[2][2], int N);
};

#endif