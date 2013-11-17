////////////////////////////////////////////////////////////////////////////////////////////////////
//	Question description: Given an image represented by an NxN matrix, where each pixel in the image
//						  is 4 bytes, write a method to rotate the image by 90 degrees. Do it in place.
//
//		File description: This file declares class C1Q6 with member function rotate5x5Matrix to rotate
//						  a 5 x 5 integer matrix by 90 degrees in place.
//
////////////////////////////////////////////////////////////////////////////////////////////////////

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

	C1Q6() : ClassTemplate() {};

	C1Q6(QuestionName iQuestionName) : ClassTemplate(iQuestionName) {};

	void RunRegression();

protected:

	ClassTemplate *CreateSpecificQuestionPointer();

private:

	static QuestionName question_name_;

	static C1Q6 question_instance_;

private:

	bool areTwo5x5ArrayEqual(int matrix1[5][5], int matrix2[5][5]);

	/*
		@ Description:
		Rotate an integer 5x5 matrix by 90 degrees.

		@ Algorithm:
		By using a temporary value to rotate the whole matrix in place.

		Time efficiency: O(NxN)
		Space efficiency: O(1)

		@ Input:
		ioMatrix: Input integer matrix, size 5 x 5.
			   N: Size of the matrix. N = 5 all the time in this case.

		@ Output:
		ioMatrix: A 5 x 5 integer matrix rotated by 90 degrees.

		@ Usage:
		int original_5x5_martix[5][5] = {{ 1, 2, 3, 4, 5 },
										{ 6, 7, 8, 9, 10 },
										{ 11, 12, 13, 14, 15 },
										{ 16, 17, 18, 19, 20 },
										{ 21, 22, 23, 24, 25 }};
		rotate5x5Matrix(original_5x5_martix, 5);
	*/
	void rotate5x5Matrix(int ioMatrix[5][5], int N);
};

#endif