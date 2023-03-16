#include <stdio.h>

int main() {
    char ch;
    
    printf("Enter any charater : ");
    scanf("%c",&ch);
    
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        printf("\nCharacter %c is vowel",ch);
    }
    
    else if (ch >= 65 && ch <= 122 && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')){
        printf("\nCharacter %c is constant",ch);
    }
    
    else{
        printf("\n%c is not any vowel or any constant",ch);
    }
    return 0;
}