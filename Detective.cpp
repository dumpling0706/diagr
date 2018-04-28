#include "Detective.h"

Detective::Detective()//конструктор по умолчанию 
{

}

Detective::Detective(string patronymic, string name, string second_name, int num_b) : Human(patronymic, name, second_name)//конструктор,который задает полное имя детектива и номер жетона
{
	setNumBadge(num_b);
}

void Detective::setNumBadge(int num)//задает номер жетона
{
	if (num>0)//номер жетона не отрицательный
		num_badge_ = num;
}


int Detective::num_badge()//возвращает номер жетона,целое число
{
	return num_badge_;
}

evidence Detective::find(evidence newev)//метод find находит улику и переделывает ее состояние в найдено.
{
	newev.setEvid(true);
	return newev;
}

Deal Detective::openDeal()//метод, открывающий дело с именем детектива и состоянием открыто.
{
	return Deal(this->fullName(),false);
}

void Detective::closeDeal(Deal & deal)//метод, закрывающий дело переданное в параметре
{
	deal.setCaseclose(true);
}

string Detective::fullName()// возвращает полное имя и номер жетона
{
	ostringstream convert;
	convert << num_badge_;
	return name_ + " " + second_name_ + " " + patronymic_ + " " + convert.str();
}

Detective::~Detective()
{
}
