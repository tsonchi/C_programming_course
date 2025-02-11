#include "safeint.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <int1> <int2>\n", argv[0]);
        return 1;
    }

    SafeResult a = safestrtoint(argv[1]);
    SafeResult b = safestrtoint(argv[2]);

    if (a.errorflag || b.errorflag) {
        printf("Invalid input values\n");
        return 1;
    }

    SafeResult result = safedivide(a.value, b.value);
    if (result.errorflag) {
        if (b.value == 0) {
            printf("Error: Division by zero\n");
        } else {
            printf("Overflow/Underflow detected during division\n");
        }
    } else {
        printf("Result: %d\n", result.value);
    }

    return 0;
}
