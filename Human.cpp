#include "Human.h"




Human::Human()
{

}

Human::Human(string patronymic, string name, string second_name)
{
	setPatronymic(patronymic);
	setName(name);
	setSName( second_name);
}

void Human::setName(string name)
{
	name_ = name;
}

void Human::setPatronymic(string patronymic)
{
	patronymic_ = patronymic;
}

void Human::setSName(string sec_name)
{
	second_name_ = sec_name;
}


string Human::fullName()
{
	return name_+" "+second_name_+" "+ patronymic_;
}


Human::~Human()
{
}
