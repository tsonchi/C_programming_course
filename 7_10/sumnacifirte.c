#include <stdio.h>
int main(){
    int n, sum, k, x;
do {
    printf("n=");
    scanf("%d", &n);
}while (n<1);
sum=1;
while (n>0) {
    x=n%10;
    n=n/10;
    sum*=x;
}
printf("sum=%d", sum);
return 0;
}
