#include<stdio.h>
void main()
{
char n;
printf("Enter alphabet");
scanf("%c",&n);
if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
printf("vowel");
else
printf("not a vowel");
}