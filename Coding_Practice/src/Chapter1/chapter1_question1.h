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

	C1Q1() : ClassTemplate() {};

	C1Q1(QuestionName iQuestionName) : ClassTemplate(iQuestionName) {};

	void RunRegression() const;

protected:

	ClassTemplate *CreateSpecificQuestionPointer() const;

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

			Create an array of boolean values, where the flag at index i
			indicates whether character i in the alphabet is contained in
			the string. If run across a character a second time, immediately
			return false.

			Time efficiency: O(N)
			Space efficiency: O(N)

		@ Input:
			iStr: Input string including letters, digits and punctuation.

		@ Output:
			bool: Return true if all characters in the string are unique.
				  Otherwise false.

		@ Usage:
			bool are_all_characters_unique = areAllUniqueCharacters("ABC");
	*/
	bool areAllUniqueCharacters(const std::string &iStr) const;

	/*
		@ Description:
			Check whether all characters in a string are unique.

		@ Algorithm:
			This algorithm iterators every charactor in the string and
			compare with all rest charactors by using double for loop.

			Time efficiency: O(N*N)
			Space efficiency: O(1)

		@ Input:
			iStr: Input string including letters, digits and punctuation.

		@ Output:
			bool: Return true if all characters in the string are unique.
			  Otherwise false.

		@ Usage:
			bool are_all_characters_unique = areAllUniqueCharacters_doubleForLoop("ABC");
	*/
	bool areAllUniqueCharacters_doubleForLoop(const std::string &iStr) const;

	/*
		@ Description:
			Check whether all characters in a string are unique.

		@ Algorithm:
			This algorithm sorts string at first by using quick sort.
			Then compare every two adjacent letters and return false if they are same.

			Time efficiency: O(N*log(N))
			Space efficiency: O(N)

		@ Input:
			iStr: Input string including letters, digits and punctuation.

		@ Output:
			bool: Return true if all characters in the string are unique.
			Otherwise false.

		@ Usage:
			bool are_all_characters_unique = areAllUniqueCharacters_withQuickSort("ABC");
	*/
	bool areAllUniqueCharacters_withQuickSort(std::string iStr) const;
};

#endif