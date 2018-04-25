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
	void setEvid(bool e);
	bool existence();
	void setRating(string r );
	string rating();
	~evidence();
};

