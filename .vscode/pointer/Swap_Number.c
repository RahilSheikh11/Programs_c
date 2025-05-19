#include<stdio.h>
void swap(int *a,int *b){
    int temp;
        temp=*a;
        *a=*b;
        *b=temp;
         
    }
    void main(){
int a=15;
int c=20;

swap(&a,&c);
printf("%d%d",a,c);
}