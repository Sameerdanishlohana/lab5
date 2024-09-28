#include <stdio.h>

int main() {
    int age, credit_score;
    float income;

    // Get user input
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your monthly income: ");
    scanf("%f", &income);

    printf("Enter your credit score: ");
    scanf("%d", &credit_score);


    if (age >= 21 && age<70 && income >= 50000.0 && credit_score >= 250) 
        printf("Congratulations! You are eligible for loan.\n");
     
    else if (age < 21) 
            printf("You must be at least 21 years old to be eligible for loan.\n");
        
    else if (income < 50000.0) 
            printf("Your monthly income must be at least 50,000 to be eligible for loan.\n");
        
    else if (credit_score < 250) 
            printf("Your credit score must be at least 250 to be eligible for loan.\n");
        else
            printf("You are not eligible for loan.\n");
        
    

    return 0;
}