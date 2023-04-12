// WAP to find out the factorial of given number using function

#include <stdio.h>

int main()
{
    unsigned int n;
    printf("Enter a number for find factorial : ");
    scanf("%u",&n);

    int factorial = 1;
    for(int i = n; i > 0; i--){
        factorial = factorial * i;
    }

    printf("Factorial of %d is : %u", n, factorial);
    return 0;
}