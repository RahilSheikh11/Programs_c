#include<stdio.h>

int linear_search(int arr[],int size,int element){
for(int i=0;i<size;i++){
    if(arr[i]==element){
        return i;
    }
}
return -1;
}

void main(){
    int arr[]={1,5,6,8,7,41,6,9,98448,9,54};
    int size=11;
    int element=5;
    int ab=linear_search(arr,size,element);
if(ab!=-1){
    printf("%d",ab);
}else{
    printf("No Match");
}

}