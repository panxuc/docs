#include "employee.h"

int employee::currentEmpNo = 1;

employee::employee()
{
	individualEmpNo = currentEmpNo;
	currentEmpNo++;
	grade = individualEmpNo * 10;
	accumPay = individualEmpNo * 1000;
}

employee::employee(int g, int p)
{
	individualEmpNo = currentEmpNo;
	currentEmpNo++;
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
	employee emp1, emp2, emp3, emp4;
	emp1.set_emp();
	emp2.set_emp();
	emp3.set_emp();
	emp4.set_emp();
	emp1.show();
	emp2.show();
	emp3.show();
	emp4.show();
	return 0;
}