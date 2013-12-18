////////////////////////////////////////////////////////////////////////////////////////////////////
//	Question description: Implement an algorithm to find the kth to last element of a singly linked list.
//
//		File description: This file declares class C2Q2 with member function findKthToLastNode to find
//						  out the kth to the last element of a singly linked list.
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef CODING_PRACTICE_CHAPTER2_QUESTION2_H_
#define CODING_PRACTICE_CHAPTER2_QUESTION2_H_

// 1. Preferred location

// 2. C system files

// 3. C++ system files

// 4. Other libraries' .h files

// 5. Your project's .h files
#include "../class_template.h"
#include "node.h"

class C2Q2 : public ClassTemplate
{

public:

	C2Q2() : ClassTemplate() {};

	C2Q2(QuestionName iQuestionName) : ClassTemplate(iQuestionName) {};

	void RunRegression() const;

protected:

	ClassTemplate *CreateSpecificQuestionPointer() const;

private:

	static QuestionName question_name_;

	static C2Q2 question_instance_;

private:

	/*
		@ Description:
			Find kth to the last element of a singly linked list.

		@ Algorithm:
			This algorithm iterate through the whole linked list to
			calculate the lenth. Then the kth to last element is
			the (length - k)th element.

			Time efficiency: O(N)
			Space efficiency: O(1)

		@ Input:
			iHeadNode: Pointer of first node in linked list.
			k: the number of the element which is searched.

		@ Output:
			Node*: the pointer of the result node in the singly linked list.
	*/
	Node<char>* findKthToLastNode(Node<char> *iHeadNode, const unsigned int &k) const;

	/*
		@ Description:
			Find kth to the last element of a singly linked list.

		@ Algorithm:
			This algorithm iterate through the whole linked list recursively.
			When it reaches the end, set counter to 0. When it is not the end,
			add 1 to counter and compare to K. Return current node if counter is
			equal to K.

			Time efficiency: O(N)
			Space efficiency: O(N)

		@ Input:
			iHeadNode: Pointer of first node in linked list.
			k: the number of the element which is searched.

		@ Output:
			Node*: the pointer of the result node in the singly linked list.
	*/
	Node<char>* findKthToLastNode_recursive(Node<char> *iHeadNode, const unsigned int &k) const;

	/*
		@ Description:
			Find kth to the last element of a singly linked list.

		@ Algorithm:
			This algorithm place two pointers k nodes apart by putting
			first_node at the beginning and moving second_node k nodes
			into the list. Then we move them at same pace. When second_node
			hit the end of the linked list, first_node will be k nodes
			from the end.

			Time efficiency: O(N)
			Space efficiency: O(1)

		@ Input:
			iHeadNode: Pointer of first node in linked list.
			k: the number of the element which is searched.

		@ Output:
			Node*: the pointer of the result node in the singly linked list.
	*/
	Node<char>* findKthToLastNode_iterative(Node<char> *iHeadNode, const unsigned int &k) const;
};

#endif