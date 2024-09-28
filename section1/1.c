#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 1)
    {
        if (age < 13)
        {
            printf("You are a child");
        }
        else if (age <= 19)
            {
                printf("You are a teenager");
            }
        else if (age < 65)
            {
                printf("You are an adult");
            }
            else
            {
                printf("You are a senior");
                
            }
        
    }
    else
    {
        printf("Invalid age");
    }

    return 0;
}