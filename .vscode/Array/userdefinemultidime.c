#include<stdio.h>
void main(){
int row,col;

printf("Enter Row");
scanf(" %d",&row);

printf("Enter Column");
scanf(" %d",&col);

int arr[row][col];
printf("Enter the elements");
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        scanf("%d",&arr[i][j]);
    }
}
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        printf(" %d",arr[i][j]);
    }
printf("\n");
}
}