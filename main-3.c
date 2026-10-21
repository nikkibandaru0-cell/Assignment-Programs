#include<stdio.h>
void main()
{
    int l,b,perimeter,area;
printf("Enter l&b values:");
scanf("%d%d",&l,&b);
perimeter=2*(l+b);
printf("\n%d is Perimeter of the rectangle",perimeter);
area=l*b;
printf("\n%d is Area of the rectangle",area);
}