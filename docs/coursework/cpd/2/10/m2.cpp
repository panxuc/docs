#include <iostream>
#include <fstream>
#include <strstream>
#include <cstring>
using namespace std;
struct student
{
	int num;
	char name[20];
	float score;
};
int main()
{
	student stud[3] = {1001, "Li", 78, 1002, "Wang", 89.5, 1004, "Fun", 90};
	student stude[3];
	char c[50];
	ostrstream strout(c, 50);
	for (int i = 0; i < 3; i++)
		strout << stud[i].num << " " << stud[i].name << " " << stud[i].score << " ";
	strout << ends;
	istrstream strin(c, sizeof(c));
	for (int i = 0; i < 3; i++)
		strin >> stude[i].num >> stude[i].name >> stude[i].score;
	ofstream fout("stud.dat", ios::binary);
	fout.write((char *)stude, sizeof(stude));
	fout.close();
	return 0;
}