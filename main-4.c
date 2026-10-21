#include<stdio.h>
void main()
{
int age;
printf("Enter age value:");
scanf("%d",&age);
if(age>=18)
  printf("Eligible to vote");
  else if (age<18)
  printf("Not Eligible to vote");
}