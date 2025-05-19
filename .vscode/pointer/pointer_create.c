#include<stdio.h>
void main(){
    int i=113;
    int *abc;
    abc=&i;
    printf("\nThe address leakage is %p",*abc);
    printf("\nThe address leakage is %p",&i);
    printf("\nThe address leakage is %d",*abc);
    
    
}