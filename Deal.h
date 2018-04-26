#pragma once
#include "evidence.h"
#include <vector>

using namespace std;
class Deal
{
	friend class Detective;
	vector<evidence> evidences_;
	string name_;
	bool caseclose_;
	void setCaseclose(bool c);//задает закрыто дело или нет 

public:
	Deal();
	Deal(string name, bool caseclose);
	void add_evidence(evidence e);//добавляет улики в список
	vector<evidence> evidences();//возвращает список улик
	bool caseclose();//возвращает состояние дела;

	~Deal();
};

