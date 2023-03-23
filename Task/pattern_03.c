#include <stdio.h>

int main() {
    int i,j;
    for(i = 2; i >= 0; i--){
        for(j = 0; j <= i; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}