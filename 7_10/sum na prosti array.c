#include<stdio.h>
int main(){
int arr[8]={1, 7, 10, 15, 16, 13, 23, 30};
int del, sum, mn;
del=2;
sum = 0;
int br=0;
for(int i = 0;i<8;i++){
/*while (mn<=arr[i]){

   if(arr[i]%mn==0){
        br++;
   }
    mn++;
   }*/
for(int mn=1;mn<=arr[i];mn++){
        if(arr[i]%mn==0)
        br++;
   }

   if (br==2) sum+=arr[i];
   br = 0;
}
printf("%d", sum);
return 0;
}
