#include <stdio.h>

void printLightsState(unsigned char state) {
  int stateBits = sizeof(state) * 8;
  for (int i = stateBits- 1; i >= 0; i--) {
    printf("Light %d - %u\n", i + 1, (state >> i) & 1);
  }
  printf("\n");
}
int main(){
    int b, c;
    int errorFlag = 0;
    unsigned char lights = 0;

    unsigned char light1 = 1 << 0;
    unsigned char light2 = 1 << 1;
    unsigned char light3 = 1 << 2;
    unsigned char light4 = 1 << 3;
    unsigned char light5 = 1 << 4;
    unsigned char light6 = 1 << 5;
    unsigned char light7 = 1 << 6;
    unsigned char light8 = 1 << 7;
  do{
      printf("\n1.Switch light\n2.Print state\n3.Exit\nChose an action: ");
      scanf("%d", &b);
    switch(b){
      case 1: {   printf("Switch light: ");
    scanf("%d", &c);
        switch (c){
            case 1:  {
            if (lights & light1) {
            lights &= ~light1;
            }
            else lights |= light1; break;
            }
            case 2:  {
            if (lights & light2) {
            lights &= ~light2;
            }
            else lights |= light2; break;
            }
            case 3:  {
            if (lights & light3) {
            lights &= ~light3;
            }
            else lights |= light3; break;
            }
            case 4:  {
            if (lights & light4) {
            lights &= ~light4;
            }
            else lights |= light4; break;
            }
            case 5:  {
            if (lights & light5) {
            lights &= ~light5;
            }
            else lights |= light5; break;
            }
            case 6:  {
            if (lights & light6) {
            lights &= ~light6;
            }
            else lights |= light6; break;
            }
            case 7:  {
            if (lights & light7) {
            lights &= ~light7;
            }
            else lights |= light7; break;
            }
            case 8:  {
            if (lights & light8) {
            lights &= ~light8;
            }
            else lights |= light8; break;
            }
        
            default: printf("nqma takava lampa sigma");
        }}break;
      case 2: printLightsState(lights); break;
      case 3: errorFlag = 1; break;
      default: printf("\nTry a number from 1 to 3");
    }
  }while(errorFlag != 1);
  return 0;
}