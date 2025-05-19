#include<stdio.h>

void main(){
    int temp = 0;
    for(int i=0;i<=5;i++){

        for(int j=0;j<=i;j++){
           temp++;
            printf(" %d", temp);   
        }
        
            printf("\n");
    }
}