#include <iostream>
#include <cstring>
using namespace std;

istream &operator>>(istream &input, char *str)
{
	char temp = 0;
	for (int i = 0; i < 100; i++)
	{
		temp = getchar();
		if (temp != '\n')
			str[i] = temp;
		else
			break;
	}
	return input;
}

int main()
{
	char s0[100] = {0}, s1[100] = {0}, s2[100] = {0};
	char temp = 0;
	cin >> s0;
	cin.get(s1, 100);
	cin.ignore(1);
	cin.getline(s2, 100);
	cout << "使用“>>”输入的字符串的字符的个数为" << strlen(s0) << endl;
	cout << "使用“cin.get()”输入的字符串的字符的个数为" << strlen(s1) << endl;
	cout << "使用“cin.getline()”输入的字符串的字符的个数为" << strlen(s2) << endl;
	return 0;
}