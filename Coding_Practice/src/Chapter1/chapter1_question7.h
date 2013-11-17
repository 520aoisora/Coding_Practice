////////////////////////////////////////////////////////////////////////////////////////////////////
//	Question description: Write an algorithm such that if an element in an MxN matrix is 0,
//						  its entire row and column are set to 0.
//
//		File description: This file declares class C1Q7 with member function setZeros to set whole
//						  row and column zero where there is a zero in a 6 x 7 matrix.
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef CODING_PRACTICE_CHAPTER1_QUESTION7_H_
#define CODING_PRACTICE_CHAPTER1_QUESTION7_H_

// 1. Preferred location

// 2. C system files

// 3. C++ system files

// 4. Other libraries' .h files

// 5. Your project's .h files
#include "../class_template.h"

class C1Q7 : ClassTemplate
{

public:

	C1Q7() : ClassTemplate() {};

	C1Q7(QuestionName iQuestionName) : ClassTemplate(iQuestionName) {};

	void RunRegression();

protected:

	ClassTemplate *CreateSpecificQuestionPointer();

private:

	static QuestionName question_name_;

	static C1Q7 question_instance_;

private:

	bool areTwoMatricesIdentical(const int matrix1[6][7], const int matrix2[6][7]) const;

	/*
		@ Description:
		Set whole row and column zero where there is a zero in a 6 x 7 matrix.

		@ Algorithm:
		By using two 1D arrays to store which rows and columns to be set to zero to save memory.

		Time efficiency: O(MxN)
		Space efficiency: O(1)

		@ Input:
		ioMatrix: Input integer matrix, size 6 x 7.

		@ Output:
		ioMatrix: A 6 x 7 integer matrix whose rows and columns are set to zero
				  based on the requirement.

		@ Usage:
		int original_6x7_matrix[6][7] = { { 1, 1, 1, 1, 1, 1, 1 },
											{ 1, 1, 1, 1, 1, 1, 1 },
											{ 1, 0, 1, 1, 1, 1, 1 },
											{ 1, 1, 1, 1, 1, 1, 1 },
											{ 1, 1, 1, 1, 1, 0, 1 },
											{ 1, 1, 1, 1, 1, 1, 1 } };
		setZeros(original_6x7_matrix);
	*/
	void setZeros(int ioMatrix[6][7]) const;
};

#endif