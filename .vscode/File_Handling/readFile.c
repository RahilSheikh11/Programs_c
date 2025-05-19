#include<stdio.h>
void main(){
FILE *fptr;
fptr=fopen("C:\\Users\\Rsheikh\\OneDrive - ARCHER Systems LLC\\newtest1.txt","r");
if(fptr==NULL){
    printf("FILE not exit");
}
int i;
fscanf(fptr,"%s",&i);
printf("%s",i);


}