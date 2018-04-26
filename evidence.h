#pragma once
#include <string>

using namespace std;
class evidence
{
private:
	bool existence_ = false;
	string rating_;
public:
	evidence();
	evidence(bool ex , string r);
	void setExistence(bool e);//меняет наличие улики
	bool existence();//возвращает наличие улики
	void setRating(string r );//задает прямая или косвенная улика
	string rating();//возвращает улику 
	~evidence();
};

