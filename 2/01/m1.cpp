#include <iostream>
using namespace std;
enum CPU_Rank
{
	P1 = 1,
	P2,
	P3,
	P4,
	P5,
	P6,
	P7
};
class CPU
{
public:
	void enter();
	void display();

private:
	CPU_Rank rank;
	int frequency;
	float voltage;
};
void CPU::enter()
{
	int r;
	cout << "请依次输入CPU的等级、频率和电压\n";
	cin >> r >> frequency >> voltage;
	rank = (CPU_Rank)r;
}
void CPU::display()
{
	cout << "等级："
		 << "P" << rank << endl;
	cout << "频率：" << frequency << endl;
	cout << "电压：" << voltage << endl;
}
int main()
{
	CPU CPU_1;
	CPU_1.enter();
	CPU_1.display();
	return 0;
}