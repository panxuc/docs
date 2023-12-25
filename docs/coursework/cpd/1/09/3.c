#include <stdio.h>
int main()
{
    int head = 15, foot = 40;
    printf("Chicken = %d, Rabbit = %d\n", head - (foot - 2 * head) / 2, (foot - 2 * head) / 2);
    return 0;
}