#include<stdio.h>
void main(){
    double a;
    double b;
    char op;

    printf("Enter your value ");
    scanf("%lf", &a);
    
    printf("Enter your value ");
    scanf("%lf", &b);

    printf("Enter your Calculation method ");
    op=getchar();
    scanf("%c", &op);

    switch (op)
    {
    case '+':
        printf("Addition of this value is %lf",(a+b));
        break;
    case '-':
        printf("Substraction of this value is %lf",(a-b));
        break;
    case '*':
        printf("Multiplication of this value is %lf",(a*b));
        break;
    case '/':
        printf("Division of this value is %lf",(a/b));
        break;
    default:
    printf("Recheck with your coder for better options");
    
    }

}