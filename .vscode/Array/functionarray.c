#include<stdio.h>
void display(int arr[]){
    for(int i=0;i<5;i++){
        printf(" %d",arr[i]);
    }
}
void main(){
    int arr[]={2,6,8,3,96};
    display(arr);
}