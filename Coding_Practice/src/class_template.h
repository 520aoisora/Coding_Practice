#ifndef _CLASS_TEMPLETE_H_
#define _CLASS_TEMPLETE_H_

// 1. Preferred location

// 2. C system files

// 3. C++ system files
#include <iostream>
#include <map>
#include <string>

// 4. Other libraries' .h files

// 5. Your project's .h files

typedef std::string QuestionName;

class ClassTemplate
{

public:

	ClassTemplate() {};

	ClassTemplate(QuestionName iQuestionName);

	static ClassTemplate *CreateQuestionPointerOrNull(std::istream &iQuestionName);

	virtual void RunRegression() const = 0;

protected:

	virtual ClassTemplate *CreateSpecificQuestionPointer() const = 0;

private:

	static std::map<QuestionName, ClassTemplate *>& get_questionName_questionPointer_map();
};

#endif