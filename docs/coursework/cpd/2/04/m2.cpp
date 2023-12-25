#include <iostream>
#include <cstring>
using namespace std;

class string_
{
public:
	char *str;
	string_()
	{
		str = new char[0];
	}
	string_(int len)
	{
		str = new char[len + 1];
	}
	string_(const string_ &s)
	{
		str = new char[strlen(s.str) + 1];
		strcpy(str, s.str);
	}
	string_(const char *s)
	{
		str = new char[strlen(s) + 1];
		strcpy(str, s);
	}
	~string_()
	{
		delete[] str;
	}
	bool operator==(const string_ &s)
	{
		bool ret = true;
		if (strlen(str) == strlen(s.str))
			for (int i = 0; i < strlen(str); i++)
				if (str[i] != s.str[i])
				{
					ret = false;
					break;
				}
				else
					ret = false;
		return ret;
	}
	bool operator>(const string_ &s)
	{
		bool ret = false;
		for (int i = 0; i < (strlen(str) >= strlen(s.str) ? strlen(s.str) : strlen(str)); i++)
		{
			if (str[i] < s.str[i])
				break;
			else if (str[i] > s.str[i])
			{
				ret = true;
				break;
			}
		}
		return ret;
	}
	bool operator<(const string_ &s)
	{
		bool ret = false;
		for (int i = 0; i < (strlen(str) >= strlen(s.str) ? strlen(s.str) : strlen(str)); i++)
		{
			if (str[i] > s.str[i])
				break;
			else if (str[i] < s.str[i])
			{
				ret = true;
				break;
			}
		}
		return ret;
	}
	string_ operator+(const string_ &s)
	{
		string_ temp(strlen(str) + strlen(s.str));
		strcpy(temp.str, str);
		strcpy(&temp.str[strlen(str) + 1], s.str);
		return temp;
	}
	void operator=(const string_ &s)
	{
		delete[] str;
		str = new char[strlen(s.str) + 1];
		strcpy(str, s.str);
	}
	void operator=(const char *s)
	{
		delete[] str;
		str = new char[strlen(s) + 1];
		strcpy(str, s);
	}
};

struct Position
{
	int x, y;
};

class ChessBoard;
class player;

class ChessBoard
{
public:											// 为避免麻烦全部公有
	ChessBoard(int s = 15);						// 声明构造函数
	void init();								// 声明初始化棋盘函数
	void show();								// 声明展示棋盘函数
	bool setchess(int x, int y, int chesstype); // 声明全局下子函数
	char judge(player &p);						// 声明判断输赢函数
	~ChessBoard();								// 声明析构函数
	char **boardinfo;							// 棋盘
	static int step;							// 总步数
	int size;									// 棋盘大小
};

int ChessBoard::step = 0;

class player
{
public:
	player(char *n = "PlayerUnknown");					   // 声明构造函数
	void setchess(ChessBoard &board);					   // 声明玩家下子函数
	void setname(char *n);								   // 声明玩家设置名称函数
	string_ getname();									   // 声明玩家获取名称函数
	char getChessType();								   // 声明玩家获取棋子类型函数
	Position getLastChess();							   // 声明获取玩家最后一步落子位置函数
	bool checkRow(ChessBoard &board, Position lastChess);  // 声明检查是否五子连珠函数
	bool checkCol(ChessBoard &board, Position lastChess);  // 声明检查是否五子连珠函数
	bool checkDiag(ChessBoard &board, Position lastChess); // 声明检查是否五子连珠函数
	bool checkGaid(ChessBoard &board, Position lastChess); // 声明检查是否五子连珠函数
	~player();											   // 声明析构函数

private:
	string_ name;			// 玩家名称
	char chesstype;			// 棋子类型
	Position chesspos[114]; // 玩家每步落子位置
	int currentStep;		// 当前步数
	static char temp;
};

char player::temp = 1;

// 棋盘构造函数
ChessBoard::ChessBoard(int s)
{
	size = s;
	init();
}

// 棋盘初始化函数
void ChessBoard::init()
{
	boardinfo = new char *[size];
	for (int i = 0; i < size; i++)
	{
		boardinfo[i] = new char[size];
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			boardinfo[i][j] = 0;
		}
	}
}

// 棋盘展示函数
void ChessBoard::show()
{
	system("clear"); // Windows `system("cls");`
	printf(" ");
	for (int i = 0; i < size; i++)
		printf("%d", i % 10);
	printf("\n");
	for (int i = 0; i < size; i++)
	{
		printf("%d", i % 10);
		for (int j = 0; j < size; j++)
		{
			switch (boardinfo[i][j])
			{
			case 0:
				if (i > 0 && j > 0 && i < size - 1 && j < size - 1)
					printf("┼");
				else if (i == 0 && j > 0 && j < size - 1)
					printf("┬");
				else if (i == size - 1 && j > 0 && j < size - 1)
					printf("┴");
				else if (j == 0 && i > 0 && i < size - 1)
					printf("├");
				else if (j == size - 1 && i > 0 && i < size - 1)
					printf("┤");
				else if (i == 0 && j == 0)
					printf("┌");
				else if (i == 0 && j == size - 1)
					printf("┐");
				else if (i == size - 1 && j == 0)
					printf("└");
				else if (i == size - 1 && j == size - 1)
					printf("┘");
				break;
			case 1:
				printf("●");
				break;
			case 2:
				printf("○");
				break;
			}
		}
		printf("\n");
	}
}

// 全局下子函数
bool ChessBoard::setchess(int x, int y, int chesstype)
{
	if (x >= 0 && x < size && y >= 0 && y < size)
	{
		if (!boardinfo[x][y])
		{
			boardinfo[x][y] = chesstype;
			step++;
			return true;
		}
		else
		{
			printf("该位置已被占用！\n");
			return false;
		}
	}
	else
	{
		printf("该位置超出范围！\n");
		return false;
	}
}

// 全局判断输赢函数
char ChessBoard::judge(player &p)
{
	Position lastChess = p.getLastChess();
	if (p.checkRow(*this, lastChess) || p.checkCol(*this, lastChess) || p.checkDiag(*this, lastChess) || p.checkGaid(*this, lastChess))
		return p.getChessType();
	else
		return 0;
}

// 棋盘析构函数
ChessBoard::~ChessBoard()
{
	for (int i = 0; i < size; i++)
	{
		delete[] boardinfo[i];
	}
	delete[] boardinfo;
}

// 玩家构造函数
player::player(char *n)
{
	name = n;
	currentStep = 0;
	chesstype = temp;
	temp++;
}

// 玩家下子函数
void player::setchess(ChessBoard &board)
{
	bool flag;
	Position currentchess;
	do
	{
		cout << name.str << "，请输入下子的位置：（纵向x 横向y）" << endl;
		cin >> currentchess.x >> currentchess.y;
		flag = board.setchess(currentchess.x, currentchess.y, chesstype);
	} while (!flag);
	chesspos[currentStep] = currentchess;
	currentStep++;
}

// 玩家设置名称函数
void player::setname(char *n)
{
	name = n;
}

// 玩家获取名称函数
string_ player::getname()
{
	return name;
}

// 玩家获取棋子类型函数
char player::getChessType()
{
	return chesstype;
}

// 玩家获取最后一步落子位置函数
Position player::getLastChess()
{
	return chesspos[currentStep - 1];
}

// 检查是否五子连珠
bool player::checkRow(ChessBoard &board, Position lastChess)
{
	int count = 0;
	bool flag = false;
	for (int i = ((lastChess.x < 4) ? 0 : lastChess.x - 4); i <= ((lastChess.x > board.size - 5) ? board.size - 1 : lastChess.x + 4); i++)
	{
		if (board.boardinfo[i][lastChess.y] == chesstype)
			count++;
		else
			count = 0;
		if (count >= 5)
		{
			flag = true;
			break;
		}
	}
	return flag;
}

// 检查是否五子连珠
bool player::checkCol(ChessBoard &board, Position lastChess)
{
	int count = 0;
	bool flag = false;
	for (int i = ((lastChess.y < 4) ? 0 : lastChess.y - 4); i <= ((lastChess.y > board.size - 5) ? board.size - 1 : lastChess.y + 4); i++)
	{
		if (board.boardinfo[lastChess.x][i] == chesstype)
			count++;
		else
			count = 0;
		if (count >= 5)
		{
			flag = true;
			break;
		}
	}
	return flag;
}

// 检查是否五子连珠
bool player::checkDiag(ChessBoard &board, Position lastChess)
{
	int count = 0;
	bool flag = false;
	for (int i = ((lastChess.x > lastChess.y) ? ((lastChess.y < 4) ? lastChess.x - lastChess.y : lastChess.x - 4) : ((lastChess.x < 4) ? 0 : lastChess.x - 4)); i <= ((lastChess.x > lastChess.y) ? ((lastChess.x > board.size - 5) ? board.size - 1 : lastChess.x + 4) : ((lastChess.y > board.size - 5) ? board.size - lastChess.y + lastChess.x - 1 : lastChess.x + 4)); i++)
	{
		if (board.boardinfo[i][i + lastChess.y - lastChess.x] == chesstype)
			count++;
		else
			count = 0;
		if (count >= 5)
		{
			flag = true;
			break;
		}
	}
	return flag;
}

// 检查是否五子连珠
bool player::checkGaid(ChessBoard &board, Position lastChess)
{
	int x = lastChess.x, y = lastChess.y;
	char **_boardinfo = new char *[board.size];
	for (int i = 0; i < board.size; i++)
	{
		_boardinfo[i] = new char[board.size];
	}
	for (int i = 0; i < board.size; i++)
	{
		for (int j = 0; j < board.size; j++)
		{
			_boardinfo[i][j] = board.boardinfo[i][board.size - j - 1];
		}
	}
	int count = 0;
	bool flag = false;
	y = board.size - y - 1;
	for (int i = ((x > y) ? ((y < 4) ? x - y : x - 4) : ((x < 4) ? 0 : x - 4)); i <= ((x > y) ? ((x > board.size - 5) ? board.size - 1 : x + 4) : ((y > board.size - 5) ? board.size - y + x - 1 : x + 4)); i++)
	{
		if (_boardinfo[i][i + y - x] == chesstype)
			count++;
		else
			count = 0;
		if (count >= 5)
		{
			flag = true;
			break;
		}
	}
	for (int i = 0; i < board.size; i++)
	{
		delete[] _boardinfo[i];
	}
	delete[] _boardinfo;
	return flag;
}

// 玩家析构函数
player::~player()
{
}

int main()
{
	char p1n[17] = {0}, p2n[17] = {0};
	int size = 0;
	char flag = 0;
	player p[2];
	int i = 0;
	cout << "--五子棋--" << endl
		 << endl;
	cout << "输入玩家名称：" << endl
		 << ">>> ";
	cin >> p1n;
	cout << "输入玩家名称：" << endl
		 << ">>> ";
	cin >> p2n;
	cout << "输入棋盘大小：" << endl
		 << ">>> ";
	cin >> size;
	p[0].setname(p1n);
	p[1].setname(p2n);
	if (p[0].getname().operator<(p[1].getname()))
	{
		p[0].setname(p2n);
		p[1].setname(p1n);
	}
	ChessBoard board(size);
	do
	{
		board.show();
		cout << p[i].getname().str << "来下第" << board.step + 1 << "步棋！";
		p[i].setchess(board);
		flag = board.judge(p[i]);
		i++;
		i %= 2;
	} while (!flag);
	board.show();
	cout << "本场游戏共下了" << board.step << "步棋，最终" << ((flag % 2) ? p[0].getname().str : p[1].getname().str) << "获胜！" << endl;
	return 0;
}