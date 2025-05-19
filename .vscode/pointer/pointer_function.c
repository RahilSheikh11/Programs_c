#include<stdio.h>
int multiply(int *a,int *b){
    int sum=*a**b;
    return sum;
}

void main(){
int a=10;
int b=20;
int ans = multiply(&a,&b);
printf("%d",ans);
}