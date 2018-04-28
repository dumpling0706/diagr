#include "Deal.h"
#include "Detective.h"
#include "Offender.h"
#include <iostream>


using namespace std;
int main(){


	Detective d("Pishavich","Pisha", "Pishov",156456489);//создается экземпляр класса детектив
	cout<<d.fullName()<< endl;
	Deal as = d.openDeal();//детектив d открывает дело as
	Offender o("Pavlovich", "Pasha", "Shishmarov", "Shishmar");
	
	cout << "input count of evidence";
	auto u = 0;
	cin >> u;
	vector<evidence> ev;//создается список улик 
	ev.resize(u);
	for (auto i = 0; i < u; i++)
	{
		ev[i] = o.mistakes();//преступник создает улику
		d.find(ev[i]);//детектив ее находит
		as.add_evidence(ev[i]);//улика добавляется в список улик дела 
		string  q;
		cout << "input rating evidence";
		cin >> q;
		ev[i].setRating(q);//задается прямая /косвенная

	}
	bool ss=false;
	//vector <evidence> ev = as.evidences();
	for (auto i = 0; i < u; i++)//цикл проверяющий прямые ли в деле улики
		if (ev[i].rating() == "прямая")
			ss = true;
		

	if (ev.size() >= 4 && ss==true)//если кол-во улик больше 4 и все они прямые то
	{
		d.closeDeal(as);//дело закрывается

		cout << "deal with it" << endl;
		cout << o.fullName() <<endl;//вывод имени преступника 
	}

	system("pause");
	return 0;
}
