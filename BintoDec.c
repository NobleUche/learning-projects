#include <stdio.h>

void decimalToBinary(int n) {
    // Array to store binary digits
    int binary[32]; // Assuming a maximum of 32 bits for the binary representation
    int index = 0;

    // Handle the case when n is 0
    if (n == 0) {
        printf("Binary: 0\n");
        return;
    }

    // Convert decimal to binary
    while (n > 0) {
        binary[index] = n % 2; // Store the remainder (0 or 1)
        n = n / 2;              // Divide n by 2
        index++;
    }

    // Print the binary representation in reverse order
    printf("Binary: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    decimalToBinary(decimal); // Call the function to convert and print binary

    return 0;
}