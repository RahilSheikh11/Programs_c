#include<stdio.h>
void main(){
FILE *fptr;
fptr=fopen("C:\\Users\\Rsheikh\\OneDrive - ARCHER Systems LLC\\chardata.txt","w");
fputc('A',fptr);
fclose(fptr);
}