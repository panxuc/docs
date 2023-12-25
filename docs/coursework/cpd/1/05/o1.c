#include <stdio.h>
int main()
{
    int h, m;
    int h1, h2, m1, m2;
    scanf("%d %d", &h, &m);
    h1 = h / 10; h2 = h % 10;
    m1 = m / 10; m2 = m % 10;
    hour:
    switch(h1)
    {
        case 0:
            break;
        case 1:
            switch(h2)
            {
                case 0:
                    printf("ten ");
                    goto minute;
                    break;
                case 1:
                    printf("eleven ");
                    goto minute;
                    break;
                case 2:
                    printf("twelve ");
                    goto minute;
                    break;
                case 3:
                    printf("thirteen ");
                    goto minute;
                    break;
                case 4:
                    printf("fourteen ");
                    goto minute;
                    break;
                case 5:
                    printf("fifteen ");
                    goto minute;
                    break;
                case 6:
                    printf("sixteen ");
                    goto minute;
                    break;
                case 7:
                    printf("seventeen ");
                    goto minute;
                    break;
                case 8:
                    printf("eighteen ");
                    goto minute;
                    break;
                case 9:
                    printf("nineteen ");
                    goto minute;
                    break;
                default:
                    break;
            }
            break;
        case 2:
            printf("twenty ");
            break;
        default:
            break;
    }
    switch(h2)
    {
        case 0:
            if(h1 == 0)
                printf("zero ");
            break;
        case 1:
            printf("one ");
            break;
        case 2:
            printf("two ");
            break;
        case 3:
            printf("three ");
            break;
        case 4:
            printf("four ");
            break;
        case 5:
            printf("five ");
            break;
        case 6:
            printf("six ");
            break;
        case 7:
            printf("seven ");
            break;
        case 8:
            printf("eight ");
            break;
        case 9:
            printf("nine ");
            break;
        default:
            break;
    }
    minute:
    switch(m1)
    {
        case 0:
            break;
        case 1:
            switch(m2)
            {
                case 0:
                    printf("ten");
                    goto end;
                    break;
                case 1:
                    printf("eleven");
                    goto end;
                    break;
                case 2:
                    printf("twelve");
                    goto end;
                    break;
                case 3:
                    printf("thirteen");
                    goto end;
                    break;
                case 4:
                    printf("fourteen");
                    goto end;
                    break;
                case 5:
                    printf("fifteen");
                    goto end;
                    break;
                case 6:
                    printf("sixteen");
                    goto end;
                    break;
                case 7:
                    printf("seventeen");
                    goto end;
                    break;
                case 8:
                    printf("eighteen");
                    goto end;
                    break;
                case 9:
                    printf("nineteen");
                    goto end;
                    break;
                default:
                    break;
            }
            break;
        case 2:
            printf("twenty ");
            break;
        case 3:
            printf("thirty ");
            break;
        case 4:
            printf("forty ");
            break;
        case 5:
            printf("fifty ");
            break;
        default:
            break;
    }
    switch(m2)
    {
        case 0:
            if(m1 == 0)
                printf("o'clock");
            break;
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("five");
            break;
        case 6:
            printf("six");
            break;
        case 7:
            printf("seven");
            break;
        case 8:
            printf("eight");
            break;
        case 9:
            printf("nine");
            break;
        default:
            break;
    }
    end:
    return 0;
}