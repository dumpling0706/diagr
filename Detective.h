#pragma once
#include "Human.h"
#include "evidence.h"
#include "Deal.h"


class Detective :
	public Human
{
	int num_badge_;

public:
	Detective();
	Detective(string patronymic, string name, string second_name, int num_b);
	void setNumBadge(int num);//задать номер жетона
	int num_badge();//вернуть номер жетона
	string fullName();//вернуть имя и номер жетона
	evidence find(evidence newev);//метод меняющий состояние улики на найдено
	Deal openDeal();//метод, открывающий дело
	void closeDeal(Deal &deal);//метод, закрывающий уже открытое дело
	~Detective();
};

