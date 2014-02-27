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

// 1. Preferred location
#include "chapter2_question7.h"

// 2. C system files

// 3. C++ system files
#include <stack>

// 4. Other libraries' .h files

// 5. Your project's .h files

using namespace std;

QuestionName C2Q7::question_name_ = "C2Q7";

C2Q7 C2Q7::question_instance_(C2Q7::question_name_);

ClassTemplate *C2Q7::CreateSpecificQuestionPointer() const
{
	return new C2Q7();
}

void C2Q7::RunRegression() const
{
	Node<char> *node_head = new Node<char>(string("FOLLOFA"));

	node_head->display_all_nodes_values_from_current_node();

	cout << " is";

	if (!isPalindrome_RecursiveApproach(node_head, node_head->calculate_linked_list_length()))
		cout << " not";

	cout << " palindrome." << endl;

	return;
}

bool C2Q7::isPalindrome_ReverseAndCompare(Node<char> *iHeadNode) const
{
	int linked_list_length = iHeadNode->calculate_linked_list_length();
	if (linked_list_length == 1)
		return true;

	Node<char> *ptr_of_front_node = iHeadNode;
	Node<char> *ptr_of_back_node = iHeadNode->get_ptr_of_last_node();
	
	for (int index = 0;	index < linked_list_length / 2;	index++)
	{
		if (ptr_of_front_node->value_ != ptr_of_back_node->value_)
			return false;

		ptr_of_front_node = ptr_of_front_node->ptr_to_next_node_;
		ptr_of_back_node = ptr_of_back_node->ptr_to_prev_node_;
	}

	return true;
}

bool C2Q7::isPalindrome_IterativeApproach(Node<char> *iHeadNode) const
{
	int linked_list_length = iHeadNode->calculate_linked_list_length();
	if (linked_list_length == 1)
		return true;

	Node<char> *ptr_of_node = iHeadNode;
	stack<char> stack_of_first_half_of_linked_list_in_reverse_order;
	for (int index = 0; index < linked_list_length / 2; index++)
	{
		stack_of_first_half_of_linked_list_in_reverse_order.push(ptr_of_node->value_);
		ptr_of_node = ptr_of_node->ptr_to_next_node_;
	}

	if (linked_list_length % 2 != 0)
		ptr_of_node = ptr_of_node->ptr_to_next_node_;

	for (; ptr_of_node != NULL; ptr_of_node = ptr_of_node->ptr_to_next_node_)
	{
		if (ptr_of_node->value_ != stack_of_first_half_of_linked_list_in_reverse_order.top())
			return false;

		stack_of_first_half_of_linked_list_in_reverse_order.pop();
	}

	return true;
}

bool C2Q7::isPalindrome_RecursiveApproach(Node<char> *iHeadNode, int linked_list_length) const
{
	if ((linked_list_length == 0) || (linked_list_length == 1))
		return true;

	Node<char> *ptr_of_head_node = iHeadNode;
	Node<char> *ptr_of_tail_node = iHeadNode;
	for (int index = 1; index < linked_list_length; index++)
		ptr_of_tail_node = ptr_of_tail_node->ptr_to_next_node_;

	if (ptr_of_head_node->value_ != ptr_of_tail_node->value_)
		return false;
	else
		return isPalindrome_RecursiveApproach(ptr_of_head_node->ptr_to_next_node_, linked_list_length - 2);
}