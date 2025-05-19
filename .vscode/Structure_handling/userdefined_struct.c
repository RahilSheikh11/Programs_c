#include<stdio.h>
struct apple
{
int id;
char dept[20];
};
void main(){
struct apple ap;
printf("Please enter your ID and Department");
scanf("%d",&ap.id);
scanf("%s",&ap.dept);
printf("\n%d\n%s",ap.id,ap.dept);
}