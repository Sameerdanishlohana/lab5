#include <stdio.h>
int main()
{
int num;
printf("Enter a integer:");
scanf("%d",&num);
if(num>0)
{
    if(num%2==0)
    {
        printf("The entered number is positive and Even.\n");
    }
    else
    {
        printf("The entered number is positive and ODD.\n");
    }
}
else if(num<0)
{
    printf("The entered number is negative.\n");
}
else
{
    printf("The entered number is zero.\n");
}
return 0;
}