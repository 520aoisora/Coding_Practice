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

	void RunRegression();

protected:

	ClassTemplate *CreateSpecificQuestionPointer();

private:

	static QuestionName question_name_;

	static C1Q4 question_instance_;

private:

	bool replaceAllSpaces(std::string &ioStr, const int &iRealStringLength);
};

#endif