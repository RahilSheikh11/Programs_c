#include<stdio.h>
void swap(int a,int b){
    int c = a;
    a=b;
    b=c;
    printf("\nSwapped values are %d %d",a,b);
}
void main(){
    int num1=10;
    int num2=20;
    swap(num1,num2);
}