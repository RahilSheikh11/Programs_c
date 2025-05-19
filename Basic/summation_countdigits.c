#include<stdio.h>
void main(){
    int count=0;
    int digit;
    printf("Please enter the Digit(s) to count ");
    scanf("%d",&digit);
    int sum=0;
    while(digit!=0){
        digit%=10;
        digit/=10;
        sum+=digit;    
    }
printf("%d",sum);
}