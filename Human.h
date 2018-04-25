#pragma once
#include <string>
#include <sstream>

using namespace std;
class Human
{
protected:
	string patronymic_, name_, second_name_;//поля класса

public:
	//конструктор класса 
	Human();
	Human(string patronymic, string name, string second_name);
	void setName(string name);
	void setPatronymic(string patronymic);
	void setSName(string sec_name);
	string fullName();

	~Human();//деструктор

		

		
};
