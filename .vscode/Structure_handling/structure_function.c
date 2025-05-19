#include<stdio.h>
#include<string.h>

struct Archer
{
    int id;
    char name[20];
    int num;
    char dept[20];
};
void main(){
    struct Archer arch={12,"test"};
    struct Archer arch1={122,"test1"};
   // printf("\n%d\n%s",arch.id,arch.name);
    //printf("\n%d\n%s",arch1.id,arch1.name);
    printf("enter num and dept");
    scanf("%d",&arch.id);
    scanf("%s",&arch.dept);
    printf("\n%d\n%s",arch.id,arch.dept);

}