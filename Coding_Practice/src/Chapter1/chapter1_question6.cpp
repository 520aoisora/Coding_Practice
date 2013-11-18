////////////////////////////////////////////////////////////////////////////////////////////////////
//	Question description: Given an image represented by an NxN matrix, where each pixel in the image
//						  is 4 bytes, write a method to rotate the image by 90 degrees. Do it in place.
//
//		File description: This file declares class C1Q6 with member function rotate5x5Matrix to rotate
//						  a 5 x 5 integer matrix by 90 degrees in place.
//
////////////////////////////////////////////////////////////////////////////////////////////////////

// 1. Preferred location
#include "chapter1_question6.h"

// 2. C system files

// 3. C++ system files
#include <iostream>

// 4. Other libraries' .h files

// 5. Your project's .h files

using namespace std;

QuestionName C1Q6::question_name_ = "C1Q6";

C1Q6 C1Q6::question_instance_(C1Q6::question_name_);

ClassTemplate *C1Q6::CreateSpecificQuestionPointer() const
{
	return new C1Q6();
}

bool C1Q6::areTwo5x5ArrayEqual(int matrix1[5][5], int matrix2[5][5]) const
{
	for (int row = 0; row < 4; row++)
		for (int column = 0; column < 4; column++)
			if (matrix1[row][column] != matrix2[row][column])
				return false;

	return true;
}

void C1Q6::rotate5x5Matrix(int ioMatrix[5][5], int N) const
{
	for (int row = 0; row <= N / 2 - 1; row++)
	{
		for (int column = 0; column <= (N + 1) / 2 - 1; column++)
		{
			int buffer = ioMatrix[row][column];
			ioMatrix[row][column] = ioMatrix[column][N - 1 - row];
			ioMatrix[column][N - 1 - row] = ioMatrix[N - 1 - row][N - 1 - column];
			ioMatrix[N - 1 - row][N - 1 - column] = ioMatrix[N - 1 - column][row];
			ioMatrix[N - 1 - column][row] = buffer;
		}
	}
}

void C1Q6::RunRegression() const
{
	int original_5x5_martix[5][5] = {{ 1, 2, 3, 4, 5 },
									{ 6, 7, 8, 9, 10 },
									{ 11, 12, 13, 14, 15 },
									{ 16, 17, 18, 19, 20 },
									{ 21, 22, 23, 24, 25 }};

	int rotated_5x5_martix[5][5] = {{ 5, 10, 15, 20, 25 },
									{ 4, 9, 14, 19, 24 },
									{ 3, 8, 13, 18, 23 },
									{ 2, 7, 12, 17, 22 },
									{ 1, 6, 11, 16, 21 } };

	rotate5x5Matrix(original_5x5_martix, 5);

	cout << "Test 1: ";
	if (areTwo5x5ArrayEqual(original_5x5_martix, rotated_5x5_martix))
		cout << "OK";
	else
		cout << "Fail";

	cout << "." << endl;

	return;
}