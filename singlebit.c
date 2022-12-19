#include <stdio.h>

void main()
{
    int num, r, flag = 0, p;
    printf("Enter String which contain 0 and 1 : ");
    scanf("%d", &num);
    printf("\nFor even parity enter 1 and for odd parity enter O : ");
    scanf("%d", &p);

    while (num != 0)
    {
        r = num % 10;
        if (r == 1)
            flag += 1;
        num = num / 10;
    }
    if (p == 1)
    {
        printf("*** You selected Even parity check ***");
        if (flag % 2 == 0)
            printf("\nParity is 0");
        else
            printf("\nParity is 1");
    }
    
    else if (p == 0)
    {
        printf("*** You selected Odd parity check ***");
        if (flag % 2 == 0)
            printf("\nParity is 1");
        else
            printf("\nParity is 0");
    }
    else
        printf("Invalid input");
}