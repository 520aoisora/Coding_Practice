// 1. Preferred location
#include "class_template.h"

// 2. C system files

// 3. C++ system files
#include <iostream>

// 4. Other libraries' .h files

// 5. Your project's .h files

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