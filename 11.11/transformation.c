#include "transformation.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <errno.h>

transformation string_to_long(const char *str) {
    transformation res;
    res.result = 0;
    res.error[0] = '\0';

    if (str == NULL || *str == '\0') {
        strcpy(res.error, "Invalid input string");
        return res;
    }

    char *endptr;
    errno = 0;
    long value = strtol(str, &endptr, 10);

    if (errno != 0 || *endptr != '\0') {
        strcpy(res.error, "Invalid input string");
    } else {
        res.result = value;
    }

    return res;
}
