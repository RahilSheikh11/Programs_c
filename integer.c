/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
  int c;
  double d;
  float r;
  char z;

printf("Enter the value of single Char");
z = getchar();
scanf("%c",&z);

  printf("Enter the value for Float");
  scanf("%f",&r);
  
  printf("Enter your Integer value");
  scanf("%d",&c);
  
  printf("Enter the value for the Decimal");
  scanf("%lf",&d);
  
  printf("\nHere is the value of the Decimal %lf",d);
  
  printf("\nHere is the value of your integer %d",c);
  
  printf("\nHere is the value for the Float %f",r);
 
  printf("\nHere is the value for the char %c",z);
}