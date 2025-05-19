#include<stdio.h>
void main(){
    int n[3][3]={{1,65,87},{65,79,64},{26,85,69}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf(" %d",n[i][j]);
        }
        printf("\n");
    }
}