#include <iostream>
#include <cstring>
using namespace std;
class Mammal
{
public:
	Mammal(char *s = "114514")
	{
		len = strlen(s);
		str = new char[len + 1];
		strcpy(str, s);
	}
	virtual void Speak()
	{
		cout << " ";
		for (int i = 0; i < len + 2; i++)
			cout << "_";
		cout << " " << endl
			 << "< " << str << " >" << endl
			 << " ";
		for (int i = 0; i < len + 2; i++)
			cout << "-";
		cout << " " << endl
			 << "  \\   ^__^" << endl
			 << "   \\  (oo)\\_______" << endl
			 << "      (__)\\       )\\/\\" << endl
			 << "          ||----w |" << endl
			 << "          ||     ||" << endl
			 << endl;
	}
	~Mammal()
	{
		delete[] str;
	}

protected:
	char *str;
	int len;
};

class Dog : virtual public Mammal
{
public:
	Dog(char *s = "114514")
	{
		len = strlen(s);
		str = new char[len + 1];
		strcpy(str, s);
	}
	virtual void Speak()
	{
		cout << " ";
		for (int i = 0; i < len + 2; i++)
			cout << "_";
		cout << " " << endl
			 << "< " << str << " >" << endl
			 << " ";
		for (int i = 0; i < len + 2; i++)
			cout << "-";
		cout << " " << endl
			 << "      \\                    / \\  //\\" << endl
			 << "       \\    |\\___/|      /   \\//  \\" << endl
			 << "            /0  0  \\__  /    //  | \\ \\    " << endl
			 << "           /     /  \\/_/    //   |  \\  \\  " << endl
			 << "           @_^_@'/   \\/_   //    |   \\   \\ " << endl
			 << "           //_^_/     \\/_ //     |    \\    \\" << endl
			 << "        ( //) |        \\///      |     \\     \\" << endl
			 << "      ( / /) _|_ /   )  //       |      \\     _\\" << endl
			 << "    ( // /) '/,_ _ _/  ( ; -.    |    _ _\\.-~        .-~~~^-." << endl
			 << "  (( / / )) ,-{        _      `-.|.-~-.           .~         `." << endl
			 << " (( // / ))  '/\\      /                 ~-. _ .-~      .-~^-.  \\" << endl
			 << " (( /// ))      `.   {            }                   /      \\  \\" << endl
			 << "  (( / ))     .----~-.\\        \\-'                 .~         \\  `. \\^-." << endl
			 << "             ///.----..>        \\             _ -~             `.  ^-`  ^-_" << endl
			 << "               ///-._ _ _ _ _ _ _}^ - - - - ~                     ~-- ,.-~" << endl
			 << "                                                                  /.-~" << endl
			 << endl;
	}
};

int main()
{
	Mammal m("I'm a mammal.");
	Dog d("I'm a dog.");
	m.Speak();
	d.Speak();
	return 0;
}