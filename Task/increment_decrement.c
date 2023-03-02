#include <stdio.h>

int main() 
{
    int a, b;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);

    a++;
    printf("Value of a after using increment operator is : %d\n",a);
    --b;
    printf("Value of b after using decrement operator is : %d\n",b);
    return 0;
}