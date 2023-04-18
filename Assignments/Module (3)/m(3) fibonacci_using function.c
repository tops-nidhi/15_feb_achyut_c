// WAP to print the Fibonacci series up to user given number with function

#include <stdio.h>

void fibonacci(int a){
    int x = 0,y = 1,z;
    for(int i = 1; i <= a; i++){
        printf("%d ",x);
        z = x + y;
        x = y;
        y = z;
    }
    return;
}

int main() {
    int n;
    printf("Enter n number : ");
    scanf("%d",&n);

    fibonacci(n);
    return 0;
}