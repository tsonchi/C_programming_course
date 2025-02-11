#include "safeint.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    if (argc != 3) {
        printf("Usage: %s <int1> <int2>\n", argv[0]);
        return 1;
    }

    SafeResult a = safestrtoint(argv[1]);
    SafeResult b = safestrtoint(argv[2]);

    if (a.errorflag || b.errorflag) {
        printf("Error: One or both inputs are invalid or out of range.\n");
        return 1;
    }

    SafeResult result = safeadd(a.value, b.value);
    if (result.errorflag) {
        printf("Error: Addition overflow or underflow occurred.\n");
    } else {
        printf("Result: %d\n", result.value);
    }

    return 0;
}
