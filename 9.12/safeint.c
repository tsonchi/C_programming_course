#include "safeint.h"
#include <limits.h>
#include <stdlib.h>
#include <errno.h>

SafeResult safeadd(int a, int b) {
    SafeResult result = {0, 0};
    if ((b > 0 && a > INT_MAX - b) || (b < 0 && a < INT_MIN - b)) {
        result.errorflag = 1;
    } else {
        result.value = a + b;
    }
    return result;
}

SafeResult safesubtract(int a, int b) {
    SafeResult result = {0, 0};
    if ((b < 0 && a > INT_MAX + b) || (b > 0 && a < INT_MIN + b)) {
        result.errorflag = 1;
    } else {
        result.value = a - b;
    }
    return result;
}

SafeResult safemultiply(int a, int b) {
    SafeResult result = {0, 0};
    if (a > 0 && b > 0 && a > INT_MAX / b) result.errorflag = 1;
    else if (a > 0 && b < 0 && b < INT_MIN / a) result.errorflag = 1;
    else if (a < 0 && b > 0 && a < INT_MIN / b) result.errorflag = 1;
    else if (a < 0 && b < 0 && a < INT_MAX / b) result.errorflag = 1;
    else result.value = a * b;
    return result;
}

SafeResult safedivide(int a, int b) {
    SafeResult result = {0, 0};
    if (b == 0 || (a == INT_MIN && b == -1)) {
        result.errorflag = 1;
    } else {
        result.value = a / b;
    }
    return result;
}

SafeResult safestrtoint(const char *str) {
    SafeResult result = {0, 0};
    char *endptr;
    long temp = strtol(str, &endptr, 10);

    if (endptr == str || *endptr != '\0' || errno == ERANGE || temp > INT_MAX || temp < INT_MIN) {
        result.errorflag = 1;
    } else {
        result.value = (int)temp;
    }
    return result;
}
