#include <stdio.h>
#include "quadraticroots.h"

void print_results(QuadraticRootsResult result) {
    if (result.norealroots) {
        printf("Уравнението няма реални корени.\n");
    } else {
        printf("Корен 1: %.6Lf\n", result.x1);
        printf("Корен 2: %.6Lf\n", result.x2);
    }
}

int main() {
    printf("Пример с int аргументи:\n");
    int a = 1, b = -3, c = 2;
    QuadraticRootsResult result1 = findroots(a, b, c);
    print_results(result1);

    printf("\nПример с float аргументи:\n");
    float af = 1.0f, bf = -3.0f, cf = 2.0f;
    QuadraticRootsResult result2 = findroots(af, bf, cf);
    print_results(result2);

    printf("\nПример с double аргументи:\n");
    double ad = 1.0, bd = -3.0, cd = 2.0;
    QuadraticRootsResult result3 = findroots(ad, bd, cd);
    print_results(result3);

    return 0;
}
