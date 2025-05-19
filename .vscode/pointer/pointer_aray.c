#include<stdio.h>
void main(){
    int arr[]={1.34,68,7,987,434,645};
    int *abc;
    abc=arr;
    for(int i=0;i<7;i++){
        printf("\nThe address is %p",&abc[i]);
    }
    printf("\n%p",&abc[0]);
}