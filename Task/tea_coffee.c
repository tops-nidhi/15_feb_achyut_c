#include <stdio.h>

int main() {
    int manu;
    printf("Welcome to the *** BCA CHAI WAALE ***\n");
    printf("\n// choose item type by entering number //\n");
    printf("\n1. Tea\n2. Coffee\n");
    printf("\nEnter the item you want : ");
    scanf("%d",&manu);
    
    switch (manu){
    case 1:
        int tea;
        printf("\nWelcome to the Tea World\n");
        printf("\n1. Hot Masala Tea\n2. Cold Nukkad Tea\n");
        printf("\nEnter which tea you want : ");
        scanf("%d",&tea);
        
        switch (tea){
        case 1:
            printf("\nYour Hot Masala Tea Will Be Ready Soon...");
        break;
        
        case 2:
            printf("\nYour Cold Nukkad Tea Will Be Ready Soon...");
        break;
        
        default:
            printf("\n(This type of tea is not available, please oder from given manu...)");
        break;
        }
    break;
    
    case 2:
        int coffee;
        printf("\nWelcome to the Coffee World\n");
        printf("\n1. Hot cappuccino\n2. Cold Coffee\n");
        printf("\nEnter which coffee you want : ");
        scanf("%d",&coffee);
        
        switch (coffee){
        case 1:
            printf("\nYour Hot cappuccino Will Be Ready Soon...");
        break;
        
        case 2:
            printf("\nYour Cold coffee Will Be Ready Soon...");
        break;
        
        default:
            printf("\n(This type of coffee is not available, please oder from given manu...)");
        break;
        }
        break;
    
    default:
        printf("\nThis type of item dosen't exist, please oder from given manu...");
    break;
    }
    
    return 0;
}