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
	void setNumBadge(int num);//задание номера жетона
	int num_badge();//возвращает номер жетона
	string fullName();//возвращает номер жетона и полное имя
	evidence find(evidence newev);//метод меняющий состояние улики на найдено 
	Deal openDeal();//метод,открывающий дело 
	void closeDeal(Deal &deal);//метод,закрывающий уже открытое дело 
	~Detective();
};

