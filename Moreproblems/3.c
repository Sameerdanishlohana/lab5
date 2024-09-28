#include <stdio.h>

int main() {
    char original_char, encrypted_char, decrypted_char;
    char key = 0x3F;
    
    printf("Enter a character to encrypt: ");
    scanf(" %c", &original_char);
    
    // Encryption
    encrypted_char = original_char ^ key;
    printf("Encrypted character: %c (ASCII: %d)\n", encrypted_char, encrypted_char);
    
    // Decryption
    decrypted_char = encrypted_char ^ key;
    printf("Decrypted character: %c (ASCII: %d)\n", decrypted_char, decrypted_char);
    
    return 0;
}