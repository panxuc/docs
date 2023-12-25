# 加分作业

> 本作业在以下方面实现了优化：
> - 优化胜负判定算法，不再使用双重循环遍历整个棋盘，实现资源的合理调度；
> - 优化程序内容，将原本互相独立的不同选手的函数合并，减少代码冗余，做到清晰美观；
> - 改善界面环境，用户界面更加美观；
> - 其他的一些小改进。

```cpp
// 由于使用Okular阅读器直接复制自`张晋珩-五子棋程序设计.pdf`，可能有部分符号（主要体现在全半角和空格上）与原文档不符。

// 为适配我的ArchLinux系统与UTF-8编码环境，更改了部分代码（主要体现在棋盘数组大小和`system("clear");`上）。

// 请使用UTF-8编码环境的Linux或macOS系统编译验收，谢谢。

/*

	// 老师。之前我传给您的版本没有注释，且平局判断过于复杂冗长，因此我对其进行了完善，并进行了注释，还望您重新验收、评定。下面是我对程序的总体说明：

	// 首先，考虑到用户的游戏体验，游戏先询问了玩家的名字，并将其储存下来，以在以后称呼对应的玩家；然后，询问player1的棋型，通过输入12代表黑白，并且如果输入的不是1或2，则会报错并提示玩家重新输入。然后进行简短的游戏说明，就开始绘制棋盘开始游戏。在游戏过程中，玩家通过输入棋子坐标的方式下棋，输入的x、y对应意思是“x行y列”。若输入的坐标为小数，则通过floor函数将其转化为不超过它的最大整数。若转化后的整数仍不属于0~14，则会报错，提示玩家重新输入。每一步下完棋，交给对手下时，都会为后者提示上一步对手下的位置。每次下完棋都通过系统clear命令清屏、重新绘制棋盘，棋盘的绘制是通过记录二维数组的每个元素的值（0、1、2），来判断该在此处画什么形状。至于胜负判断，我们只需要写出四个判断函数，分别是横连线、竖连线、一三象限斜连线、二四象限斜连线。判断胜负无果后再判断平局。这样，我们就可以判断输赢，然后进行结尾的输出，也就是宣布获胜的一方（或平局），然后说“欢迎使用，再见”之类的话。需要注意的是，题目中要求记录双方对弈的点数，我选择用静态类成员变量，理由很简单，因为游戏中有两个玩家类，但是我们要想让两个玩家操作的时候这个计数变量均自增，因此static变量就是一个优选。最后输出这一数据的值即可。为了契合我们所学的内容，析构函数执行时进行了语句说明，体现了三个对象的析构过程。这些就是我五子棋程序的要点。

	// 具体的注释在附件中的程序源代码。

	// 请用VS2012等对中文支持较好的编译器编译验收，谢谢。

*/

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cmath>
using namespace std;

int board[15][15] = {0}; // 定义一个二维数组，来储存棋盘上各点的棋子情况
char type[11];			 // 全局变量，代表Player 1棋型

bool ping() // 判断棋盘是否已下满
{
	bool p = true;
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{ // 遍历棋盘
			if (board[i][j] == 0)
			{
				p = false;
				break;
			}
		}
	}
	return p;
}

class ChessBoard
{
private:
	int x;
	int y;	  // 棋子位置
	int size; // 棋盘大小
public:
	void show(); // 展示棋子位置
	void setx(int a);
	void sety(int a);
	int getx() { return x; }
	int gety() { return y; }														  // 设定棋子位置
	ChessBoard(int sizee = 15, int xx = 0, int yy = 0) : size(sizee), x(xx), y(yy) {} // 构造函数
	~ChessBoard()																	  // 析构函数
	{
		// cout << "Destructor called." << endl; // 调用语句
	}
};

void ChessBoard::show() // 显示对手的上一步
{
	cout << "您的对手的最后一步棋是：" << endl
		 << x << "行" << y << "列" << endl;
}

void ChessBoard::setx(int a)
{
	x = a;
}

void ChessBoard::sety(int a)
{
	y = a;
}

class player // 建立玩家类
{
private:
	char name[21]; // 玩家姓名
	enum chesstype // 枚举变量，定义棋型
	{
		black = 1,
		white
	};
	float px;
	float py;

public:
	static int numb;	   // 静态成员，记录对弈点数
	void setchess(int n);  // 玩家n（1或2）下棋
	int givex();		   // 访问x的端口
	int givey();		   // 访问y的端口
	void give_name(int n); // 赋予名字
	void put_name();	   // 输出名字
	void pick_type();	   // 选择棋型
	void show_type();	   // 展示棋型
	~player()			   // player类的析构函数
	{
		// cout << "Destructor called." << endl;
	}
};

void player::give_name(int n)
{
	printf("%d号玩家，请输入您的姓名（不超过20个字符，汉字被视为3个字符）：", n);
	cin >> name;
	cout << name << "，欢迎您！" << endl;
}

void player::show_type()
{
	printf("所以，%s，您将执", name);
	strcmp(type, "black") ? printf("白子。") : printf("黑子。");
}

void player::pick_type()
{
	cout << "\n"
		 << name << "，您想执何种颜色的棋子？\n黑子将先于白子。\n若选择黑子，请输入“1”；若选择白子，请输入“2”：";
	int a;
	cin >> a;
	switch (a)
	{
	case 1:
		strcpy(type, "black");
		break;
	case 2:
		strcpy(type, "white");
		break;
	default:
		cout << "输入错误！" << endl;
		pick_type();
		break; // 防止恶意输入，提示Input error
	}
}

void player::setchess(int n) // 程序中最重要的函数之一：下棋函数
{
	printf("%s，请落子。请输入您将要落子的行、列坐标。输入示例：7 7 \n", name);
	cin >> px >> py;
	int a, b;
	a = floor(px);
	b = floor(py); // 防止恶意输入小数
	bool loclegal1 = false;
	bool loclegal2 = false;
	bool loclegal = true; // 三个布尔型变量，判断坐标的合法性
	for (int i = 0; i < 15; i++)
	{
		if (floor(px) == i)
			loclegal1 = true;
		if (floor(py) == i)
			loclegal2 = true; // 遍历判断法
	}
	if ((loclegal1 == false) || (loclegal2 == false) || board[a][b] != 0)
		loclegal = false; // 数据越界或下在已有棋子的位置上均会报错
	if (loclegal == false)
	{
		cout << "输入错误！" << endl;
		setchess(n);
	}
	if (loclegal)
	{
		board[a][b] = n; // 如果输入正确，就为二维数组赋值，并增加棋子数
		numb++;
	}
}

int player::givex()
{
	return px;
}

int player::givey()
{
	return py;
}

void player::put_name()
{
	cout << name;
}

// 判断有无竖连线
bool win_shu(int x, int y, int chesstype)
{
	int count = 0;
	bool flag = false;
	for (int i = ((x < 4) ? 0 : x - 4); i <= ((x > 15 - 5) ? 15 - 1 : x + 4); i++) // 取消双层循环遍历棋盘，实现资源优化
	{
		if (board[i][y] == chesstype)
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

// 判断有无横连线
bool win_heng(int x, int y, int chesstype)
{
	int count = 0;
	bool flag = false;
	for (int i = ((y < 4) ? 0 : y - 4); i <= ((y > 15 - 5) ? 15 - 1 : y + 4); i++) // 取消双层循环遍历棋盘，实现资源优化
	{
		if (board[x][i] == chesstype)
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

// 判断有无二四象限斜连线
bool win_xie_1(int x, int y, int chesstype)
{
	int count = 0;
	bool flag = false;
	for (int i = ((x > y) ? ((y < 4) ? x - y : x - 4) : ((x < 4) ? 0 : x - 4)); i <= ((x > y) ? ((x > 15 - 5) ? 15 - 1 : x + 4) : ((y > 15 - 5) ? 15 - y + x - 1 : x + 4)); i++) // 取消双层循环遍历棋盘，实现资源优化
	{
		if (board[i][i + y - x] == chesstype)
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

// 判断有无一三象限斜连线
bool win_xie_2(int x, int y, int chesstype)
{
	int **_boardinfo = new int *[15];
	for (int i = 0; i < 15; i++)
	{
		_boardinfo[i] = new int[15];
	}
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			_boardinfo[i][j] = board[i][15 - j - 1];
		}
	}
	int count = 0;
	bool flag = false;
	y = 15 - y - 1;
	for (int i = ((x > y) ? ((y < 4) ? x - y : x - 4) : ((x < 4) ? 0 : x - 4)); i <= ((x > y) ? ((x > 15 - 5) ? 15 - 1 : x + 4) : ((y > 15 - 5) ? 15 - y + x - 1 : x + 4)); i++) // 取消双层循环遍历棋盘，实现资源优化
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
	for (int i = 0; i < 15; i++)
	{
		delete[] _boardinfo[i];
	}
	delete[] _boardinfo;
	return flag;
}

void drawboard() // 将不同玩家的棋盘绘制函数合并，减少代码冗余
{
	char sign[15][15][7];
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			if (board[i][j] == 0)
				strcpy(sign[i][j], "   \0");
			if (board[i][j] == 1)
				strcpy(sign[i][j], " ● \0");
			if (board[i][j] == 2)
				strcpy(sign[i][j], " ○ \0"); // 根据二维数组元素的值绘制对应位置
		}
	}
	printf("\n当前棋盘的状态是：\n");
	printf("    0   1   2   3   4   5   6   7   8   9   10  11  12  13  14\n");
	printf("  ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐\n");
	for (int i = 0, j = 0; i < 14; i++, j++)
	{
		printf("%2d│%3s│%3s│%3s│%3s│%3s│%3s│%3s│%3s│%3s│%3s│%3s│%3s│%3s│%3s│%3s│%d\n ", j, sign[i][0], sign[i][1], sign[i][2], sign[i][3], sign[i][4], sign[i][5], sign[i][6], sign[i][7], sign[i][8], sign[i][9], sign[i][10], sign[i][11], sign[i][12], sign[i][13], sign[i][14], j);
		printf(" ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤\n");
	}
	printf("14│%3s│%3s│%3s│%3s│%3s│%3s│%3s│%3s│%3s│%3s│%3s│%3s│%3s│%3s│%3s│%d\n", sign[14][0], sign[14][1], sign[14][2], sign[14][3], sign[14][4], sign[14][5], sign[14][6], sign[14][7], sign[14][8], sign[14][9], sign[14][10], sign[14][11], sign[14][12], sign[14][13], sign[14][14], 14);
	printf("  └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘\n");
	printf("    0   1   2   3   4   5   6   7   8   9   10  11  12  13  14\n"); // 提示该位置坐标
}

void claim() // 有关游戏的部分说明
{
	printf("\n请注意：\n一、行被视作x。\n二、如果您输入十进制数据作为位置，程序将用比它小的最大整数替换它。\n示例：若您输入“x为14.3”，它将被视作“x为14”。\n");
	cout << "\n准备好迎接激烈的战斗吧！\n"
		 << endl;
}

int player::numb = 0; // 类外初始化静态变量

int main()
{ // 开始主游戏程序
	int flag = 0;
	ChessBoard Chess;
	player P[2]; // 将玩家对象合并为数组
	int a[3] = {0};
	bool pingju = false; // 判断是否平局的变量

	P[0].give_name(1);
	P[1].give_name(2); // 让玩家输入他们的名字
	P[0].pick_type();
	P[0].show_type(); // 棋型的选择与显示
	printf("那么，");
	P[1].put_name();
	strcmp(type, "black") ? printf("，您将执黑子。\n\n") : printf("，您将执白子。\n\n");
	claim(); // 细枝末节的提示

	if (strcmp(type, "black") == 0) // 如果玩家一执黑，主程序主体
		flag = 1;
	if (strcmp(type, "white") == 0) // 如果玩家一执白，主程序主体
		flag = 2;

	do
	{
		drawboard(); // 绘制棋盘
		P[flag - 1].setchess(flag);
		Chess.setx(P[flag - 1].givex());
		Chess.sety(P[flag - 1].givey()); // 下棋
		if (win_xie_1(Chess.getx(), Chess.gety(), flag) || win_shu(Chess.getx(), Chess.gety(), flag) || win_heng(Chess.getx(), Chess.gety(), flag) || win_xie_2(Chess.getx(), Chess.gety(), flag))
		{
			a[flag] = 1;
			system("clear");
			drawboard();
			break;
		} // 判断胜负
		if (ping())
		{
			pingju = true;
			break;
		}
		system("clear"); // 清屏
		Chess.show();	 // 提示上一步对手的走向
		drawboard();
		P[2 - flag].setchess(3 - flag);
		Chess.setx(P[2 - flag].givex());
		Chess.sety(P[2 - flag].givey());
		if (win_xie_1(Chess.getx(), Chess.gety(), 3 - flag) || win_shu(Chess.getx(), Chess.gety(), 3 - flag) || win_heng(Chess.getx(), Chess.gety(), 3 - flag) || win_xie_2(Chess.getx(), Chess.gety(), 3 - flag))
		{
			a[3 - flag] = 1;
			system("clear");
			drawboard();
			break;
		}
		if (ping())
		{
			pingju = true;
			break;
		}
		system("clear");
		Chess.show();
	} while (1); // 循环结束的唯二条件是分出胜负或平局

	if (a[1] == 1) // 如果玩家1胜利的情况
	{
		P[0].put_name();
		printf("获胜！\n本场对局共有%d步棋。\n感谢您游玩本游戏。再见。\n", player::numb);
	}
	if (a[2] == 1) // 如果玩家2胜利的情况
	{
		P[1].put_name();
		printf("获胜！\n本场对局共有%d步棋。\n感谢您游玩本游戏。再见。\n", player::numb);
	}
	if (pingju)
		printf("最终的结果是平局！\n本场对局共有%d步棋。\n感谢您游玩本游戏。再见。\n", player::numb);
	return 0;
}
```