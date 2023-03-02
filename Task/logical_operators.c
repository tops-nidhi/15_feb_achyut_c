// logical operators are && (logical and), || (logical or), ! (not)
#include <stdio.h>

int main() 
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    

    if (a > 50 && a < 100)
    {
        printf("a is greater than 50 and less than 100");
    }
    
    else
    {        
        printf("a is less than 50 or greater than 100");
    }
    
    return 0;
}