#include <iostream>
#include <cstring>
using namespace std;

class People
{
public:
	People()
	{
		strcpy(name, "Default");
		strcpy(number, "114514");
		strcpy(sex, "M");
		birthday.y = 1919;
		birthday.m = 8;
		birthday.d = 10;
		strcpy(id, "123456789012345");
	}
	People(People &p)
	{
		strcpy(name, p.name);
		strcpy(number, p.number);
		strcpy(sex, p.sex);
		birthday.y = p.birthday.y;
		birthday.m = p.birthday.m;
		birthday.d = p.birthday.d;
		strcpy(id, p.id);
	}
	~People()
	{
		delete[] name;
		delete[] number;
		delete[] sex;
		delete[] id;
	}
	friend ostream &operator<<(ostream &output, People &p)
	{
		output << "输出人员信息：" << endl
			   << "姓名：" << p.name << endl
			   << "编号：" << p.number << endl
			   << "性别：" << p.sex << endl
			   << "生日：" << p.birthday.m << '/' << p.birthday.d << '/' << p.birthday.y << endl
			   << "身份证号：" << p.id << endl;
	}
	friend istream &operator>>(istream &input, People &p)
	{
		cout << "输入人员信息：" << endl;
		cout << "姓名：";
		input >> p.name;
		cout << "编号：";
		input >> p.number;
		cout << "性别：";
		input >> p.sex;
		cout << "生日：";
		input >> p.birthday.m >> p.birthday.d >> p.birthday.y;
		cout << "身份证号：";
		input >> p.id;
	}

private:
	char name[11];
	char number[7];
	char sex[3];
	class Date
	{
	public:
		int m;
		int d;
		int y;
	} birthday;
	char id[16];
};

int main()
{
	People p[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> p[i];
	}
	for (int i = 0; i < 10; i++)
	{
		cout << p[i];
	}
	return 0;
}