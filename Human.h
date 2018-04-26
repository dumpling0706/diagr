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
	void setName(string name);//задать имя
	void setPatronymic(string patronymic);// -|||- отчество 
	void setSName(string sec_name);//-|||- фамилию
	string fullName();//возвращает полное имя

	~Human();//деструктор

		

		
};
