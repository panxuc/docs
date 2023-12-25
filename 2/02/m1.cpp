#include <iostream>
using namespace std;
class Student
{
public:
	Student(int i, int g);
	int getID();
	int getGrade();

private:
	int studentID;
	int grade;
};
Student::Student(int i, int g)
{
	studentID = i;
	grade = g;
}
int Student::getID()
{
	return studentID;
}
int Student::getGrade()
{
	return grade;
}
int main()
{
	Student stu[5] = {Student(1, 100), Student(2, 99), Student(3, 98), Student(4, 97), Student(5, 96)};
	Student *p = stu;
	for (p = stu; p <= stu + 4; p += 2)
		cout << "第" << p - stu + 1 << "个学生的学号为" << p->getID() << "，成绩为" << p->getGrade() << "。" << endl;
	return 0;
}