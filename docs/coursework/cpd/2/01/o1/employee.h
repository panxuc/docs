#include <iostream>
using namespace std;
class employee
{
public:
	void set_emp()
	{
		cin >> individualEmpNo >> grade >> accumPay;
	};
	void show()
	{
		cout << endl
			 << "Showing Employee Information:\n"
			 << "individualEmpNo:" << individualEmpNo << endl
			 << "grade:" << grade << endl
			 << "accumPay:" << accumPay << endl;
	};

private:
	int individualEmpNo;
	int grade;
	int accumPay;
};