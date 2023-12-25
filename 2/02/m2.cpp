#include <iostream>
#include <cstring>
using namespace std;

struct Position
{
	int x, y;
};

enum ChessColor
{
	black = 1,
	white = 2
};

class ChessBoard
{
public:
	ChessBoard();
	ChessBoard(int s);
	void init();
	void show();
	bool setchess(int x, int y, int chesstype);
	~ChessBoard();

private:
	int size;
	char **boardinfo;
} board;

class player
{
public:
	player();
	player(char *n);
	void setchess();
	void setname(char *n);
	~player();

private:
	char *name;
	int chesstype;
	Position chesspos[114];
	int currentStep;
} p1, p2;

ChessBoard::ChessBoard()
{
	size = 15;
	init();
}

ChessBoard::ChessBoard(int s)
{
	size = s;
	init();
}

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

void ChessBoard::show()
{
	for (int i = 0; i < size; i++)
	{
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

bool ChessBoard::setchess(int x, int y, int chesstype)
{
	if (x >= 0 && x < size && y >= 0 && y < size)
	{
		if (!boardinfo[x][y])
		{
			boardinfo[x][y] = chesstype;
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

ChessBoard::~ChessBoard()
{
	for (int i = 0; i < size; i++)
	{
		delete[] boardinfo[i];
	}
	delete[] boardinfo;
}

player::player()
{
	name = new char[14];
	strcpy(name, "PlayerUnknown");
	currentStep = 0;
}

player::player(char *n)
{
	name = new char[strlen(n) + 1];
	strcpy(name, n);
	currentStep = 0;
}

void player::setchess()
{
	bool flag;
	Position currentchess;
	do
	{
		printf("请输入下子的位置：");
		cin >> currentchess.x >> currentchess.y;
		flag = board.setchess(currentchess.x, currentchess.y, chesstype);
	} while (!flag);
	chesspos[currentStep] = currentchess;
	currentStep++;
}

void player::setname(char *n)
{
	delete[] name;
	name = new char[strlen(n) + 1];
	strcpy(name, n);
}

player::~player()
{
	delete[] name;
}

int main()
{
	board.show();
}