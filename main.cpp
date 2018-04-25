#include "Deal.h"
#include "Detective.h"
#include "Offender.h"
#include <iostream>


using namespace std;
int main(){


	Detective d("Pishavich","Pisha", "Pishov",156456489);
	cout<<d.fullName()<< endl;
	Deal as = d.openDeal();
	Offender o("Pavlovich", "Pasha", "Shishmarov", "Shishmar");
	
	cout << "input count of evidence";
	auto u = 0;
	cin >> u;
	vector<evidence> ev;
	ev.resize(u);
	for (auto i = 0; i < u; i++)
	{
		ev[i] = o.mistakes();
		d.find(ev[i]);
		as.add_evidence(ev[i]);
		string  q;
		cout << "input rating evidence";
		cin >> q;
		ev[i].setRating(q);

	}
	bool ss=false;
	//vector <evidence> ev = as.evidences();
	for (auto i = 0; i < u; i++)
		if (ev[i].rating() == "прямая")
			ss = true;
		

	if (ev.size() >= 4 && ss==true)
	{
		d.closeDeal(as);

		cout << "deal with it" << endl;
		cout << o.fullName() <<endl;
	}

	system("pause");
	return 0;
}