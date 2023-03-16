#include <stdio.h>

int main() {
    char input;
    printf("Enter something : ");
    scanf("%c",&input);
    
    if (input >= 48 && input <= 57){
        printf("\n%c is a number...",input);
    }
    
    else if (input >= 65 && input <= 122){
        printf("\n%c is a character...",input);
    }
    
    else{
        printf("\n%c is a special character...",input);
    }
    return 0;
}