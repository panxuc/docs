#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, c;
	c = getchar();
	scanf("%d%d", &a, &b);
	putchar(c);
	printf("%d, %d\n", a, b);
	system("pause");
}