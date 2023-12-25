#include <iostream>
using namespace std;

#define SIZE 15

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
	void show();
	bool setchess(int x, int y, int chesstype);

private:
	short boardinfo[SIZE][SIZE] = {0};
} board;

class player
{
public:
	void setchess();
	void setplayer();

private:
	char name[17] = {0};
	int chesstype;
	Position chesspos[114] = {{0, 0}};
} p1, p2;

void ChessBoard::show()
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			switch (boardinfo[i][j])
			{
			case 0:
				if (i > 0 && j > 0 && i < SIZE - 1 && j < SIZE - 1)
					printf("┼");
				else if (i == 0 && j > 0 && j < SIZE - 1)
					printf("┬");
				else if (i == SIZE - 1 && j > 0 && j < SIZE - 1)
					printf("┴");
				else if (j == 0 && i > 0 && i < SIZE - 1)
					printf("├");
				else if (j == SIZE - 1 && i > 0 && i < SIZE - 1)
					printf("┤");
				else if (i == 0 && j == 0)
					printf("┌");
				else if (i == 0 && j == SIZE - 1)
					printf("┐");
				else if (i == SIZE - 1 && j == 0)
					printf("└");
				else if (i == SIZE - 1 && j == SIZE - 1)
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
	if (x >= 0 && x < SIZE && y >= 0 && y < SIZE)
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
}

void player::setplayer()
{
	cin >> name;
}

// int main()
// {
// 	board.show();
// }