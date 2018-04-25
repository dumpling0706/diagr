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
	void setNumBadge(int num);
	int num_badge();
	string fullName();
	evidence find(evidence newev);
	Deal openDeal();
	void closeDeal(Deal &deal);
	~Detective();
};

