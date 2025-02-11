#include <stdio.h>
#include "transformation.h"

int main() {
    const char *examples[] = {"-123", "12ab23", "456", "", "  789  ", NULL};
    size_t examples_count = sizeof(examples) / sizeof(examples[0]);

    for (size_t i = 0; i < examples_count; ++i) {
        const char *input = examples[i];
        transformation result = string_to_long(input);

        printf("Input: \"%s\"\n", input ? input : "NULL");
        printf("Result: %ld\n", result.result);
        if (result.error[0] != '\0') {
            printf("Error: %s\n", result.error);
        } else {
            printf("Error: None\n");
        }
        printf("\n");
    }

    return 0;
}
