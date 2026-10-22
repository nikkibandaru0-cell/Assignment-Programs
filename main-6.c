#include<stdio.h>
void main()
{
int age,monthly_income,credit_score;
printf("Enter your age,monthly_income,credit_score:");
scanf("%d%d%d",&age,&monthly_income,&credit_score);
if(age<21||age>60)
{
    printf("Loan Rejected:age is not between 21 and 60");
}
else if(monthly_income<25000)
{
    printf("Loan Rejected:income below Rs25000");
}
else if(credit_score<700)
{
    printf("Loan Rejected:credit score below 700");
}
else
{
    printf("Loan Approved");
}
}