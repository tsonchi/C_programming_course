#include <stdio.h>
#define FUNCTION(A, B) ((A) + (B)) * ((A) + (B))
int main(void){
    int a, b;
    printf("a = ");
    scanf("%d", &a);
    printf("\nb = ");
    scanf("%d", &b);
    printf("\na + b na kvadrat: %d", FUNCTION(a, b));
}