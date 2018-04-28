#include "Deal.h"


Deal::Deal()//конструктор по умолчанию
{

}

Deal::Deal(string name, bool caseclose)//задает имя детектива,задает открыто ли дело.передаваемым параметром caseclose
{
	name_ = name;
	setCaseclose(caseclose);
}



void Deal::add_evidence(evidence e)//добаляет в список улику
{
	evidences_.push_back(e);
}


vector<evidence> Deal::evidences()//возвращает список улик
{
	return evidences_;
}


void Deal::setCaseclose(bool c)//задает закрытое дело.закрытый метод класса.т к только детектив может закрыть дело
{
	caseclose_ = c;
}

bool Deal::caseclose()//возвращает состояние дела
{
	return caseclose_;
}

Deal::~Deal()
{
}
