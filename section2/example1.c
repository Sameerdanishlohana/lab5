#include <stdio.h>
int main() {
int age = 20;
int hasLicense = 1;
if (age >= 18 && hasLicense) {
printf("You are eligible to drive.\n");
} else {
printf("You are not eligible to drive.\n");
}
return 0;
}