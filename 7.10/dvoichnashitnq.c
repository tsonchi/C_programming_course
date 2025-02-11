#include <stdio.h>

int main() {
    int n;
    printf("vuvedi n: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("dvoichno: 0\n");
        return 0;
    }

    long dvoichno = 0;
    long poziciq = 1;

    while (n > 0) {
        int ostatyk = n % 2;
        dvoichno += ostatyk * poziciq;
        poziciq *= 10;
        n /= 2;
    }

    printf("dvoichno: %ld\n", dvoichno);
    return 0;
}
