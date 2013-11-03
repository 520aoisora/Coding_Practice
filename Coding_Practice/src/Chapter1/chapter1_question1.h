////////////////////////////////////////////////////////////////////////////////////////////////////
//	Question description: Implement an algorithm to determine if a string has all unique characters.
//						  What if you cannot use additional data structure.
//
//		File description: This file declares class C1Q1 with member function areAllUniqueCharacters
//						  to check if all characters in a string are unique.
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef CODING_PRACTICE_CHAPTER1_QUESTION1_H_
#define CODING_PRACTICE_CHAPTER1_QUESTION1_H_

// 1. Preferred location

// 2. C system files

// 3. C++ system files
#include <string>

// 4. Other libraries' .h files

// 5. Your project's .h files
#include "../class_template.h"

class C1Q1 : public ClassTemplate
{

public:

	C1Q1(QuestionName iQuestionName) : ClassTemplate(iQuestionName) {};

	void RunRegression();

private:

	static QuestionName question_name_;

	static C1Q1 question_instance_;

private:

	/*
		@ Description:
			Check whether all characters in a string are unique.

		@ Algorithm:
			This algorithm depends on the assumption that all characters in
			the string are ASCII codes.

			Map each charactor to corresponding ASCII code and check array.
			If corresponding index element is 0, set to 1.
			If corresponding index element is 1, return true.
			If go through all characters, return false;

			Time efficiency: O(N)
			Space efficiency: O(N)

		@ Input:
			iStr: Input string including letters, digits and punctuation.

		@ Output:
			bool: Return true if all characters in the string are unique.

		@ Usage:
			bool are_all_characters_unique = areAllUniqueCharacters("ABC");
	*/
	bool areAllUniqueCharacters(const std::string &iStr);
};

#endif