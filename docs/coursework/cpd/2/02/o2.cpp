#include <iostream>
#include <cstring>
using namespace std;
class Strings
{
public:
	Strings(char *s);
	~Strings();
	void Print();
	void Set(char *s);

private:
	int length;
	char *str;
};

Strings::Strings(char *s)
{
	length = strlen(s);
	str = new char[length + 1];
	strcpy(str, s);
}

Strings::~Strings()
{
	delete[] str;
}

void Strings::Print()
{
	cout << "str = " << str << endl
		 << "length = " << length << endl;
}

void Strings::Set(char *s)
{
	delete[] str;
	length = strlen(s);
	str = new char[length + 1];
	strcpy(str, s);
}

int main()
{
	Strings str1("114");
	Strings str2("514");
	str1.Print();
	str2.Print();
	return 0;
}