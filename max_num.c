#include <stdio.h>
#include <limits.h>

void printMaxValues() {
    // Maximum value for signed int
    printf("Maximum value for signed int: %d\n", INT_MAX);

    // Maximum value for unsigned int
    printf("Maximum value for unsigned int: %u\n", UINT_MAX);
}

int main() {
    printMaxValues();
    return 0;
}

