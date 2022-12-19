#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter the (m*n) bits:\n");

    printf("m: ");
    scanf("%d", &m);

    printf("n: ");
    scanf("%d", &n);


    int s[100][100];
    int count;
    
    for (int i = 0; i < m; i++)
    {
        printf("Enter frame %d: \n", i + 1);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &s[i][j]);
        }
    }

    printf("Before : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }

    for (int j = 0; j < m; j++)
    {
        count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i][j] == 1)
                count += 1;
        }
        if (count % 2 == 0)
            s[m][j] = 0;
        else
            s[m][j] = 1;
    }

    for (int i = 0; i < m + 1; i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (s[i][j] == 1)
                count++;
        }
        // printf("i=%d\tj=%d",i,j);
        if (count % 2 == 0)
            s[i][n] = 0;
        else
            s[i][n] = 1;
    }

    // printf("Outside row loop\n");
    printf("After : \n");
    for (int i = 0; i < m + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }

    return 0;
}