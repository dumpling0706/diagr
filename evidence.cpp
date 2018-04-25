#include "evidence.h"



evidence::evidence()
{
	existence_ = false;
	rating_ = "";
}

evidence::evidence(bool ex, string r)
{
	setEvid(ex);
	setRating(r);
}


void evidence::setEvid(bool e)
{
	existence_ = e;
}

bool evidence::existence()
{
	return existence_;
}
void evidence::setRating(string r)
{
	if ((r == "������") || (r == "���������"))
		rating_ = r;
}
string evidence::rating()
{
	return rating_;
}
evidence::~evidence()
{
}
