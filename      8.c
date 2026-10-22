#include<stdio.h>
void main()
{
float weight,height,BMI;
printf("Enter weight in kg");
scanf("%f",&weight);
printf("Enter height in m");
scanf("%f",&height);
height=height/100;
BMI=weight/(height*height);
printf("BMI==%.2f\n",BMI);
if(BMI<18.5)
{
    printf("Underweight");
}
else if(BMI>=18.5&&BMI<25)
{
    printf("Normal");
}
else if(BMI>=25&&BMI<30)
{
    printf("overweight");
}
else
{
    printf("Obese");
}
}