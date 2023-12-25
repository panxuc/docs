#include "employee.h"

int employee::currentEmpNo = 1;

employee::employee()
{
	individualEmpNo = currentEmpNo; // 职工编号自动产生
	currentEmpNo++;					// 自动加1
	grade = 1;
	accumPay = 1000;
}

employee::employee(int g, int p)
{
	individualEmpNo = currentEmpNo; // 职工编号自动产生
	currentEmpNo++;					// 自动加1
	grade = g;
	accumPay = p;
}

void employee::set_emp()
{
	cout << "请输入编号为" << individualEmpNo << "的员工的级别：" << endl;
	cin >> grade;
	cout << "请输入编号为" << individualEmpNo << "的员工的月薪：" << endl;
	cin >> accumPay;
}

void employee::show()
{
	cout << "正在输出员工信息：" << endl
		 << "编号：" << individualEmpNo << endl
		 << "级别：" << grade << endl
		 << "月薪：" << accumPay << endl
		 << endl;
}

employee::~employee()
{
	cout << "编号为" << individualEmpNo << "的员工，欢迎使用，再见！" << endl;
}

int main()
{
	employee emp[20];
	for (int i = 0; i < 20; i++)
		emp[i].set_emp();
	for (int i = 0; i < 20; i++)
		emp[i].show();
	return 0;
}