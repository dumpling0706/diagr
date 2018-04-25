#include "Deal.h"


Deal::Deal()
{

}

Deal::Deal(string name, bool caseclose)
{
	name_ = name;
	setCaseclose(caseclose);
}

//Deal::Deal(Detective det, bool caseclose)
//{
//	det = det_;
//	setCaseclose(caseclose);
//}

void Deal::add_evidence(evidence e)
{
	evidences_.push_back(e);
}


vector<evidence> Deal::evidences()
{
	return evidences_;
}


void Deal::setCaseclose(bool c)
{
	caseclose_ = c;
}

bool Deal::caseclose()
{
	return caseclose_;
}

Deal::~Deal()
{
}
