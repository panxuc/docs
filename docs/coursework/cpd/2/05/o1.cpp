#include <iostream>
#include <cstring>
using namespace std;
class Teacher
{
public:
	Teacher(char *_name = "Teacher", char *_number = "000000", char *_sex = "M", double _score = 0.0)
	{
		name = new char[strlen(_name)];
		strcpy(name, _name);
		number = new char[strlen(_number)];
		strcpy(number, _number);
		sex = new char[strlen(_sex)];
		strcpy(sex, _sex);
		score = _score;
	}
	~Teacher()
	{
		delete[] name;
		delete[] number;
		delete[] sex;
	}
	char *getName()
	{
		return name;
	}
	char *getNumber()
	{
		return number;
	}
	char *getSex()
	{
		return sex;
	}
	void print()
	{
		cout << "Teacher Info:" << endl
			 << "Name: " << name << endl
			 << "Number: " << number << endl
			 << "Sex: " << sex << endl
			 << "Score: " << score << endl;
	}

private:
	char *name;
	char *number;
	char *sex;
	double score;
};
class Student
{
public:
	Student(char *_name = "Student", char *_number = "000000", char *_sex = "M", double _gpa = 0.0)
	{
		name = new char[strlen(_name)];
		strcpy(name, _name);
		number = new char[strlen(_number)];
		strcpy(number, _number);
		sex = new char[strlen(_sex)];
		strcpy(sex, _sex);
		gpa = _gpa;
	}
	~Student()
	{
		delete[] name;
		delete[] number;
		delete[] sex;
	}
	char *getName()
	{
		return name;
	}
	char *getNumber()
	{
		return number;
	}
	char *getSex()
	{
		return sex;
	}
	void print()
	{
		cout << "Student Info:" << endl
			 << "Name: " << name << endl
			 << "Number: " << number << endl
			 << "Sex: " << sex << endl
			 << "GPA: " << gpa << endl;
	}
	void convert(Teacher &tea);

private:
	char *name;
	char *number;
	char *sex;
	double gpa;
};

void Student::convert(Teacher &tea)
{
	delete[] name;
	name = new char[strlen(tea.getName())];
	strcpy(name, tea.getName());
	delete[] number;
	number = new char[strlen(tea.getNumber())];
	strcpy(number, tea.getNumber());
	delete[] sex;
	sex = new char[strlen(tea.getSex())];
	strcpy(sex, tea.getSex());
}
int main()
{
	Teacher tea("Tadokoro", "114514", "Male", 100);
	Student stu("Kouji", "1919810", "Male", 4.0);
	stu.convert(tea);
	tea.print();
	cout << endl;
	stu.print();
}