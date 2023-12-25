#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define STACK_SIZE 100 // 定义栈的容量
struct Stack		   // 定义栈的结构体
{
	int top;				// 定义栈顶
	int buffer[STACK_SIZE]; // 定义数量为栈的容量的栈的缓冲
};
bool stack_push(struct Stack *s, int i) // 定义推入函数
{
	if (s->top == STACK_SIZE - 1) // 检测栈是否已满
	{
		printf("Stack is overflow.\n"); // 显示提示信息
		return false;					// 返回错误信息
	}
	else // 栈未满，继续推入
	{
		s->buffer[++(s->top)] = i; // 在栈的缓冲中存入所推入的变量，并将栈顶上移
		return true;			   // 返回成功信息
	}
}
bool stack_pop(struct Stack *s, int *i) // 定义弹出函数
{
	if (s->top == -1) // 检测栈是否已空
	{
		printf("Stack is empty.\n"); // 显示提示信息
		return false;				 // 返回错误信息
	}
	else // 栈未空，继续弹出
	{
		*i = s->buffer[(s->top)--]; // 记录弹出的变量，并将栈顶下移
		return true;				// 返回成功信息
	}
}
int main()
{
	struct Stack st1, st2; // 声明2个栈
	int x;				   // 声明一个整型变量
	st1.top = -1;		   // 初始化st1的栈顶
	st2.top = -1;		   // 初始化st2的栈顶
	stack_push(&st1, 12);  // 向st1中推入12
	stack_pop(&st1, &x);   // 弹出st1的栈顶
	stack_push(&st1, 20);  // 向st1中推入20
	stack_pop(&st1, &x);   // 弹出st1的栈顶
	return 0;
}