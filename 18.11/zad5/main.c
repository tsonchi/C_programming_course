#include <stdio.h>
#include "maths.h"

int main() {
    unsigned int number = 10;

    printf("Factorial of %u is %llu\n", number, factorial(number));

    return 0;
}
