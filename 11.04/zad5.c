#define SWAP(A, B, TYPE) \
    do { \
        TYPE temp = A; \
        A = B; \
        B = temp; \
    } while (0)

int main() {
    int a = 5, b = 10;
    printf("Predi razmqna: a = %d, b = %d\n", a, b);
    SWAP(a, b, int);
    printf("Sled razmqna: a = %d, b = %d\n", a, b);
    return 0;
}
