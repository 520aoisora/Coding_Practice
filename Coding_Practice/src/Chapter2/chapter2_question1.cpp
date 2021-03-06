////////////////////////////////////////////////////////////////////////////////////////////////////
//	Question description: Implement an algorithm to determine if a string has all unique characters.
//						  What if you cannot use additional data structure.
//
//		File description: This file declares class C2Q1 with member function removeDuplicates_withoutBuffer
//						  to remove all duplicate char nodes in a linked list without using a buffer.
//
////////////////////////////////////////////////////////////////////////////////////////////////////

// 1. Preferred location
#include "chapter2_question1.h"

// 2. C system files

// 3. C++ system files
#include <algorithm>
#include <vector>

// 4. Other libraries' .h files

// 5. Your project's .h files

using namespace std;

QuestionName C2Q1::question_name_ = "C2Q1";

C2Q1 C2Q1::question_instance_(C2Q1::question_name_);

ClassTemplate *C2Q1::CreateSpecificQuestionPointer() const
{
	return new C2Q1();
}

void C2Q1::RunRegression() const
{
	Node<char> *node_head = new Node<char>(string("FOLLOW UP"));

	removeDuplicates_withoutBuffer(node_head);

	node_head->display_all_nodes_values_from_current_node();

	return;
}

void C2Q1::removeDuplicates(Node<char> *iHeadNode) const
{
	Node<char> *temp_node_ptr = iHeadNode;
	vector<char> charactor_set;
	charactor_set.push_back(temp_node_ptr->value_);

	while (temp_node_ptr->ptr_to_next_node_ != NULL)
	{
		if (find(charactor_set.begin(), charactor_set.end(), temp_node_ptr->ptr_to_next_node_->value_) == charactor_set.end())
		{
			charactor_set.push_back(temp_node_ptr->ptr_to_next_node_->value_);
			temp_node_ptr = temp_node_ptr->ptr_to_next_node_;
		}
		else
			temp_node_ptr->ptr_to_next_node_ = temp_node_ptr->ptr_to_next_node_->ptr_to_next_node_;
	}
}

void C2Q1::removeDuplicates_withoutBuffer(Node<char> *iHeadNode) const
{
	Node<char> *first_compare_node = iHeadNode;
	while ((first_compare_node != NULL) &&
		   (first_compare_node->ptr_to_next_node_ != NULL))
	{
		Node<char> *second_compare_node = first_compare_node;

		while (second_compare_node->ptr_to_next_node_ != NULL)
		{
			if (first_compare_node->value_ != second_compare_node->ptr_to_next_node_->value_)
				second_compare_node = second_compare_node->ptr_to_next_node_;
			else
				second_compare_node->ptr_to_next_node_ = second_compare_node->ptr_to_next_node_->ptr_to_next_node_;
		}

		first_compare_node = first_compare_node->ptr_to_next_node_;
	}
}
