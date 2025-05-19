#include<stdio.h>
void main(){
    int digit;
    int count=0;
    printf("Please enter your digit(s) to count ");
    scanf("%d",&digit);
    while(digit!=0){
        digit=digit/10;
        count++;
    //
    // printf("%d",count);
    }
   printf("%d",count);
}