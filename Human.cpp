#include "Human.h"




Human::Human()
{

}

Human::Human(string patronymic, string name, string second_name)//задает отчество,имя,фамилию
{
	setPatronymic(patronymic);
	setName(name);
	setSName( second_name);
}

void Human::setName(string name)//установка имени,передаваемым параметром name
{
	name_ = name;//помещаем имя в переменную name_
}

void Human::setPatronymic(string patronymic)//установка отчества
{
	patronymic_ = patronymic;
}

void Human::setSName(string sec_name)//установка фамилии 
{
	second_name_ = sec_name;
}


string Human::fullName()//возвращает строку(полное имя)
{
	return name_+" "+second_name_+" "+ patronymic_;
}


Human::~Human()//деструктор
{
}
