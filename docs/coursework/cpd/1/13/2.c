#include <stdio.h>
int main()
{
    enum week{Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday} day;
    scanf("%d", &day);
    switch(day){
        case Monday: puts("Monday"); break;
        case Tuesday: puts("Tuesday"); break;
        case Wednesday: puts("Wednesday"); break;
        case Thursday: puts("Thursday"); break;
        case Friday: puts("Friday"); break;
        case Saturday: puts("Saturday"); break;
        case Sunday: puts("Sunday"); break;
        default: puts("Error!");
    }
    return 0;
}