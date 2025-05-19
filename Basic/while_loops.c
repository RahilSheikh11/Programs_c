#include<stdio.h>
void main(){
    int num;
    int count=0;
    printf("Enter the value to find the factors ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(num%i==0){
            count++;
            printf("\n%d",i);
        }
    }
    printf("\nTotal factors is %d", count);
if (count>2){
    printf("\nnum is not prime");
}else{
        printf("\nnum is Prime");
    }
}
