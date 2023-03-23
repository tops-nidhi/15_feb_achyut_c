#include<stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++) //For Row
    {
        for (j = 1; j <= i; j++) //For Column
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}