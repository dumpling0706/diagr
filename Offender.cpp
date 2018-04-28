#include "Offender.h"






Offender::Offender(string patronymic, string name, string second_name, string nick):Human(patronymic, name, second_name)//устанавливает полное имя и прозвище
{
	setNickname(nick);
}

string Offender::nickname()//возвращает  прозвище 
{
	return nickname_;
}

void Offender::setNickname(string nick)//задает прозвище
{
	nickname_ = nick;
}

evidence Offender::mistakes()//возвращает 1 улику
{
	return evidence("");
}

string Offender::fullName()//возвращает полное имя и прозвище 
{
	return name_+" "+ patronymic_+" "+second_name_+" " + nickname_;
}

Offender::~Offender()
{
}
