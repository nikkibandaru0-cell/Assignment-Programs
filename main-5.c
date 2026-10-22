#include<stdio.h>
void main()
{
int membership;
float amount,discount,delivery,payable;
printf("Enter order amount:");
scanf("%f",&amount);
printf("Enter membership(1-Premium,0-Regular):");
scanf("%d",&membership);
if(amount>=500&&membership==1)
{  
    discount=amount*10/100;
    delivery=0;
}
else if(amount>=500&&membership==0)
{
    discount=0;
    delivery=0;
}
else
{
    discount=0;
    delivery=50;
}
payable=amount-discount+delivery;
printf("Final amount to pay=Rs.%.2f",payable);
}