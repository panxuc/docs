#include <iostream>
using namespace std;
class Date
{
	int d, m, y;

public:
	Date(int dd = 0, int mm = 0, int yy = 0);
	void addDay();
	friend Date operator++(Date &D);
	friend Date operator++(Date &D, int);
	void Print()
	{
		cout << d << ", " << m << ", " << y << endl;
	}
};
Date operator++(Date &D)
{
	D.addDay();
	return D;
}
Date operator++(Date &D, int)
{
	Date temp(D.d, D.m, D.y);
	D.addDay();
	return temp;
}