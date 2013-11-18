////////////////////////////////////////////////////////////////////////////////////////////////////
//	Question description: Given two strings, write a method to decide if one is a permutation
//						  of the other.
//
//		File description: This file declares class C1Q3 with member function isPermutation
//						  to check if string1 is a permutation of string2.
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef CODING_PRACTICE_CHAPTER1_QUESTION3_H_
#define CODING_PRACTICE_CHAPTER1_QUESTION3_H_

// 1. Preferred location

// 2. C system files

// 3. C++ system files
#include <string>

// 4. Other libraries' .h files

// 5. Your project's .h files
#include "../class_template.h"

class C1Q3 : public ClassTemplate
{

public:

	C1Q3() : ClassTemplate() {};

	C1Q3(QuestionName iQuestionName) : ClassTemplate(iQuestionName) {};

	void RunRegression() const;

protected:

	ClassTemplate *CreateSpecificQuestionPointer() const;

private:

	static QuestionName question_name_;

	static C1Q3 question_instance_;

private:

	/*
		@ Description:
		Check whether string1 is permutation of string2.

		@ Algorithm:
		This algorithm depends on the assumption that all characters in
		the string are ASCII codes, case sensitive and whitespace is significant.

		Check if two strings have identical character counts.
		If not, return false. Otherwise, return true.

		Time efficiency: O(N)
		Space efficiency: O(N)

		@ Input:
		iStr1: Input string including letters, digits and punctuation.
		iStr2: Input string including letters, digits and punctuation.

		@ Output:
		bool: Return true if two strings have identical character counts.
		Otherwise false.

		@ Usage:
		bool is_permutation = isPermutation("ABC","abc");
	*/
	bool isPermutation(const std::string &iStr1, const std::string &iStr2) const;

	/*
		@ Description:
		Check whether string1 is permutation of string2.

		@ Algorithm:
		This algorithm depends on the assumption that all characters in
		the string are ASCII codes, case sensitive and whitespace is significant.

		Sort two strings by using stl quick sort method.
		Then compare the sorted versions of strings.

		Time efficiency: O(N*log(N))
		Space efficiency: O(1)

		@ Input:
		iStr1: Input string including letters, digits and punctuation.
		iStr2: Input string including letters, digits and punctuation.

		@ Output:
		bool: Return true if two strings have identical character counts.
		Otherwise false.

		@ Usage:
		bool is_permutation = isPermutation("ABC","abc");
	*/
	bool isPermutation_withQuickSort(std::string iStr1, std::string iStr2) const;
};

#endif