#include <stdio.h>
struct Student{

char name[50];
int nomer;
int ocenki[5];
};
void main(){
struct Student std1 = {std1.name, std1.nomer, std1.ocenki};
struct Student std2 = {std2.name, std2.nomer, std2.ocenki};

    int arr[5]={4, 5, 6, 3, 6};
    int arr2[5]={3, 2, 4, 3, 5};
    float sum=0, sum1=0;

    printf("ime=");
    scanf("%s", &std1.name);
    printf("nomer v klasa =");
     scanf("%d", &std1.nomer);
     for (int j = 0;j<5;j++){
          std1.ocenki[j]=arr[j];
          sum+=std1.ocenki[j];
        }
        sum /= 5;
    printf("%s %d\n", std1.name, std1.nomer);
    printf("sum ot ocenki=");
          printf("%.2f\n", sum);

        printf("ime=");
    scanf("%s", &std2.name);
    printf("nomer v klasa=");
     scanf("%d", &std2.nomer);
     for (int i = 0;i<5;i++){
          std2.ocenki[i]=arr2[i];
          sum1 +=  std2.ocenki[i];
        }
         sum1 /= 5;
          printf("%s %d", std2.name, std2.nomer);
              printf("\nsum ot ocenki=");
        printf("%.2f", sum1);


}
