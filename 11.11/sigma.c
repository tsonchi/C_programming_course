#include <stdio.h>
#define DEBUG
void sort(int n, int array[],int sum){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            if (array[i]<array[j]){
            int a =  array[i];
            array[i] = array[j];
            array[j] = a;
            }
        }
        
    }
    for (int i = 0;i<n;i++){
        if (i%3==0){
            sum+=array[i];
        }
    }
            #ifdef DEBUG
        printf("sortiran masiv = ");
    for (int i = 0;i<n;i++){
        printf("%d ", array[i]);
    }
    printf("\nsum = %d", sum);
    #endif
}
int main(){
    int n;
    printf("n = ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("arr = ");
        scanf("%d", &array[i]);
    }
    
    int sum = 0;
    sort(n, array, sum);

    return 0;
}
