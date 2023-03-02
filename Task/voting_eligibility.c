// WAP to get input birth year and find he/she is eligible for vote or not
#include <stdio.h>

int main() 
{
    int age;
    printf("Enter your birth year : ");
    scanf("%d",&age);
    age = 2023 - age;
    
    if (age >= 18)
    {
        printf("You are eligible for vote");
    }
    
    else
    {
        printf("You are not eligible for vote");
    }
    
    return 0;
}
