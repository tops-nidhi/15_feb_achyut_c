#include<stdio.h>

int main(){
    int a,b,ans;
    char ch;
    printf("// enter arithmatic action which you want to perform //\n");
    
    printf("\t1. + (addition)\n\t2. - (substraction)\n\t3. * (multiplication)\n\t4. / (division)\n\t5. \% (modulo)\n");
    
    printf("\nenter first value : ");
    scanf("%d",&a);
    
    printf("enter action which you want to perform : ");
    scanf("\n%c",&ch);
    
    printf("enter second value : ");
    scanf("%d",&b);

    switch (ch){
    case '+':
    ans = a + b;
    printf("\naddition of %d and %d is : %d",a,b,ans);
    break;

    case '-':
    ans = a - b;
    printf("\nsubstraction of %d and %d is : %d",a,b,ans);
    break;

    case '*':
    ans = a * b;
    printf("\nmultiplication of %d and %d is : %d",a,b,ans);
    break;

    case '/':
    ans = a / b;
    printf("\ndivision of %d and %d is : %d",a,b,ans);
    break;

    case '%':
    ans = a % b;
    printf("\nmodulo of %d and %d is : %d",a,b,ans);
    break;

    default:
    printf("\nthis action can't be perform, please select from given options...");
    break;
}
return 0;
}
