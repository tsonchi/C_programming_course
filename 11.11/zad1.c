#include <stdio.h>
#define DEBUG
void sort(int array[5],int a, int sum){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            if (array[i]<array[j]){
            a =  array[i];
            array[i] = array[j];
            array[j] = a;
            }
        }
        
    }
    for (int i = 0;i<5;i++){
        if (i%3==0){
            sum+=array[i];
        }
    }
            #ifdef DEBUG
    for (int i = 0;i<5;i++){
        printf("%d ", array[i]);
    }
    printf("\n%d", sum);
    #endif
}
int main(){
    int array[5]= {4, 3, 7, 12, 202};
    int a, sum = 0;
    a=0;
    sort(array, a, sum);



    return 0;
}
