#include "evidence.h"



evidence::evidence()//конструктор по умолчанию
{
	existence_ = false;
	rating_ = "";
}

evidence::evidence(bool ex, string r)//конструктор.который устанавливает найдено/не найдено и прямая/косвенная
{
	setExistence(ex);
	setRating(r);
}


void evidence::setExistence(bool e)//задает найдено/не найдено
{
	existence_ = e;
}

bool evidence::existence()//возвращает
{
	return existence_;
}
void evidence::setRating(string r)//задает прямая/косвенная 
{
	if ((r == "прямая") || (r == "косвенная"))
		rating_ = r;
}
string evidence::rating()//возвращает прямая/косвеная
{
	return rating_;
}
evidence::~evidence()
{
}
