#include <iostream>
using namespace std;
class employee
{
public:
	employee();
	employee(int g, int p);
	void set_emp();
	void show();
	~employee();

private:
	int individualEmpNo;
	int grade;
	int accumPay;
	static int currentEmpNo;
};