#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of 2 numbers : ");
    scanf("%d%d" ,&a ,&b);
    printf("\nAddition of two numbers :  %d" ,a+b);
    printf("\nSubstraction of 2 numbers : %d" ,a-b);
    printf("\nMultiplication of 2 numbers : %d" ,a*b);
    printf("\nModulo is : %d" , a%b);
    printf("\nIncreament of first number : %d",++a);
    return 0;
}