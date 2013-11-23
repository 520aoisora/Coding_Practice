////////////////////////////////////////////////////////////////////////////////////////////////////
//	Question description: Implement an algorithm to determine if a string has all unique characters.
//						  What if you cannot use additional data structure.
//
//		File description: This file declares class C2Q1 with member function removeDuplicates_withoutBuffer
//						  to remove all duplicate char nodes in a linked list without using a buffer.
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef CODING_PRACTICE_CHAPTER2_QUESTION1_H_
#define CODING_PRACTICE_CHAPTER2_QUESTION1_H_

// 1. Preferred location

// 2. C system files

// 3. C++ system files

// 4. Other libraries' .h files

// 5. Your project's .h files
#include "../class_template.h"
#include "node.h"

class C2Q1 : public ClassTemplate
{

public:

	C2Q1() : ClassTemplate() {};

	C2Q1(QuestionName iQuestionName) : ClassTemplate(iQuestionName) {};

	void RunRegression() const;

protected:

	ClassTemplate *CreateSpecificQuestionPointer() const;

private:

	static QuestionName question_name_;

	static C2Q1 question_instance_;

private:

	/*
		@ Description:
			Remove all duplicate nodes in a linked list.

		@ Algorithm:
			This algorithm uses a buffer to store all charactors appearing
			in the linked list to make comparison easier.

			Time efficiency: O(N)
			Space efficiency: O(N)

		@ Input:
			iHeadNode: Pointer of first node in linked list.

		@ Output:
			No output.
	*/
	void removeDuplicates(Node *iHeadNode) const;

	/*
		@ Description:
		Remove all duplicate nodes in a linked list.

		@ Algorithm:
		This algorithm doesnot use any buffer to store charactors appearing
		in the linked list to save memory.

		Time efficiency: O(NxN)
		Space efficiency: O(1)

		@ Input:
		iHeadNode: Pointer of first node in linked list.

		@ Output:
		No output.
	*/
	void removeDuplicates_withoutBuffer(Node *iHeadNode) const;
};

#endif