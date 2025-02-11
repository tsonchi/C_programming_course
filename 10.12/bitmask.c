#include <stdio.h>

void printLightsState(unsigned char state) {
  int stateBits = sizeof(state) * 8;
  for (int i = stateBits- 1; i >= 0; i--) {
    printf("Light %d - %u\n", i + 1, (state >> i) & 1);
  }
  printf("\n");
}

void action(b, lights, a, light1, light2, light3, light4, light5, light6, light7, light8, n, errorFlag, c){
  do{
      printf("\n1.Turn on a light\n2.Turn off a light\n3.Check if a light is turned on\n4.Exit\nChose an action: ");
      scanf("%d", &b);
    switch(b){
      case 1: turnon(lights, a, light1, light2, light3, light4, light5, light6, light7, light8); break;
      case 2: turnoff(lights, a, light1, light2, light3, light4, light5, light6, light7, light8); break;
      case 3:isitturnedon(b, lights, a, light1, light2, light3, light4, light5, light6, light7, light8, n, errorFlag, c);
      case 4: errorFlag = 1; break;
      default: printf("\nTry a number from 1 to 4");
    }
  }while(errorFlag != 1);
}

void turnon(lights, a, light1, light2, light3, light4, light5, light6, light7, light8){
    printf("Turn on a light: ");
    scanf("%d", &a);
        switch (a){
            case 1:lights |= light1; break;
            case 2:lights |= light2; break;
            case 3:lights |= light3; break;
            case 4:lights |= light4; break;
            case 5:lights |= light5; break;
            case 6:lights |= light6; break;
            case 7:lights |= light7; break;
            case 8:lights |= light8; break;
            default: printf("nqma takava lampa sigma");
        }
    printLightsState(lights);
}

void turnoff(lights, a, light1, light2, light3, light4, light5, light6, light7, light8){
    printf("Turn off a lamp: ");
    scanf("%d", &a);
        switch (a){
            case 1:lights &= ~light1; break;
            case 2:lights &= ~light2; break;
            case 3:lights &= ~light3; break;
            case 4:lights &= ~light4; break;
            case 5:lights &= ~light5; break;
            case 6:lights &= ~light6; break;
            case 7:lights &= ~light7; break;
            case 8:lights &= ~light8; break;
            default: printf("nqma takava lampa sigma");
        }
    printLightsState(lights);
}

void isitturnedon(b, lights, a, light1, light2, light3, light4, light5, light6, light7, light8, n, errorFlag, c){
    printf("Check if a light is turned on: ");
    scanf("%d", &c);
        switch (c){
            case 1:  {
            if (lights & light1) {
            printf("Light 1 is turned on!\n");
            }
            else printf("It's turned off "); break;
            }
            case 2: {
            if (lights & light2) {
            printf("Light 2 is turned on!\n");
            } else printf("It's turned off "); break;
            }
            case 3: {
            if (lights & light3) {
            printf("Light 3 is turned on!\n");
            } else printf("It's turned off "); break;
            }
            case 4: {
            if (lights & light4) {
            printf("Light 4 is turned on!\n");
            } else printf("It's turned off "); break;
            }
            case 5: {
            if (lights & light5) {
            printf("Light 5 is turned on!\n");
            } else printf("It's turned off "); break;
            }
            case 6: {
            if (lights & light6) {
            printf("Light 6 is turned on!\n");
            } else printf("It's turned off "); break;
            }
            case 7: {
            if (lights & light7) {
            printf("Light 7 is turned on!\n");
            } else printf("It's turned off "); break;
            }
            case 8: {
            if (lights & light8) {
            printf("Light 8 is turned on!\n");
            } else printf("It's turned off "); break;
            }
            default: printf("nqma takava lampa sigma");
        }
    action(b, lights, a, light1, light2, light3, light4, light5, light6, light7, light8, n, errorFlag);
}

int main(){
    int n, a, b, c;
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
    printLightsState(lights);
    action(b, lights, a, light1, light2, light3, light4, light5, light6, light7, light8, n, errorFlag);
    return 0;
}