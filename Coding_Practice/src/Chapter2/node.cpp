#include "Node.h"

using namespace std;

Node::Node(string iString)
{
	if (iString.length() == 0)
		return;

	this->char_value_ = iString[0];

	for (unsigned int index = 1; index < iString.length(); index++)
		this->append_to_tail(new Node(iString[index]));
}

void Node::append_to_tail(Node *iNode)
{
	Node *last_node = this;
	while (last_node->ptr_to_next_node_ != NULL)
		last_node = last_node->ptr_to_next_node_;
	last_node->ptr_to_next_node_ = iNode;
}