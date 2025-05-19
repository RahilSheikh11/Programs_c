#include<stdio.h>
void main(){
    int size;
    printf("Please enter the required size of the ARRAY ");
    scanf("%d",&size);

    int arr[size];
    printf("Please neter the elements for the Array ");
    for (int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        for (int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        
    }
     for(int i=0;i<size;i++){
        printf("\n%d",arr[i]);
     }
    }
