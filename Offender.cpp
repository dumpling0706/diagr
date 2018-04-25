#include "Offender.h"






Offender::Offender(string patronymic, string name, string second_name, string nick):Human(patronymic, name, second_name)
{
	setNickname(nick);
}

string Offender::nickname()
{
	return nickname_;
}

void Offender::setNickname(string nick)
{
	nickname_ = nick;
}

evidence Offender::mistakes()
{
	return evidence();
}

string Offender::fullName()
{
	return name_+" "+ patronymic_+" "+second_name_+" " + nickname_;
}

Offender::~Offender()
{
}
