#include<stdio.h>
struct employee
{
    int id;
    char name [20];
};

struct dept
{
    char name[25];
    int salary;
    struct employee em;
};
void main(){
struct dept department;
printf("Please enter your Employee ID ");
scanf("%d",&department.em.id);

printf("Please enter your Name ");
scanf("%s",&department.em.name);

printf("Enter your expected salary ");
scanf("%d",&department.salary);

printf("Please enter your Department ");
scanf("%s",&department.name);


printf("\n%d\n%s\n%s\n%d",department.em.id,department.em.name,department.name,department.salary);
}