#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number a : ");
    scanf("%d" ,&a);

    printf("Enter the number b : ");
    scanf("%d" ,&b);

    printf("Enter the number c : ");
    scanf("%d" ,&c);

    (a > b && a > c) ? (printf("\n a is max")) : ;
    (b > a && b > c) ? (printf("\n b is max")) : ;
    (c > a && c > b) ? (printf("\n c is max")) : ;
    return 0;
}