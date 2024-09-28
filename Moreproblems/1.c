#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter three numbers 'a','b'and'c': ");
scanf(" %d%d%d",&a,&b,&c);
if(a>b)
{
    if(a>c)
    printf("%d is greatest.\n",a);
    else
    printf("%d is greatest.\n",c);
}
else if(b>a)
{
    if(b>c)
    printf("%d is greatest.\n",b);
    else
    printf("%d is greatest.\n",c);
}
else
printf("invalid input.\n");
return 0;
}