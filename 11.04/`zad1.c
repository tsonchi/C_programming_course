#include <stdio.h>

#define ARRAY(TYPE, NAME) TYPE NAME[5]
#define PRINT_ARRAY(NAME) \
    for (int i = 0; i < 5; i++) { \
        printf("%d : %d\n", i, NAME[i]); \
    }

int main() {
    ARRAY(int, myArray) = {1, 2, 3, 4, 5};
    PRINT_ARRAY(myArray);
    return 0;
}