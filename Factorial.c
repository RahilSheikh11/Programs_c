#include<stdio.h>
void main(){
    int i;    
printf("Enter your factorial number here ");
scanf("%d",&i);
int fact=1;
for(int j=1;j<=i;j++)
{
    fact=fact*j;
}
printf("%d",fact);
}