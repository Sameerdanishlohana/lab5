#include <stdio.h>
int main()
{
int a,b;
printf("Enter two numbers 'a' and 'b': ");
scanf(" %d%d",&a,&b);
a>b ? printf("a is maximum.\n"):printf("b is maximum.\n");

return 0;
}