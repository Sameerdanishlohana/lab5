#include <stdio.h>

int main() {
    int num, sum, digit1, digit2;
    printf("Enter a number: ");
    scanf("%d", &num);
    sum = num / 10 + num % 10;
    if (sum < 10)
     {
        printf("Sum of digits: %d\n", sum);
    }
    else {
        digit1 = sum / 10;
        digit2 = sum % 10;
        sum = digit1 + digit2;
        if (sum < 10) {
            printf("Sum of digits: %d\n", sum);
        } else {
            digit1 = sum / 10;
            digit2 = sum % 10;
            sum = digit1 + digit2;

            if (sum < 10) {
                printf("Sum of digits: %d\n", sum);
            } else {
                digit1 = sum / 10;
                digit2 = sum % 10;
                sum = digit1 + digit2;

                printf("Sum of digits: %d\n", sum);
            }
        }
    }

    return 0;
}