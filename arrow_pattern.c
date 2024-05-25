#include <stdio.h>
void main()
{
    int n, i, j;
    printf("enter the number of row of the triangle\n");
    scanf("%d", &n);
    if (n % 2 == 1)
    {
        for (i = 1; i <= n / 2; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        for (i = (n / 2) + 1; i >= 1; i--)
        {
            for (j = i; j >= 1; j--)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    else
    {
        for (i = 1; i <= n / 2; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        for (i = (n / 2); i >= 1; i--)
        {
            for (j = i; j >= 1; j--)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
}