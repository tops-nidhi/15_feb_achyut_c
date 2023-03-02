// relational operators are <, >, <=, >=, ==, !=
#include <stdio.h>

int main() 
{
    int a, b;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);

    if (a == b)
    {
        printf("a and b both are equal");
    }
    
    else 
    {
        printf("a and b are not equal");
    }
    
    return 0;
}