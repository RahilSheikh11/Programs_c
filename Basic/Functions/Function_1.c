#include<stdio.h>
void addition(){
    int a,b;
    printf("Please enter your numbers for addition ");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("These are the values %d",a+b);
}
void main(){
    addition();
}