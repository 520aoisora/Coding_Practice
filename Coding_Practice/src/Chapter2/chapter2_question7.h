////////////////////////////////////////////////////////////////////////////////////////////////////
//	Question description: Implement a function to check if a linked list is a palindrome.
//
//		File description: This file declares class C2Q7 with member function
//						  1. isPalindrome_ReverseAndCompare
//						  2. isPalindrome_IterativeApproach
//						  3. isPalindrome_RecursiveApproach
//						  To determine whether a linked list is palindrome or not.
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef CODING_PRACTICE_CHAPTER2_QUESTION7_H_
#define CODING_PRACTICE_CHAPTER2_QUESTION7_H_

// 1. Preferred location

// 2. C system files

// 3. C++ system files

// 4. Other libraries' .h files

// 5. Your project's .h files
#include "../class_template.h"
#include "node.h"

class C2Q7 : public ClassTemplate
{

public:

	C2Q7() : ClassTemplate() {};

	C2Q7(QuestionName iQuestionName) : ClassTemplate(iQuestionName) {};

	void RunRegression() const;

protected:

	ClassTemplate *CreateSpecificQuestionPointer() const;

private:

	static QuestionName question_name_;

	static C2Q7 question_instance_;

private:

	/*
		@ Description:
			To determine whether a linked list is palindrome or not.

		@ Algorithm:
			This algorithm iterators the first half of linked list and
			compare with the corresponding node from backwords.

			Time efficiency: O(N)
			Space efficiency: O(1)

		@ Input:
			iHeadNode: Pointer of first node in linked list.

		@ Output:
			Return true if linked list is palindrome. Otherwise, false.
	*/
	bool isPalindrome_ReverseAndCompare(Node<char> *iHeadNode) const;

	/*
		@ Description:
			To determine whether a linked list is palindrome or not.

		@ Algorithm:
			This algorithm pushs first half of linked list into a stack.
			Then pop and compare with the second half of linked list.

			Time efficiency: O(N)
			Space efficiency: O(N)

		@ Input:
			iHeadNode: Pointer of first node in linked list.

		@ Output:
			Return true if linked list is palindrome. Otherwise, false.
	*/
	bool isPalindrome_IterativeApproach(Node<char> *iHeadNode) const;

	/*
		@ Description:
			To determine whether a linked list is palindrome or not.

		@ Algorithm:
			This algorithm recursively compares first and last node in
			linked list and check if rest of linked list is palindrome
			or not.

			Time efficiency: O(NxN)
			Space efficiency: O(N)

		@ Input:
			iHeadNode: Pointer of first node in linked list.
			linked_list_length: length of linked list.

		@ Output:
			Return true if linked list is palindrome. Otherwise, false.
	*/
	bool isPalindrome_RecursiveApproach(Node<char> *iHeadNode, int linked_list_length) const;
};

#endif