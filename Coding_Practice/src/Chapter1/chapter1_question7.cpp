////////////////////////////////////////////////////////////////////////////////////////////////////
//	Question description: Write an algorithm such that if an element in an MxN matrix is 0,
//						  its entire row and column are set to 0.
//
//		File description: This file declares class C1Q7 with member function setZeros to set whole
//						  row and column zero where there is a zero in a 6 x 7 matrix.
//
////////////////////////////////////////////////////////////////////////////////////////////////////

// 1. Preferred location
#include "chapter1_question7.h"

// 2. C system files

// 3. C++ system files
#include <iostream>

// 4. Other libraries' .h files

// 5. Your project's .h files

using namespace std;

QuestionName C1Q7::question_name_ = "C1Q7";

C1Q7 C1Q7::question_instance_(C1Q7::question_name_);

ClassTemplate *C1Q7::CreateSpecificQuestionPointer()
{
	return new C1Q7();
}

bool C1Q7::areTwoMatricesIdentical(const int matrix1[6][7], const int matrix2[6][7]) const
{
	for(int row = 0; row < 3; row++)
		for(int column = 0; column < 3; column++)
			if(matrix1[row][column] != matrix2[row][column])
				return false;

	return true;
}

void C1Q7::setZeros(int ioMatrix[6][7]) const
{
	bool zero_value_rows[6] = { false };
	bool zero_value_columns[7] = { false };

	for(int row = 0; row < 6; row++)
	{
		for(int column = 0; column < 7; column++)
		{
			if (ioMatrix[row][column] == 0)
			{
				zero_value_rows[row] = true;
				zero_value_columns[column] = true;
			}
		}
	}

	for (int row = 0; row < 6; row++)
		for (int column = 0; column < 7; column++)
			if (zero_value_rows[row] || zero_value_columns[column])
				ioMatrix[row][column] = 0;
}

void C1Q7::RunRegression()
{
	//int matrix[4][3][3] = {{{1,1,1},
	//						{1,1,1},
	//						{1,1,1}},

	//						{{0,1,1},
	//						{1,1,1},
	//						{1,1,1}},

	//						{{1,1,1},
	//						{1,0,1},
	//						{1,1,1}},

	//						{{1,1,1},
	//						{1,1,0},
	//						{1,0,1}}};

	//int resultMatrix[4][3][3] = {{{1,1,1},
	//								{1,1,1},
	//								{1,1,1}},

	//								{{0,0,0},
	//								{0,1,1},
	//								{0,1,1}},

	//								{{1,0,1},
	//								{0,0,0},
	//								{1,0,1}},

	//								{{1,0,0},
	//								{0,0,0},
	//								{0,0,0}}};

	//for(int i = 0; i < 4; i++)
	//{
	//	repaintArray(matrix[i]);

	//	cout << "Test " << i << ": ";
	//	if(areEqualArray3(matrix[i], resultMatrix[i]))
	//		cout << "OK";
	//	else
	//		cout << "Fail";

	//	cout << "." << endl;
	//}

	int original_6x7_matrix[6][7] = { { 1, 1, 1, 1, 1, 1, 1 },
									  { 1, 1, 1, 1, 1, 1, 1 },
									  { 1, 0, 1, 1, 1, 1, 1 },
									  { 1, 1, 1, 1, 1, 1, 1 },
									  { 1, 1, 1, 1, 1, 0, 1 },
									  { 1, 1, 1, 1, 1, 1, 1 } };

	int repainted_6x7_matrix[6][7] = {  { 1, 0, 1, 1, 1, 0, 1 },
										{ 1, 0, 1, 1, 1, 0, 1 },
										{ 0, 0, 0, 0, 0, 0, 0 },
										{ 1, 0, 1, 1, 1, 0, 1 },
										{ 0, 0, 0, 0, 0, 0, 0 },
										{ 1, 0, 1, 1, 1, 0, 1 } };

	setZeros(original_6x7_matrix);

	cout << "Test 1: ";
	if (areTwoMatricesIdentical(original_6x7_matrix, repainted_6x7_matrix))
		cout << "OK";
	else
		cout << "Fail";

	cout << "." << endl;
}