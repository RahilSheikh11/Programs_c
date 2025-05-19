#include<stdio.h>
void main(){
    int num;
    while(1){
        printf("Enter Password ");
        scanf("%d",&num);
        if(num==123){
            printf("Welcome to the club");
            break;
        } else{
            printf("Please re-enter your password ");
        }
    }
}