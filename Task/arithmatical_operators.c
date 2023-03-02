#include <stdio.h>

int main() 
{
    int a, b;
    printf("Enter the number a : ");
    scanf("%d",&a);
    printf("Enter the number b : ");
    scanf("%d",&b);
    
    printf("Addition of a and b is : %d\n",a + b);
    printf("Substraction of a and b is : %d\n",a - b);
    printf("Multiplication of a and b is : %d\n",a * b);
    printf("Division of a and b is : %f\n",(float)a / (float)b);
    printf("Modulo of a and b is : %d\n",a % b);
    return 0;
}