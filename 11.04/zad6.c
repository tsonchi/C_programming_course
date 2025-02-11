#include <stdio.h>

#define SWAP(A, B, TYPE) \
    do { \
        TYPE temp = A; \
        A = B; \
        B = temp; \
    } while (0)

#define SORT(ARRAY, SIZE, TYPE, COMPARE) \
    do { \
        for (int i = 0; i < (SIZE) - 1; i++) { \
            for (int j = i + 1; j < (SIZE); j++) { \
                if (!((ARRAY[i]) COMPARE (ARRAY[j]))) { \
                    SWAP(ARRAY[i], ARRAY[j], TYPE); \
                } \
            } \
        } \
    } while (0)

int main() {
    int array[5] = {5, 3, 4, 1, 2};


    SORT(array, 5, int, <);
    printf("Sorted array (wuzhodqshto): ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");


    SORT(array, 5, int, >);
    printf("Sorted array (nizhodqshto): ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}