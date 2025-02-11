#include <stdio.h>
#include <math.h>

int main() {
    long arr[] = {1, 2, 3, 6, 5};

    for (int i = 0; i < 5; i++) {
        arr[i] = (long)pow(arr[i], 4);
    }
    printf("Array na chetvurta stepen:\n");
    for (int i = 0; i < 5; i++) {
        printf("%ld ", arr[i]);
    }
    printf("\n");

    return 0;
}
