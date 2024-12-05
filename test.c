#include <stdio.h>

int main() {
    int num = 5; // 0101 in binary
    int bit_position = 1; // We want to set the 1st bit (counting from 0)

    // Set the bit at position 1
    num |= (1 << bit_position); // Shift 1 to the left by 1 position and OR with num

    printf("After setting bit %d: %d\n", bit_position, num); // Output: 7 (0111 in binary)
    return 0;
}