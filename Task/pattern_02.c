#include <stdio.h>

int main() {
    int i,j;
    int a=0;
    for(i = 0; i <= 2; i++){
        for(j = 0; j <= i; j++){
            printf("%d",a);
        }
        printf("\n");
    }
    return 0;
}