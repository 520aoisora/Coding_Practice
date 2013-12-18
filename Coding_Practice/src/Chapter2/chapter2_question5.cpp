////////////////////////////////////////////////////////////////////////////////////////////////////
//	Question description: You have two numbers represented by a linked list, where each node contains
//						  a single digit. The digits are stored in reverse order, such that the 1's
//						  digit is at the head of the list. Write a function that adds the two
//						  numbers and returns the sum as a linked list.
//
//						  FOLLOW UP
//
//						  Suppose the digits are stored in forward order. Repeat the above problem.
//
//		File description: This file declares class C2Q5 with member function addTwoReverseOrderNumbers
//						  and addTwoForwardOrderNumbers to add two numbers represented by a linked list.
//
////////////////////////////////////////////////////////////////////////////////////////////////////

// 1. Preferred location
#include "chapter2_question5.h"

// 2. C system files

// 3. C++ system files

// 4. Other libraries' .h files

// 5. Your project's .h files

using namespace std;

QuestionName C2Q5::question_name_ = "C2Q5";

C2Q5 C2Q5::question_instance_(C2Q5::question_name_);

ClassTemplate *C2Q5::CreateSpecificQuestionPointer() const
{
	return new C2Q5();
}

void C2Q5::RunRegression() const
{
	vector<int> first_number_vector = { 3, 2, 1};
	Node<int> *first_number_node_head = new Node<int>(first_number_vector);

	vector<int> second_number_vector = { 2, 1 };
	Node<int> *second_number_node_head = new Node<int>(second_number_vector);

	Node<int> *result_head_node = addTwoReverseOrderNumbers(first_number_node_head, second_number_node_head);

	Node<int> *temp_node_ptr = result_head_node;
	while (temp_node_ptr != NULL)
	{
		cout << temp_node_ptr->value_;
		temp_node_ptr = temp_node_ptr->ptr_to_next_node_;
	}
	cout << endl;

	result_head_node = addTwoForwardOrderNumbers(first_number_node_head, second_number_node_head);
	temp_node_ptr = result_head_node;
	while (temp_node_ptr != NULL)
	{
		cout << temp_node_ptr->value_;
		temp_node_ptr = temp_node_ptr->ptr_to_next_node_;
	}
	cout << endl;

	return;
}

Node<int>* C2Q5::addTwoReverseOrderNumbers(Node<int> *iHeadNodeOfFirstNumber, Node<int> *iHeadNodeOfSecondNumber) const
{
	Node<int> *result_head_node = NULL;
	int carry = 0;

	while (iHeadNodeOfFirstNumber != NULL || iHeadNodeOfSecondNumber != NULL)
	{
		int first_digit = 0;
		int second_digit = 0;

		if (iHeadNodeOfFirstNumber != NULL)
		{
			first_digit = iHeadNodeOfFirstNumber->value_;
			iHeadNodeOfFirstNumber = iHeadNodeOfFirstNumber->ptr_to_next_node_;
		}

		if (iHeadNodeOfSecondNumber != NULL)
		{
			second_digit = iHeadNodeOfSecondNumber->value_;
			iHeadNodeOfSecondNumber = iHeadNodeOfSecondNumber->ptr_to_next_node_;
		}

		carry = (first_digit + second_digit + carry) / 10;

		if (result_head_node == NULL)
			result_head_node = new Node<int>((first_digit + second_digit + carry) % 10);
		else
			result_head_node->append_to_tail(new Node<int>((first_digit + second_digit + carry) % 10));
	}

	return result_head_node;
}

Node<int>* addTwoForwardOrderNumbersRecursively(int number_of_digits_first_longer_than_second,
												Node<int> *iHeadNodeOfFirstNumber,
												Node<int> *iHeadNodOfSecondNumber,
												int &carry)
{
	int first_digit = 0;
	int second_digit = 0;
	Node<int> *next_digit_node = NULL;

	if (number_of_digits_first_longer_than_second > 0)
	{
		first_digit = iHeadNodeOfFirstNumber->value_;
		number_of_digits_first_longer_than_second--;
		next_digit_node = addTwoForwardOrderNumbersRecursively(number_of_digits_first_longer_than_second, 
															   iHeadNodeOfFirstNumber->ptr_to_next_node_, 
															   iHeadNodOfSecondNumber, 
															   carry);
	}
	else if (number_of_digits_first_longer_than_second < 0)
	{
		second_digit = iHeadNodOfSecondNumber->value_;
		number_of_digits_first_longer_than_second++;
		next_digit_node = addTwoForwardOrderNumbersRecursively(number_of_digits_first_longer_than_second,
															   iHeadNodeOfFirstNumber,
															   iHeadNodOfSecondNumber->ptr_to_next_node_,
															   carry);
	}
	else
	{
		first_digit = iHeadNodeOfFirstNumber->value_;
		second_digit = iHeadNodOfSecondNumber->value_;
		if (iHeadNodeOfFirstNumber->ptr_to_next_node_ != NULL)
		{
			next_digit_node = addTwoForwardOrderNumbersRecursively(number_of_digits_first_longer_than_second,
																   iHeadNodeOfFirstNumber->ptr_to_next_node_,
																   iHeadNodOfSecondNumber->ptr_to_next_node_,
																   carry);
		}
		else
		{
			carry = (first_digit + second_digit) / 10;
			return new Node<int>((first_digit + second_digit) % 10);
		}
	}

	carry = (first_digit + second_digit) / 10;
	Node<int> *current_digit_node = new Node<int>((first_digit + second_digit) % 10);
	current_digit_node->ptr_to_next_node_ = next_digit_node;
	return current_digit_node;
}

Node<int>* C2Q5::addTwoForwardOrderNumbers(Node<int> *iHeadNodeOfFirstNumber, Node<int> *iHeadNodeOfSecondNumber) const
{
	Node<int> *result_head_node = NULL;
	int carry = 0;

	return addTwoForwardOrderNumbersRecursively((iHeadNodeOfFirstNumber->calculate_linked_list_length() - iHeadNodeOfSecondNumber->calculate_linked_list_length()),
												iHeadNodeOfFirstNumber,
												iHeadNodeOfSecondNumber,
												carry);
}
