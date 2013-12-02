////////////////////////////////////////////////////////////////////////////////////////////////////
//	Question description: Implement an algorithm to delete a node in the middle of a singly linked list,
//						  given only access to that node.
//
//		File description: This file declares class C2Q3 with member function removeNodeInLinkedList
//						  to remove non-end node in a singly linked list when only access to that
//						  node is available.
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef CODING_PRACTICE_CHAPTER2_QUESTION3_H_
#define CODING_PRACTICE_CHAPTER2_QUESTION3_H_

// 1. Preferred location

// 2. C system files

// 3. C++ system files

// 4. Other libraries' .h files

// 5. Your project's .h files
#include "../class_template.h"
#include "node.h"

class C2Q3 : public ClassTemplate
{

public:

	C2Q3() : ClassTemplate() {};

	C2Q3(QuestionName iQuestionName) : ClassTemplate(iQuestionName) {};

	void RunRegression() const;

protected:

	ClassTemplate *CreateSpecificQuestionPointer() const;

private:

	static QuestionName question_name_;

	static C2Q3 question_instance_;

private:

	/*
		@ Description:
			Remove a node in a singly linked list when only access to that node is given.

		@ Algorithm:
			This algorithm copies all the values in the next node to current node
			and delete next node.

			Time efficiency: O(1)
			Space efficiency: O(1)

		@ Input:
			iNode: Pointer of the node to be removed (actually next node is removed) in the singly linked list.

		@ Output:
			No output.

		@ Note:
			The given node cannot be NULL or the last node in the linked list.
	*/
	void removeNodeInLinkedList(Node *iNode) const;
};

#endif