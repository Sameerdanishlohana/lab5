#include <stdio.h>

int main() {
    unsigned int num;
    printf("Enter a positive integer: ");
    scanf("%u", &num);
    num = num - ((num >> 1) & 0x55555555);
    num = (num & 0x33333333) + ((num >> 2) & 0x33333333);
    num = (num + (num >> 4)) & 0x0F0F0F0F;
    num = num + (num >> 8);
    num = num + (num >> 16);
    int result = num & 0x3F;
    
    printf("The number of 1s in the binary representation is: %d\n", result);
    
    return 0;
}