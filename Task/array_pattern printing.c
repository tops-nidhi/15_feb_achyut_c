#include <stdio.h>

int main() {
    int num[3][3];
    int i,j;
    
    for(i = 0; i <= 2; i++){
        for(j = 0; j <= 2; j++){
            printf("enter value in row no. %d and collum no. %d :  ",i,j);
            scanf("%d",&num[i][j]);
        }
    }
        printf("\n");
        
    for(i = 0; i <= 2; i++){
        for(j = 0; j <= 2; j++){
            printf("%d ",num[i][j]);
        }
        printf("\n");
    }
    return 0;
}
