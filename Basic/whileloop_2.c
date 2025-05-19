#include<stdio.h>
void main(){
    int i;

    while(1){
        printf("Please get your value checked ");
        scanf("%d",&i);

        if(i>=0){
            printf("Your value is positive");
            break;
        } else{
            printf("Your value is negative\n");
            
        }
    }
}