#include<stdio.h>

void main(){
    FILE *file1;

    file1=fopen("C:\\Users\\Rsheikh\\OneDrive - ARCHER Systems LLC\\newtest2.txt","w");

    // char ab[10];
    // printf("Please enter your number ");

    // scanf("%s",&ab);
    // fprintf(file1,"%s",ab);

    int size;
    printf("Please enter your size ");
    scanf("%d",&size);
    
    int d[size];
    printf("Please enter only digits ");
    for(int i=0;i<size;i++){
        scanf("%d",&d[i]);
        fprintf(file1,"\n%d",d[i]);
    }

    fclose(file1);
}