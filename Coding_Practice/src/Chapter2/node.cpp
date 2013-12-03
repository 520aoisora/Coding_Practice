#include "Node.h"

using namespace std;

Node::Node(const string &iString)
{
	if (iString.length() == 0)
		return;

	this->char_value_ = iString[0];

	for (unsigned int index = 1; index < iString.length(); index++)
		this->append_to_tail(new Node(iString[index]));
}

Node::Node(const vector<int> &iIntegerVector)
{
	if (iIntegerVector.size() == 0)
		return;

	this->int_value_ = iIntegerVector[0];

	for (unsigned int index = 1; index < iIntegerVector.size(); index++)
		this->append_to_tail(new Node(iIntegerVector[index]));
}

void Node::append_to_tail(Node *iNode)
{
	Node *last_node = this;
	while (last_node->ptr_to_next_node_ != NULL)
		last_node = last_node->ptr_to_next_node_;
	last_node->ptr_to_next_node_ = iNode;
	iNode->ptr_to_prev_node_ = last_node;
}

void Node::delete_all_nodes_behind()
{
	Node *head_node_to_be_deleted = this->ptr_to_next_node_;
	this->ptr_to_next_node_ = NULL;

	for (Node *node_to_be_deleted = head_node_to_be_deleted;
		 head_node_to_be_deleted != NULL;
		 node_to_be_deleted = head_node_to_be_deleted)
	{
		head_node_to_be_deleted = head_node_to_be_deleted->ptr_to_next_node_;
		delete node_to_be_deleted;
	}
}

int Node::calculate_linked_list_length()
{
	int linked_list_length = 1;
	for (Node *next_node = this->ptr_to_next_node_; next_node != NULL; next_node = next_node->ptr_to_next_node_)
		linked_list_length++;

	return linked_list_length;
}
