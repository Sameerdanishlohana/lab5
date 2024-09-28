#include <stdio.h>
int main()
{
int n;
printf("Enter a number: ");
scanf(" %d",&n);
n>0 ? printf("It's a positive number.\n"): n<0 ? printf("It's a negative number.\n"):printf("The number is zero");

return 0;
}