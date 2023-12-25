# 第11次作业

```cpp
#include <iostream>
#include <fstream>
#include <cstring>
// using namespace std;

class Teacher
{
public:
	Teacher(char *_name = "Default", char *_number = "114514", char *_sex = "M", int _y = 1919, int _m = 8, int _d = 10, char *_id = "123456789012345", char *_principalship = "Professor", char *_department = "Department of EE")
	{
		strcpy(name, _name);
		strcpy(number, _number);
		strcpy(sex, _sex);
		birthday.y = _y;
		birthday.m = _m;
		birthday.d = _d;
		strcpy(id, _id);
		strcpy(principalship, _principalship);
		strcpy(department, _department);
		// std::cout << "Constructed Teacher " << name << std::endl;
	}
	Teacher(Teacher &p)
	{
		strcpy(name, p.name);
		strcpy(number, p.number);
		strcpy(sex, p.sex);
		birthday.y = p.birthday.y;
		birthday.m = p.birthday.m;
		birthday.d = p.birthday.d;
		strcpy(id, p.id);
		strcpy(principalship, p.principalship);
		strcpy(department, p.department);
		// std::cout << "Copied Teacher " << name << std::endl;
	}
	~Teacher()
	{
		// std::cout << "Destructed Teacher " << name << std::endl;
	}
	char *getName()
	{
		return name;
	}
	char *getNumber()
	{
		return number;
	}
	void display()
	{
		std::cout << "输出教师信息：" << std::endl
				  << "姓名：" << name << std::endl
				  << "编号：" << number << std::endl
				  << "性别：" << sex << std::endl
				  << "生日：" << birthday.m << '/' << birthday.d << '/' << birthday.y << std::endl
				  << "身份证号：" << id << std::endl
				  << "职务：" << principalship << std::endl
				  << "部门：" << department << std::endl;
	}
	void set()
	{
		std::cout << "输入教师信息：" << std::endl;
		std::cout << "姓名：";
		std::cin >> name;
		std::cout << "编号：";
		std::cin >> number;
		std::cout << "性别：";
		std::cin >> sex;
		std::cout << "生日：";
		std::cin >> birthday.m >> birthday.d >> birthday.y;
		std::cout << "身份证号：";
		std::cin >> id;
		std::cout << "职务：";
		std::cin >> principalship;
		std::cout << "部门：";
		std::cin >> department;
	}

	// protected:
	char name[11];
	char number[7];
	char sex[3];
	class Date
	{
	public:
		int m;
		int d;
		int y;
	} birthday;
	char id[16];
	char principalship[11];
	char department[21];
};

int interface()
{
	int ret = 0;
	system("clear"); // Windows `system("cls")`
	std::cout << "＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋" << std::endl
			  << "　　 ＸＸＸ公司人事管理系统" << std::endl
			  << std::endl
			  << "＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋" << std::endl
			  << "＃＃＃＃＃＃＃＃＃＃＃＃＃＃＃＃" << std::endl
			  << std::endl
			  << "主菜单" << std::endl
			  << "1.数据录入" << std::endl
			  << "2.数据查询" << std::endl
			  << "3.数据保存" << std::endl
			  << "4.退出" << std::endl
			  << "请选择序号（1-4）" << std::endl
			  << "＃＃＃＃＃＃＃＃＃＃＃＃＃＃＃＃" << std::endl
			  << std::endl;
	std::cout << ">>> ";
	std::cin >> ret;
	std::cin.ignore(1);
	return ret;
}

int datainput()
{
	int ret = 0;
	system("clear"); // Windows `system("cls")`
	std::cout << "＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋" << std::endl
			  << "　　 ＸＸＸ公司人事管理系统" << std::endl
			  << std::endl
			  << "＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋" << std::endl
			  << "＃＃＃＃＃＃＃＃＃＃＃＃＃＃＃＃" << std::endl
			  << std::endl
			  << "数据录入" << std::endl
			  << "1.新建文件" << std::endl
			  << "2.修改文件" << std::endl
			  << "3.退出" << std::endl
			  << "请选择序号（1-3）" << std::endl
			  << "＃＃＃＃＃＃＃＃＃＃＃＃＃＃＃＃" << std::endl
			  << std::endl;
	std::cout << ">>> ";
	std::cin >> ret;
	std::cin.ignore(1);
	return ret;
}

void newfile()
{
	char filename[32];
	int n;
	system("clear"); // Windows `system("cls")`
	std::cout << "＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋" << std::endl
			  << "　　 ＸＸＸ公司人事管理系统" << std::endl
			  << std::endl
			  << "＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋" << std::endl
			  << "＃＃＃＃＃＃＃＃＃＃＃＃＃＃＃＃" << std::endl
			  << std::endl
			  << "新建文件" << std::endl
			  << "请输入数据文件名" << std::endl
			  << "＃＃＃＃＃＃＃＃＃＃＃＃＃＃＃＃" << std::endl
			  << std::endl;
	std::cout << ">>> ";
	std::cin.getline(filename, 32);
	std::ofstream outfile(filename, std::ios::out | std::ios::binary);
	if (!outfile)
	{
		throw 1;
	}
	std::cout << "请输入保存的教师人数" << std::endl
			  << ">>> ";
	std::cin >> n;
	Teacher t[n];
	for (int i = 0; i < n; i++)
	{
		t[i].set();
		outfile.write((char *)&t[i], sizeof(t[i]));
	}
	outfile.close();
	system("clear"); // Windows `system("cls")`
	std::cout << "＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋" << std::endl
			  << "　　 ＸＸＸ公司人事管理系统" << std::endl
			  << std::endl
			  << "＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋" << std::endl
			  << "＃＃＃＃＃＃＃＃＃＃＃＃＃＃＃＃" << std::endl
			  << std::endl
			  << "新建文件" << std::endl
			  << "新建文件成功！" << std::endl
			  << "＃＃＃＃＃＃＃＃＃＃＃＃＃＃＃＃" << std::endl
			  << std::endl
			  << "Press Enter to continue..." << std::endl;
	getchar();
	getchar();
}

void editfile()
{
	char filename[32];
	system("clear"); // Windows `system("cls")`
	std::cout << "＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋" << std::endl
			  << "　　 ＸＸＸ公司人事管理系统" << std::endl
			  << std::endl
			  << "＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋" << std::endl
			  << "＃＃＃＃＃＃＃＃＃＃＃＃＃＃＃＃" << std::endl
			  << std::endl
			  << "修改文件" << std::endl
			  << "请输入数据文件名" << std::endl
			  << "＃＃＃＃＃＃＃＃＃＃＃＃＃＃＃＃" << std::endl
			  << std::endl;
	std::cout << ">>> ";
	std::cin.getline(filename, 32);
	std::ifstream infile(filename, std::ios::in | std::ios::binary);
	if (!infile)
	{
		throw 1;
	}
	infile.seekg(std::ios::end);
	int filelength = infile.tellg();
	infile.seekg(std::ios::beg);
	Teacher t[filelength];
	for (int i = 0; i < filelength; i++)
	{
		infile.read((char *)&t[i], sizeof(t[i]));
	}
	infile.close();
	std::cout << "请输入要修改的教师工号" << std::endl
			  << ">>> ";
	char desiredNumber[7] = {0};
	std::cin.getline(desiredNumber, 7);
	int n = -1;
	for (int i = 0; i < filelength; i++)
	{
		if (strcmp(t[i].getNumber(), desiredNumber) == 0)
		{
			n = i;
			break;
		}
	}
	if (n == -1)
	{
		std::cerr << "未查询到教师信息！" << std::endl;
	}
	t[n].set();
	std::ofstream outfile(filename, std::ios::out | std::ios::binary);
	if (!outfile)
	{
		throw 1;
	}
	for (int i = 0; i < filelength; i++)
	{
		outfile.write((char *)&t[i], sizeof(t[i]));
	}
	outfile.close();
	system("clear"); // Windows `system("cls")`
	std::cout << "＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋" << std::endl
			  << "　　 ＸＸＸ公司人事管理系统" << std::endl
			  << std::endl
			  << "＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋" << std::endl
			  << "＃＃＃＃＃＃＃＃＃＃＃＃＃＃＃＃" << std::endl
			  << std::endl
			  << "修改文件" << std::endl
			  << "修改文件成功！" << std::endl
			  << "＃＃＃＃＃＃＃＃＃＃＃＃＃＃＃＃" << std::endl
			  << std::endl
			  << "Press Enter to continue..." << std::endl;
	getchar();
	getchar();
}

void datasearch()
{
	char filename[32];
	system("clear"); // Windows `system("cls")`
	std::cout << "＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋" << std::endl
			  << "　　 ＸＸＸ公司人事管理系统" << std::endl
			  << std::endl
			  << "＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋＋" << std::endl
			  << "＃＃＃＃＃＃＃＃＃＃＃＃＃＃＃＃" << std::endl
			  << std::endl
			  << "数据查询" << std::endl
			  << "请输入数据文件名" << std::endl
			  << "＃＃＃＃＃＃＃＃＃＃＃＃＃＃＃＃" << std::endl
			  << std::endl;
	std::cout << ">>> ";
	std::cin.getline(filename, 32);
	std::ifstream infile(filename, std::ios::in | std::ios::binary);
	if (!infile)
	{
		throw 1;
	}
	infile.seekg(std::ios::end);
	int filelength = infile.tellg();
	infile.seekg(std::ios::beg);
	Teacher t[filelength];
	for (int i = 0; i < filelength; i++)
	{
		infile.read((char *)&t[i], sizeof(t[i]));
	}
	infile.close();
	std::cout << "请输入要查询的教师姓名" << std::endl
			  << ">>> ";
	char desiredName[11] = {0};
	std::cin.getline(desiredName, 11);
	bool flag = false;
	for (int i = 0; i < filelength; i++)
	{
		if (strcmp(t[i].getName(), desiredName) == 0)
		{
			t[i].display();
			flag = true;
			break;
		}
	}
	if (!flag)
	{
		std::cerr << "未查询到教师信息！" << std::endl;
	}
	std::cout << "Press Enter to continue..." << std::endl;
	getchar();
}

void tbc()
{
	system("clear"); // Windows `system("cls")`
	std::cout << "敬请期待！" << std::endl
			  << std::endl
			  << "Press Enter to continue..." << std::endl;
	getchar();
	getchar();
}

int main()
{
	while (true)
	{
	_INTERFACE:
		switch (interface())
		{
		case 1:
		_DATAINPUT:
			switch (datainput())
			{
			case 1:
				try
				{
					newfile();
				}
				catch (int i)
				{
					std::cerr << "文件打开失败！" << std::endl;
					std::cout << "Press Enter to continue..." << std::endl;
					getchar();
				}
				break;
			case 2:
				try
				{
					editfile();
				}
				catch (int i)
				{
					std::cerr << "文件打开失败！" << std::endl;
					std::cout << "Press Enter to continue..." << std::endl;
					getchar();
				}
				break;
			case 3:
				goto _INTERFACE;
				break;
			default:
				std::cout << "请输入正确的选项！" << std::endl;
				goto _DATAINPUT;
				break;
			}
			break;
		case 2:
			try
			{
				datasearch();
			}
			catch (int i)
			{
				std::cerr << "文件打开失败！" << std::endl;
				std::cout << "Press Enter to continue..." << std::endl;
				getchar();
			}
			break;
		case 3:
			std::cout << "已保存！" << std::endl;
			std::cout << "Press Enter to continue..." << std::endl;
			getchar();
			break;
		case 4:
			std::cout << "已退出！" << std::endl;
			std::cout << "Press Enter to continue..." << std::endl;
			getchar();
			goto _END;
			break;
		default:
			std::cout << "请输入正确的选项！" << std::endl;
			goto _INTERFACE;
			break;
		}
	}
_END:
	system("clear"); // Windows `system("cls")`
	return 0;
}
```

**运行结果与上次作业相同。**