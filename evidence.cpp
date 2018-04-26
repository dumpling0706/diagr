#include "evidence.h"



evidence::evidence()
{
	existence_ = false;
	rating_ = "";
}

evidence::evidence(bool ex, string r)
{
	setExistence(ex);
	setRating(r);
}


void evidence::setExistence(bool e)
{
	existence_ = e;
}

bool evidence::existence()
{
	return existence_;
}
void evidence::setRating(string r)
{
	if ((r == "прямая") || (r == "косвенная"))
		rating_ = r;
}
string evidence::rating()
{
	return rating_;
}
evidence::~evidence()
{
}
