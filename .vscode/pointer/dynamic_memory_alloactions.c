#include<stdio.h>
#include<stdlib.h>

void main(){
    int n;
    printf("Pleas enter the size of array ");
    scanf("%d",&n);

    int *ptr;
    ptr=(int*)malloc(n* sizeof(int));

    printf("Enter the elements of array ");
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++){
    printf("\n%d",ptr[i]);
    }
}