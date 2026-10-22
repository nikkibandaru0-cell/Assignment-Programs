#include<stdio.h>
void main()
{
int user_ID,password;
printf("Enter user_ID & password");
scanf("%d%d",&user_ID,&password);
if(user_ID!=101)
{
    printf("User not found");
}
else if(password==4321)
{
    printf("Login successful");
}
else
{
    printf("Incorrect password");
}
}