#include <iostream>
using namespace std;
#define STACK_SIZE 100 // 定义栈的容量
class Stack			   // 定义栈的类
{
	int top;				// 定义栈顶
	int buffer[STACK_SIZE]; // 定义数量为栈的容量的栈的缓冲
public:
	Stack() { top = -1; } // 定义构造函数，初始化栈顶
	bool push(int i);	  // 声明推入函数
	bool pop(int &i);	  // 声明弹出函数
};
bool Stack::push(int i) // 定义推入函数
{
	if (top == STACK_SIZE - 1) // 检测栈是否已满
	{
		cout << "Stack is overflow.\n"; // 显示提示信息
		return false;					// 返回错误信息
	}
	else // 栈未满，继续推入
	{
		buffer[++top] = i; // 在栈的缓冲中存入所推入的变量，并将栈顶上移
		return true;	   // 返回成功信息
	}
}
bool Stack::pop(int &i) // 定义弹出函数
{
	if (top == -1) // 检测栈是否已空
	{
		cout << "Stack is empty.\n"; // 显示提示信息
		return false;				 // 返回错误信息
	}
	else // 栈未空，继续弹出
	{
		i = buffer[top--]; // 记录弹出的变量，并将栈顶下移
		return true;	   // 返回成功信息
	}
}
int main()
{
	Stack st1, st2; // 声明2个栈
	int x;			// 声明一个整型变量
	st1.push(12);	// 向st1中推入12
	st1.pop(x);		// 弹出st1的栈顶
	st2.push(20);	// 向st1中推入20
	st2.pop(x);		// 弹出st1的栈顶
	return 0;
}