////////////////////////////////////////////////////////////////////////////////////////////////////
//	Question description: Implement a function void reverse(char* str) in C++ which reverses a
//						  null-terminated string.
//
//		File description: This file declares class C1Q2 with member function reverseCharStarString(char *str)
//						  to reverse a null-terminated string.
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef CODING_PRACTICE_CHAPTER1_QUESTION2_H_
#define CODING_PRACTICE_CHAPTER1_QUESTION2_H_

// 1. Preferred location

// 2. C system files

// 3. C++ system files

// 4. Other libraries' .h files

// 5. Your project's .h files
#include "../class_template.h"

class C1Q2 : public ClassTemplate
{

public:

	C1Q2() : ClassTemplate() {};

	C1Q2(QuestionName iQuestionName) : ClassTemplate(iQuestionName) {};

	void RunRegression() const;

protected:

	ClassTemplate *CreateSpecificQuestionPointer() const;

private:

	static QuestionName question_name_;

	static C1Q2 question_instance_;

private:

	void swapTwoCharacters(char *ioLeftChar, char *ioRightChar) const;

	/*
		@ Description:
			Reverse all characters in char star string.

		@ Algorithm:
			Find last character in the string.
			Then swap characters and shift index until two indexes meet.

			Time efficiency: O(N)
			Space efficiency: O(1)

		@ Input:
			iStr: Input string including letters, digits and punctuation.

		@ Output:
			No return value. ioStr will be reverted.

		@ Usage:
			char test_string[] = "Hello world!";
			reverseCharStarString(test_string);
	*/
	void reverseCharStarString(char *ioStr) const;

	/*
		@ Description:
		Reverse all characters in char star string.

		@ Algorithm:
		Find "begin" and "end" of char star string.
		Then use std::reverse to reverse the string.

		Time efficiency: O(N)
		Space efficiency: O(1)

		@ Input:
		iStr: Input string including letters, digits and punctuation.

		@ Output:
		No return value. ioStr will be reverted.

		@ Usage:
		char test_string[] = "Hello world!";
		reverseCharStarString_withReverse(test_string);
	*/
	void reverseCharStarString_withReverse(char *ioStr) const;
};

#endif