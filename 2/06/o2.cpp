#include <iostream>
#include "string"
using namespace std;
class tester
{
public:
	tester() : i(5), ch('x'){};

private:
	int i;
	char ch;
};
class tester1 : public tester
{
private:
	int y = 0;
};
int main(void)
{
	tester1 myTester1;
	char *p = NULL;
	p = (char *)&myTester1 + sizeof(int);
	cout << "Address of ch = " << (void *)p << endl;
	cout << "ch = " << *(p) << endl;
	// getchar();
	*p = 'y';
	cout << "Now ch = " << *(p) << endl;
	return 0;
}