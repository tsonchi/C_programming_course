
#include <stdio.h>

int main(){
int arr[5]={1, 4, 3, 7, 5};
int a, sum=0;

for (int i = 0;i<5;i++){
        for (int j = i + 1;j<5;j++){
 if (arr[i] > arr[j])
        {
            a =  arr[i];
            arr[i] = arr[j];
            arr[j] = a;
        }
}}

for (int i =0; i < 5; i++){
    sum+=arr[i]*i;
}
printf("podreden masiv: ");
for (int i = 0;i<5;i++){
        printf("%d ", arr[i]);
}
printf("\nsumata = %d", sum);
return 0;
}
