#pragma once
#include "Human.h"
#include "evidence.h"
class Offender :
	public Human
{
	string nickname_;
public:
	Offender(string patronymic, string name, string second_name, string nick);
	string nickname();
	void setNickname(string nick);
	evidence mistakes();
	string fullName();
	~Offender();
};

