#include<stdio.h>
int main(){
int arr[5]={1, 2, 4, 6, 9};
int n, br=0;
do {
    printf("n=");
    scanf("%d", &n);
}while (n<1);
printf("masiva: ");
for (int i = 0;i<5;i++){
    printf("%d ", arr[i]);
    if (n==arr[i])
    printf("\n%d", i);
else
    br+=1;
}
if(br==5)printf("\nnqma takova chislo v masiva");
return 0;
}
