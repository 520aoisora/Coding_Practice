#ifndef _NODE_H_
#define _NODE_H_

#include <iostream>
#include <vector>

template<typename T>
class Node
{
public:
	Node(const T &iValue) : value_(iValue) {};

	Node(const std::string &iString)
	{
		if (iString.length() == 0)
			return;

		this->value_ = iString[0];

		for (unsigned int index = 1; index < iString.length(); index++)
			this->append_to_tail(new Node<char>(iString[index]));
	}

	Node(const std::vector<int> &iIntegerVector)
	{
		if (iIntegerVector.size() == 0)
			return;
		
		this->value_ = iIntegerVector[0];
		
		for (unsigned int index = 1; index < iIntegerVector.size(); index++)
			this->append_to_tail(new Node<int>(iIntegerVector[index]));
	}

public:
	void append_to_tail(Node<T> *iNode)
	{
		Node<T> *last_node = this;
		while (last_node->ptr_to_next_node_ != NULL)
			last_node = last_node->ptr_to_next_node_;
		last_node->ptr_to_next_node_ = iNode;
		iNode->ptr_to_prev_node_ = last_node;
	}

	void delete_all_nodes_behind()
	{
		Node<T> *head_node_to_be_deleted = this->ptr_to_next_node_;
		this->ptr_to_next_node_ = NULL;

		for (Node<T> *node_to_be_deleted = head_node_to_be_deleted;
			head_node_to_be_deleted != NULL;
			node_to_be_deleted = head_node_to_be_deleted)
		{
			head_node_to_be_deleted = head_node_to_be_deleted->ptr_to_next_node_;
			delete node_to_be_deleted;
		}
	}

	int calculate_linked_list_length()
	{
		int linked_list_length = 1;
		for (Node<T> *next_node = this->ptr_to_next_node_; next_node != NULL; next_node = next_node->ptr_to_next_node_)
			linked_list_length++;
		
		return linked_list_length;
	}

	void display_all_nodes_values_from_current_node()
	{
		Node<T> *node_to_be_displayed = this;
		while (node_to_be_displayed != NULL)
		{
			cout << node_to_be_displayed->value_ << " ";
			node_to_be_displayed = node_to_be_displayed->ptr_to_next_node_;
		}
		cout << endl;
	}

public:
	T value_;

	Node<T> *ptr_to_next_node_ = NULL;
	Node<T> *ptr_to_prev_node_ = NULL;
};

#endif