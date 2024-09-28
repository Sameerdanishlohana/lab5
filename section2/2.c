#include <stdio.h>

int main() {
    int age;
    char citizen;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Are you a citizen?, Enter 'y'for yes,'n' for no: ");
    scanf(" %c", &citizen);

    if (age >= 18 && citizen == 'y') 
        printf("You are eligible to vote.\n");
    
    else if(age>=18 && citizen=='n') 
        printf("You are not eligible to vote.\n");
    
    else
        printf("You are not eligible to vote.\n");

    return 0;
}