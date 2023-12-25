#include <iostream>
#include <cstring>
using namespace std;

class Student
{
public:
	Student()
	{
		char defname[] = {"DefaultName"};
		stuName = new char[strlen(defname) + 1];
		strcpy(stuName, defname);
	}
	Student(Student &stu)
	{
		stuName = new char[strlen(stu.stuName) + 1];
		strcpy(stuName, stu.stuName);
		stuNo = stu.stuNo;
		stuScore = stu.stuScore;
	}
	void set(char *_stuName, int _stuNo, int _stuScore)
	{
		delete[] stuName;
		stuName = new char[strlen(_stuName) + 1];
		strcpy(stuName, _stuName);
		stuNo = _stuNo;
		stuScore = _stuScore;
	}
	char *getName()
	{
		return stuName;
	}
	int getNo()
	{
		return stuNo;
	}
	int getScore()
	{
		return stuScore;
	}
	void print()
	{
		cout << "Student Info:" << endl
			 << "StuName: " << stuName << endl
			 << "StuNo: " << stuNo << endl
			 << "StuScore: " << stuScore << endl;
	}
	~Student()
	{
		delete[] stuName;
	}

private:
	char *stuName;
	int stuNo;
	int stuScore;
};

Student *max(Student stu[], int n)
{
	Student *p, *max = stu;
	for (p = stu; p - stu < n; p++)
	{
		if (p->getScore() > max->getScore())
			max = p;
	}
	cout << max->getNo() << endl;
	return max;
}

int main()
{
	Student stu[10];
	Student *p;
	stu[0].set("Hitotsu", 1919810, 233);
	stu[1].set("Futatsu", 1919811, 666);
	stu[2].set("Mittsu", 1919812, 114);
	stu[3].set("Yottsu", 1919813, 514);
	stu[4].set("Itsutsu", 1919814, 251);
	stu[5].set("Muttsu", 1919815, 486);
	stu[6].set("Nanatsu", 1919816, 196);
	stu[7].set("Yattsu", 1919817, 384);
	stu[8].set("Kokonotsu", 1919818, 667);
	stu[9].set("Too", 1919819, 665);
	p = max(stu, 10);
	Student newStu(*p);
	newStu.print();
	return 0;
}