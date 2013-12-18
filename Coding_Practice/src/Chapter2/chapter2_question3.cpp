////////////////////////////////////////////////////////////////////////////////////////////////////
//	Question description: Implement an algorithm to delete a node in the middle of a singly linked list,
//						  given only access to that node.
//
//		File description: This file declares class C2Q3 with member function removeNodeInLinkedList
//						  to remove non-end node in a singly linked list when only access to that
//						  node is available.
//
////////////////////////////////////////////////////////////////////////////////////////////////////

// 1. Preferred location
#include "chapter2_question3.h"

// 2. C system files

// 3. C++ system files

// 4. Other libraries' .h files

// 5. Your project's .h files

using namespace std;

QuestionName C2Q3::question_name_ = "C2Q3";

C2Q3 C2Q3::question_instance_(C2Q3::question_name_);

ClassTemplate *C2Q3::CreateSpecificQuestionPointer() const
{
	return new C2Q3();
}

void C2Q3::RunRegression() const
{
	Node<char> *node_head = new Node<char>(string("FOLLOW UP"));
	Node<char> *node_to_be_removed = node_head->ptr_to_next_node_;
	removeNodeInLinkedList(node_to_be_removed);

	Node<char> *temp_node_ptr = node_head;
	while (temp_node_ptr != NULL)
	{
		cout << temp_node_ptr->value_;
		temp_node_ptr = temp_node_ptr->ptr_to_next_node_;
	}
	cout << endl;
	return;
}

void C2Q3::removeNodeInLinkedList(Node<char> *iNode) const
{
	if (iNode == NULL || iNode->ptr_to_next_node_ == NULL)
		return;

	Node<char> *node_to_be_removed = iNode->ptr_to_next_node_;

	iNode->value_ = node_to_be_removed->value_;
	iNode->ptr_to_next_node_ = node_to_be_removed->ptr_to_next_node_;

	delete node_to_be_removed;
	return;
}
