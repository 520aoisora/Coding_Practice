////////////////////////////////////////////////////////////////////////////////////////////////////
//	Question description: Write code to partition a linked list around a value x, such that all nodes
//						  less than x come before all nodes greater than or equal to x.
//
//		File description: This file declares class C2Q4 with member function partitionLinkedList
//						  to partition a linked list based on the given integer value.
//
////////////////////////////////////////////////////////////////////////////////////////////////////

// 1. Preferred location
#include "chapter2_question4.h"

// 2. C system files

// 3. C++ system files

// 4. Other libraries' .h files

// 5. Your project's .h files

using namespace std;

QuestionName C2Q4::question_name_ = "C2Q4";

C2Q4 C2Q4::question_instance_(C2Q4::question_name_);

ClassTemplate *C2Q4::CreateSpecificQuestionPointer() const
{
	return new C2Q4();
}

void C2Q4::RunRegression() const
{
	vector<int> aIntegerVector = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	Node<int> *node_head = new Node<int>(aIntegerVector);

	partitionLinkedList(node_head,5);

	node_head->display_all_nodes_values_from_current_node();

	return;
}

void C2Q4::partitionLinkedList(Node<int> *&iHeadNode, const int &x) const
{
	if (iHeadNode == NULL || iHeadNode->ptr_to_next_node_ == NULL)
		return;

	Node<int> *smaller_partition_head = NULL;
	Node<int> *greater_partition_head = NULL;
	for (Node<int> *node_to_be_checked = iHeadNode; node_to_be_checked != NULL; node_to_be_checked = node_to_be_checked->ptr_to_next_node_)
	{
		Node<int> *temp_node = new Node<int>(node_to_be_checked->value_);

		if (temp_node->value_ < x)
		{
			if (smaller_partition_head == NULL)
				smaller_partition_head = temp_node;
			else
				smaller_partition_head->append_to_tail(temp_node);
		}
		else
		{
			if (greater_partition_head == NULL)
				greater_partition_head = temp_node;
			else
				greater_partition_head->append_to_tail(temp_node);
		}
	}

	Node<int> *last_node_of_smaller_partition = smaller_partition_head;
	while (last_node_of_smaller_partition->ptr_to_next_node_ != NULL)
		last_node_of_smaller_partition = last_node_of_smaller_partition->ptr_to_next_node_;

	last_node_of_smaller_partition->ptr_to_next_node_ = greater_partition_head;
	iHeadNode->delete_all_nodes_behind();
	iHeadNode = smaller_partition_head;

	return;
}
