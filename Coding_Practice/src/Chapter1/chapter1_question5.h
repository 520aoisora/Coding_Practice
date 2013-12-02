////////////////////////////////////////////////////////////////////////////////////////////////////
//	Question description: Implement a method to perform basic string compression using the counts of
//						  repeated characters. For example, the string aabcccccaaa would become
//						  a2b1c5a3. If the "compressed" string would not become smaller than the
//						  original string, your method should return the original string.
//
//		File description: This file declares class C1Q5 with member function compressString
//						  to compress a string and return the shorter one between the original string
//						  and new compressed string.
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef CODING_PRACTICE_CHAPTER1_QUESTION5_H_
#define CODING_PRACTICE_CHAPTER1_QUESTION5_H_

// 1. Preferred location

// 2. C system files

// 3. C++ system files
#include <string>

// 4. Other libraries' .h files

// 5. Your project's .h files
#include "../class_template.h"

class C1Q5 : public ClassTemplate
{

public:

	C1Q5() : ClassTemplate() {};

	C1Q5(QuestionName iQuestionName) : ClassTemplate(iQuestionName) {};

	void RunRegression() const;

protected:

	ClassTemplate *CreateSpecificQuestionPointer() const;

private:

	static QuestionName question_name_;

	static C1Q5 question_instance_;

private:

	void appendCharToStringEnd(std::string &ioStr, const char &lastChar, const int &charCount) const;

	/*
		@ Description:
			Compress a string and return the shorter one between the original and compressed string.

		@ Algorithm:
			Create a new compressed string by using "append" not "+= (very expensive)".
			Compare the lengths of two strings and return the shorter one.

			Time efficiency: O(N)
			Space efficiency: O(N)

		@ Input:
			ioStr: Input string including letters, digits and punctuation.

		@ Output:
			bool: Return true if input string is valid.
			ioStr: Returned shorter string. Either the original one or compressed one.

		@ Usage:
			string test_string = "aabcccccaaa";
			if(compressString(test_string));
	*/
	bool compressString(std::string &ioStr) const;
};

#endif