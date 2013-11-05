////////////////////////////////////////////////////////////////////////////////////////////////////
//	Question description: Implement a function void reverse(char* str) in C++ which reverses a
//						  null-terminated string.
//
//		File description: This file declares class C1Q2 with member function reverse(char *str)
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

	void RunRegression();

protected:

	ClassTemplate *CreateSpecificQuestionPointer();

private:

	static QuestionName question_name_;

	static C1Q2 question_instance_;

private:

	void swap(char *begin, char *end);

	void reverse(char *str);
};

#endif