#include<stdio.h>
struct pointer_struct
{
int id;
char *name;
};
void main(){
    
    struct pointer_struct ab={1,"java"};
    struct pointer_struct *ab1;
    ab1=&ab;
printf("\n%d",ab1->id);
printf("\n%s",ab1->name);
}
