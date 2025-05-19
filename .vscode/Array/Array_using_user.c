#include<stdio.h>
void main(){
    int size;
    printf("Please assign the length of numbers");
    scanf("%d",&size);
    int arr[size];
    char name[size][10];
    printf("enterr id and name");
   for(int i=0;i<size;i++){
   
    scanf("%d",&arr[i]);
   
    scanf("%s",&name[i]);

   }   
   for(int i=0;i<size;i++)
   {
    printf("\n%d",arr[i]);
    printf("\n%s",name[i]);
   }
}