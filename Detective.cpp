#include "Detective.h"

Detective::Detective()
{

}

Detective::Detective(string patronymic, string name, string second_name, int num_b) : Human(patronymic, name, second_name)
{
	setNumBadge(num_b);
}

void Detective::setNumBadge(int num)//в каком классе находится
{
	if (num>0)
		num_badge_ = num;
}


int Detective::num_badge()
{
	return num_badge_;
}

evidence Detective::find(evidence newev)
{
	newev.setEvid(true);
	return newev;
}

Deal Detective::openDeal()
{
	return Deal(this->fullName(),false);
}

void Detective::closeDeal(Deal & deal)
{
	deal.setCaseclose(true);
}

string Detective::fullName()
{
	ostringstream convert;
	convert << num_badge_;
	return name_ + " " + second_name_ + " " + patronymic_ + " " + convert.str();
}

Detective::~Detective()
{
}
