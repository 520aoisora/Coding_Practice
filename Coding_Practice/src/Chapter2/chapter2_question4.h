////////////////////////////////////////////////////////////////////////////////////////////////////
//	Question description: Write code to partition a linked list around a value x, such that all nodes
//						  less than x come before all nodes greater than or equal to x.
//
//		File description: This file declares class C2Q4 with member function partitionLinkedList
//						  to partition a linked list based on the given integer value.
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef CODING_PRACTICE_CHAPTER2_QUESTION4_H_
#define CODING_PRACTICE_CHAPTER2_QUESTION4_H_

// 1. Preferred location

// 2. C system files

// 3. C++ system files

// 4. Other libraries' .h files

// 5. Your project's .h files
#include "../class_template.h"
#include "node.h"

class C2Q4 : public ClassTemplate
{

public:

	C2Q4() : ClassTemplate() {};

	C2Q4(QuestionName iQuestionName) : ClassTemplate(iQuestionName) {};

	void RunRegression() const;

protected:

	ClassTemplate *CreateSpecificQuestionPointer() const;

private:

	static QuestionName question_name_;

	static C2Q4 question_instance_;

private:

	/*
		@ Description:
			Partition a integer singly linked list based on given value,
			all small values come before all large values.

		@ Algorithm:
			This algorithm creates two singly linked lists. One for all small values.
			The other one for all large values. Then connect two linked lists together
			and replace the linked list started by iHeadNode.

			Time efficiency: O(N)
			Space efficiency: O(N)

		@ Input:
			iHeadNode: Pointer of first node in linked list.
			x: partition value.

		@ Output:
			No output.

		@ Note:
			The pointer must be passed by reference.
	*/
	void partitionLinkedList(Node<int> *&iHeadNode, const int &x) const;
};

#endif