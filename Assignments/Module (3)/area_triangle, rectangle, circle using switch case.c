// WAP to find out the Area of Triangle, Rectangle and Circle using Switch Case 

#include <stdio.h>

int main() {
    int find;
    printf("1. Area of triangle\n2. Area of rectangle\n3. Area of circle\n");
    printf("\nEnter what you want to find : ");
    scanf("%d",&find);
    
    switch (find){
        case 1:
        float triangle,base,height;
        printf("\nEnter base : ");
        scanf("%f",&base);
        printf("Enter height : ");
        scanf("%f",&height);
        triangle = (base * height) * 1 / 2;
        printf("\nArea of triangle is : %f",triangle);
        break;
        
        case 2:
        float rectangle,length,width;
        printf("\nEnter length : ");
        scanf("%f",&length);
        printf("Enter width : ");
        scanf("%f",&width);
        rectangle = length * width;
        printf("\nArea of rectangle is : %f",rectangle);
        break;
        
        case 3:
        float circle,radius;
        printf("\nEnter radius of circle : ");
        scanf("%f",&radius);
        circle = 3.14 * (radius * radius);
        printf("\nArea of circle is : %f",circle);
        break;
        
        default:
        printf("\nThis action is not available, please enter given actions....");
        break;
    }
    return 0;
}