#pragma once
#include "Human.h"
#include "evidence.h"
class Offender :
	public Human
{
	string nickname_;
public:
	Offender(string patronymic, string name, string second_name, string nick);
	string nickname();//возвращает прозвище
	void setNickname(string nick);//задает прозвище 
	evidence mistakes();//создает улику
	string fullName();//возвращает полное имя и прозвище преступника
	~Offender();//деструктор
};

