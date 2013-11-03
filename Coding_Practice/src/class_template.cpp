// 1. Preferred location
#include "class_Template.h"

// 2. C system files

// 3. C++ system files

// 4. Other libraries' .h files

// 5. Your project's .h files

using namespace std;

ClassTemplate::ClassTemplate(QuestionName iQuestionName)
{
	get_questionName_questionPointer_map()[iQuestionName] = this;
}

// This function is supter important !!!!
// More information can be found through this link
// http://stackoverflow.com/questions/19747920/access-violation-reading-location-0x000000004
map<QuestionName, ClassTemplate *>& ClassTemplate::get_questionName_questionPointer_map()
{
	static map<QuestionName, ClassTemplate *> questionName_questionPointer_map_;

	return questionName_questionPointer_map_;
}

ClassTemplate *ClassTemplate::CreateQuestionPointerOrNull(istream &iQuestionName)
{
	QuestionName entered_question_name;
	iQuestionName >> entered_question_name;
	auto questionName_questionPointer_map_iterator = get_questionName_questionPointer_map().find(entered_question_name);

	if (questionName_questionPointer_map_iterator == get_questionName_questionPointer_map().end())
	{
		return NULL;
	}
	else
	{
		return questionName_questionPointer_map_iterator->second->CreateSpecificQuestionPointer();
	}
}