#ifndef _NODE_H_
#define _NODE_H_

#include <iostream>
#include <vector>

class Node
{
public:
	Node(const int &iValue) : int_value_(iValue) {};
	Node(const double &iValue) : double_value_(iValue) {};
	Node(const char &iValue) : char_value_(iValue) {};
	Node(const bool &iValue) : bool_value_(iValue) {};
	Node(const std::string &iString);
	Node(const std::vector<int> &iIntegerVector);

public:
	void append_to_tail(Node *iNode);
	void delete_all_nodes_behind();

public:
	int int_value_ = 0;
	double double_value_ = 0;
	char char_value_ = '\0';
	bool bool_value_ = false;

	Node *ptr_to_next_node_ = NULL;
	Node *ptr_to_prev_node_ = NULL;
};

#endif