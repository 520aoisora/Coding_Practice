////////////////////////////////////////////////////////////////////////////////////////////////////
//	Question description: Write a method to replace all spaces in a string with '%20'.
//						  You may assume that the string has sufficient space at the end of the
//						  string to hold the additional characters, and that you are given the
//						  "true" length of the string.
//
//		File description: This file declares class C1Q4 with member function replaceAllSpaces
//						  to replace all spaces in a string with '%20'.
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef CODING_PRACTICE_CHAPTER1_QUESTION4_H_
#define CODING_PRACTICE_CHAPTER1_QUESTION4_H_

// 1. Preferred location

// 2. C system files

// 3. C++ system files
#include <string>

// 4. Other libraries' .h files

// 5. Your project's .h files
#include "../class_template.h"

class C1Q4 : public ClassTemplate
{

public:

	C1Q4() : ClassTemplate() {};

	C1Q4(QuestionName iQuestionName) : ClassTemplate(iQuestionName) {};

	void RunRegression() const;

protected:

	ClassTemplate *CreateSpecificQuestionPointer() const;

private:

	static QuestionName question_name_;

	static C1Q4 question_instance_;

private:

	/*
		@ Description:
			Replace all spaces in the string with %20.

		@ Algorithm:
			Get space count and calculate total space required.
			Iteritor string backwards and start writing from last position.

			Time efficiency: O(N)
			Space efficiency: O(1)

		@ Input:
			ioStr: Input string including enough extra space at the end.
			iRealStringLength: length of real content in the string.

		@ Output:
			bool: Return true if string is valid.
			ioStr: String with all spaces replaced with %20.

		@ Usage:
			string test_string = "Hello world  ."
			if(replaceAllSpaces(test_string,11);
	*/
	bool replaceAllSpaces(std::string &ioStr, const int &iRealStringLength) const;
};

#endif