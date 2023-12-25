#include <iostream>
#include <cstring>
using namespace std;

void interface()
{
	system("clear"); // Windows `system("cls")`
	cout << "＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋" << endl
		 << "　　 ＸＸＸ公司人事管理系统" << endl
		 << endl
		 << "＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋" << endl
		 << "＃＃＃＃＃＃＃＃＃＃＃＃＃＃＃＃" << endl
		 << endl
		 << "主菜单" << endl
		 << "1.数据录入" << endl
		 << "2.数据查询" << endl
		 << "3.数据保存" << endl
		 << "4.退出" << endl
		 << "请选择序号（1-4）" << endl
		 << "＃＃＃＃＃＃＃＃＃＃＃＃＃＃＃＃" << endl
		 << endl;
}

void tbc()
{
	system("clear"); // Windows `system("cls")`
	cout << "敬请期待！" << endl
		 << endl
		 << "Press Enter to continue..." << endl;
	getchar();
	getchar();
}

int main()
{
	int n = 0;
	do
	{
		interface();
		cout << ">>> ";
		cin >> n;
		if (n == 1 || n == 2 || n == 3)
			tbc();
		if (n < 1 || n > 4)
		{
			cout << "请输入有效答案！" << endl
				 << endl
				 << "Press Enter to continue..." << endl;
			getchar();
			getchar();
		}
	} while (n != 4);
	system("clear"); // Windows `system("cls")`
	return 0;
}