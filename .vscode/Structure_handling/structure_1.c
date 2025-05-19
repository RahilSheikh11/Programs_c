#include<stdio.h>
#include<string.h>

struct Archer
{
    int id;
    char *name;
    char name1[20];
};
void main(){
    struct Archer bc;
    bc.id=608;
    bc.name="Rahilahemad";
    strcpy(bc.name1,"Sheikh");
    printf("\n%d\n%s\n%s",bc.id,bc.name,bc.name1);
}