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
	void setCaseclose(bool c);

public:
	Deal();
	Deal(string name, bool caseclose);
	void add_evidence(evidence e);
	vector<evidence> evidences();
	
	bool caseclose();

	~Deal();
};

