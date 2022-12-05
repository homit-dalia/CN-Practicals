#include <stdio.h>
void main()
{
    int a[100][100], m, n, p, rflag = 0, cflag = 0, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("\nEnter number of columns: ");
    scanf("%d", &n);
    printf("\nEnter elements: ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\na[%d][%d]= ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nData is as below :\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n1) Even Parity \n2) Odd Parity\nEnter your choice:");
    scanf("%d", &p);
    if (p == 1)
    {
        for (i = 0; i < m; i++)
        {
            rflag = 0;
            for (j = 0; j < n; j++)
            {
                if (a[i][j] == 1)
                {
                        rflag++;
                }
            }
            if (rflag % 2 == 0)
            {
            }
            else
            {
            }
        }
        a[i][j] = 0;
        a[i][j] = 1;
        for (j = 0; j < (n + 1); j++)
        {
            cflag = 0;
            for (i = 0; i < m; i++)
            {
                if (a[i][j] == 1)
                {
                    cflag++;
                }
            }
            if (cflag % 2 == 0)
            {
                a[i][j] = 0;
            }
            else
            {
                a[i][j] = 1;
            }
        }
    }
    else
    {
        for (i = 0; i < m; i++)
        {
                rflag = 0;
            for (j = 0; j < n; j++)
            {
                if (a[i][j] == 1)
                {
                    rflag++;
                }
            }
            if (rflag % 2 == 0)
            {
                a[i][j] = 1;
            }
            else
            {
                a[i][j] = 0;
            }
        }
        for (j = 0; j < (n + 1); j++)
        {
            cflag = 0;
            for (i = 0; i < m; i++)
                {
                    if (a[i][j] == 1)
                    {
                        cflag++;
                    }
                }
            if (cflag % 2 == 0)
            {
                a[i][j] = 1;
            }
            else
            {
                a[i][j] = 0;
            }
        }
    }
    printf("\nData after parity is as below :\n");
    for (i = 0; i < (m + 1); i++)
    {
        for (j = 0; j < (n + 1); j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}