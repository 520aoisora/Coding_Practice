#include <iostream>

#include "Chapter1/chapter1_question1.h"
#include "Chapter1/chapter1_question2.h"
#include "Chapter1/chapter1_question3.h"
#include "Chapter1/chapter1_question4.h"
#include "Chapter1/chapter1_question5.h"
#include "Chapter1/chapter1_question6.h"
#include "Chapter1/chapter1_question7.h"

using namespace std;

int main()
{
	ClassTemplate *question_pointer = NULL;

	do
	{
		cout << "Please enter question name (e.g. C1Q5): ";
		question_pointer = ClassTemplate::CreateQuestionPointerOrNull(cin);

		if (question_pointer == NULL)
		{
			cout << "Sorry. This question doesn't exist in database." << endl;
		}
		else
		{
			question_pointer->RunRegression();
		}
		delete question_pointer;

		string user_choice = "";
		cout << "Do you want to continue testing (Y/N): ";
		cin >> user_choice;
		if (user_choice == "Y")
		{
			cout << string(2, '\n');
		}
		else
		{
			break;
		}
	} while (1);

	return 0;
}