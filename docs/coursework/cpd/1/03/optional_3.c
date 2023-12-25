#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool phone[11][10] = {false};
    char temp;
    for(int i = 0; i <= 10; i++)
    {
        scanf("%c", &temp);
        switch (temp)
        {
        case '0':
            phone[i][0] = true;
            break;
        case '1':
            phone[i][1] = true;
            break;
        case '2':
            phone[i][2] = true;
            break;
        case '3':
            phone[i][3] = true;
            break;
        case '4':
            phone[i][4] = true;
            break;
        case '5':
            phone[i][5] = true;
            break;
        case '6':
            phone[i][6] = true;
            break;
        case '7':
            phone[i][7] = true;
            break;
        case '8':
            phone[i][8] = true;
            break;
        case '9':
            phone[i][9] = true;
            break;
        default:
            goto a;
            break;
        }
    }
    for(int i = 0; i <= 10; i++)
    {
        for(int j = 0; j <= 9; j++)
        {
            if(phone[i][j] == true)
            {
                printf("%d", j);
            }
        }
    }
    if(false)
    {
        a: printf("ERROR\n");
    }
    return 0;
}
