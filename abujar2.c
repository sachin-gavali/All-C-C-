// Transpose of matrix

#include <stdio.h>
#include <conio.h>
void star();
void dash();
void star(void)
{
    for (int s = 0; s <= 8; s++)
    {
        for (int j = 0; j <= s; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void dash(void)
{
    for (int a = 0; a <= 8; a++)
    {
        printf("-");
    }
    printf("\n");
}
void main()
{
    int n, a[10][10], j, i;
    // enter the n for matrix row col
    printf(" \n Enter the row column value :");
    scanf("%d", &n);
    dash();
    printf("Enter %d*%d matrix\n", n, n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("\t%d", &a[i][j]);
        }
    }
    printf("\tOriginal matrix\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\t\n");
    }
    printf("\tTraspose matrix\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\t%d", a[j][i]);
        }
        printf("\t\n");
        star();
    }
    getch();
    
}