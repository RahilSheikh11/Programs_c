#include<stdio.h>
#include<string.h>

void main(){
    char d[100];
    char s[100]="Alpha why are you like this?";
    char e[100]="BETA How you doing?";
//     printf("Enter your string ");
//     gets(d);
//     printf("%s",d);
// printf("\nThe length of string is \n %d",strlen(d));

//strcat(s,e);
//printf("\n%s",s);

//strcpy(e,s);
//printf("\n%s",e);

// if(strcmp(s,e)==0){
//     printf("\nSame string");
// }else{
//     printf("\nnot same");
// }
// printf("\n%s",strupr(s));
// printf("\n%s",strlwr(e));

// strncpy(s,e,3);
// printf("\n%s",s);

// char *chr=strchr(e,'T');
// printf("\n%d",chr-e);

// char *ab=strstr(s,"arejgcjhvl");
// if(ab!=NULL){
//     printf("Present");
// }else{
//     printf("Not present");
// }

int i=15;
char oner[10];
sprintf(oner,"%d",i);
printf("%s",oner);
}