#include<stdio.h>
void main()
{
int a;
printf("Enter a value:");
scanf("%d",&a);
if(a>0)
  printf("\n%d is Positive Number",a);
  else if(a<0)
  printf("\n%d is Negative Number",a);
  else if(a==0)
  printf("\nInput is 0");
  else
  printf("Invalid Input");
}