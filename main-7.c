#include<stdio.h>
void main()
{
int mark;
printf("Enter mark of the student");
scanf("%d",&mark);
if(mark>=90&&mark<=100)
{
    printf("Grade O");
}
else if(mark>=80&&mark<=89)
{
    printf("Grade A+");
}
else if(mark>=70&&mark<=79)
{
    printf("Grade A");
}
else if(mark>=60&&mark<=69)
{
    printf("Grade B");
}
else if(mark>=50&&mark<=59)
{
    printf("Grade C");
}
else if(mark<50&&mark>0)
{
    printf("Fail");
}
else if(mark<=0||mark>100)
{
    printf("Invalid Input");
}
}