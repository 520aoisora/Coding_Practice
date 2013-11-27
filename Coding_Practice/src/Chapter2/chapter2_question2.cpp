////////////////////////////////////////////////////////////////////////////////////////////////////
//	Question description: Implement an algorithm to find the kth to last element of a singly linked list.
//
//		File description: This file declares class C2Q2 with member function findKthToLastNode to find
//						  out the kth to the last element of a singly linked list.
//
////////////////////////////////////////////////////////////////////////////////////////////////////

// 1. Preferred location
#include "chapter2_question2.h"

// 2. C system files

// 3. C++ system files

// 4. Other libraries' .h files

// 5. Your project's .h files

using namespace std;

QuestionName C2Q2::question_name_ = "C2Q2";

C2Q2 C2Q2::question_instance_(C2Q2::question_name_);

ClassTemplate *C2Q2::CreateSpecificQuestionPointer() const
{
	return new C2Q2();
}

void C2Q2::RunRegression() const
{
	Node *node_head = new Node(string("FOLLOW UP"));

	for (unsigned int k = 1; k <= string("FOLLOW UP").length(); k++)
		cout << findKthToLastNode_iterative(node_head, k)->char_value_ << endl;

	return;
}

Node* C2Q2::findKthToLastNode(Node *iHeadNode, const unsigned int &k) const
{
	unsigned int linked_list_length = 0;
	
	for (Node *temp = iHeadNode; temp != NULL; temp = temp->ptr_to_next_node_)
		linked_list_length++;

	if (k >= linked_list_length)
		return iHeadNode;

	Node *temp = iHeadNode;
	for (unsigned int index = 0; index < linked_list_length - k; temp = temp->ptr_to_next_node_, index++);

	return temp;
}

Node* KthToLastNode(Node *iHeadNode, const unsigned int &k, unsigned int &counter)
{
	if (iHeadNode == NULL)
	{
		counter = 0;
		return NULL;
	}

	Node *temp_node = KthToLastNode(iHeadNode->ptr_to_next_node_, k, counter);

	if (k == ++counter)
		return iHeadNode;
	else
		return temp_node;
}

Node* C2Q2::findKthToLastNode_recursive(Node *iHeadNode, const unsigned int &k) const
{
	unsigned int tmp_int = 0;
	return KthToLastNode(iHeadNode, k, tmp_int);
}

Node* C2Q2::findKthToLastNode_iterative(Node *iHeadNode, const unsigned int &k) const
{
	Node *first_node = iHeadNode;
	Node *second_node = iHeadNode;

	for (unsigned int index = 1; (index < k) && (second_node != NULL); index++)
		second_node = second_node->ptr_to_next_node_;

	while (second_node->ptr_to_next_node_ != NULL)
	{
		first_node = first_node->ptr_to_next_node_;
		second_node = second_node->ptr_to_next_node_;
	}

	return first_node;
}
