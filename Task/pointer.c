#include <stdio.h>

int main() {
    char abc = 'v';
    int a = 0;
    int *ptr;
    ptr = &a;
    *ptr = (int)abc;
    printf("%d",*ptr);
    return 0;
}