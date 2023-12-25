#include <iostream>
using namespace std;
class employee
{
public:
	employee()
	{
		individualEmpNo = currentEmpNo; // 职工编号自动产生
		currentEmpNo++;					// 自动加1
		grade = 1;
		accumPay = 1000;
	}
	employee(int g, int p)
	{
		individualEmpNo = currentEmpNo; // 职工编号自动产生
		currentEmpNo++;					// 自动加1
		grade = g;
		accumPay = p;
	}
	void set_emp()
	{
		cout << "请输入编号为" << individualEmpNo << "的员工的级别：" << endl;
		cin >> grade;
		cout << "请输入编号为" << individualEmpNo << "的员工的月薪：" << endl;
		cin >> accumPay;
	}
	void show()
	{
		cout << "正在输出员工信息：" << endl
			 << "编号：" << individualEmpNo << endl
			 << "级别：" << grade << endl
			 << "月薪：" << accumPay << endl
			 << endl;
	}
	~employee()
	{
		cout << "编号为" << individualEmpNo << "的员工，欢迎使用，再见！" << endl;
	}

protected:
	int individualEmpNo;
	int grade;
	int accumPay;
	static int currentEmpNo;
};

class manager : virtual public employee
{
public:
	manager()
	{
		accumPay = 12000;
	}
	manager(int g, int p)
	{
		grade = g;
		accumPay = p;
	}
	void show()
	{
		cout << "正在输出员工信息：" << endl
			 << "编号：" << individualEmpNo << endl
			 << "岗位：经理" << endl
			 << "级别：" << grade << endl
			 << "月薪：" << accumPay << endl
			 << endl;
	}
};

class technician : virtual public employee
{
public:
	technician()
	{
		workhour = 288;
		accumPay = 260 * workhour;
	}
	technician(int g, int h)
	{
		grade = g;
		workhour = h;
		accumPay = 260 * workhour;
	}
	void set_emp()
	{
		cout << "请输入编号为" << individualEmpNo << "的员工的级别：" << endl;
		cin >> grade;
		cout << "请输入编号为" << individualEmpNo << "的员工的工作时长：" << endl;
		cin >> workhour;
		accumPay = 260 * workhour;
	}
	void show()
	{
		cout << "正在输出员工信息：" << endl
			 << "编号：" << individualEmpNo << endl
			 << "岗位：技术" << endl
			 << "级别：" << grade << endl
			 << "工作时长：" << workhour << endl
			 << "月薪：" << accumPay << endl
			 << endl;
	}

protected:
	int workhour;
};

class salesman : virtual public employee
{
public:
	salesman()
	{
		sale = 114514;
		accumPay = 0.05 * sale;
	}
	salesman(int g, int s)
	{
		grade = g;
		sale = s;
		accumPay = 0.05 * sale;
	}
	void set_emp()
	{
		cout << "请输入编号为" << individualEmpNo << "的员工的级别：" << endl;
		cin >> grade;
		cout << "请输入编号为" << individualEmpNo << "的员工的销售额：" << endl;
		cin >> sale;
		accumPay = 0.05 * sale;
	}
	void show()
	{
		cout << "正在输出员工信息：" << endl
			 << "编号：" << individualEmpNo << endl
			 << "岗位：销售" << endl
			 << "级别：" << grade << endl
			 << "销售额：" << sale << endl
			 << "月薪：" << accumPay << endl
			 << endl;
	}

protected:
	double sale;
	double accumPay;
};

int employee::currentEmpNo = 1;

int main()
{
	manager man;
	technician tech;
	salesman sale;
	man.show();
	tech.show();
	sale.show();
	return 0;
}