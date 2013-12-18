////////////////////////////////////////////////////////////////////////////////////////////////////
//	Question description: You have two numbers represented by a linked list, where each node contains
//						  a single digit. The digits are stored in reverse order, such that the 1's
//						  digit is at the head of the list. Write a function that adds the two
//						  numbers and returns the sum as a linked list.
//
//						  FOLLOW UP
//
//						  Suppose the digits are stored in forward order. Repeat the above problem.
//
//		File description: This file declares class C2Q5 with member function addTwoReverseOrderNumbers
//						  and addTwoForwardOrderNumbers to add two numbers represented by a linked list.
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef CODING_PRACTICE_CHAPTER2_QUESTION5_H_
#define CODING_PRACTICE_CHAPTER2_QUESTION5_H_

// 1. Preferred location

// 2. C system files

// 3. C++ system files

// 4. Other libraries' .h files

// 5. Your project's .h files
#include "../class_template.h"
#include "node.h"

class C2Q5 : public ClassTemplate
{

public:

	C2Q5() : ClassTemplate() {};

	C2Q5(QuestionName iQuestionName) : ClassTemplate(iQuestionName) {};

	void RunRegression() const;

protected:

	ClassTemplate *CreateSpecificQuestionPointer() const;

private:

	static QuestionName question_name_;

	static C2Q5 question_instance_;

private:

	/*
		@ Description:
			Add two reverse order numbers presented by linked list.

		@ Algorithm:
			This algorithm iterators two linked lists at the same time
			and add corresponsding digits.

			Time efficiency: O(N)
			Space efficiency: O(N)

		@ Input:
			iHeadNodeOfFirstNumber: Pointer of first node in the linked list of first number.
			iHeadNodeOfSecondNumber: Pointer of first node in the linked list of second number.

		@ Output:
			Pointer of first node in the linked list of result.
	*/
	Node<int>* addTwoReverseOrderNumbers(Node<int> *iHeadNodeOfFirstNumber, Node<int> *iHeadNodeOfSecondNumber) const;

	/*
		@ Description:
			Add two forward order numbers presented by linked list.

		@ Algorithm:
			This algorithm calculates the difference of two linked lists first.
			Then by iteratoring two linked lists recursively, adding two linked
			list backwards.

			Time efficiency: O(N)
			Space efficiency: O(N)

		@ Input:
			iHeadNodeOfFirstNumber: Pointer of first node in the linked list of first number.
			iHeadNodeOfSecondNumber: Pointer of first node in the linked list of second number.

		@ Output:
			Pointer of first node in the linked list of result.
	*/
	Node<int>* addTwoForwardOrderNumbers(Node<int> *iHeadNodeOfFirstNumber, Node<int> *iHeadNodeOfSecondNumber) const;
};

#endif