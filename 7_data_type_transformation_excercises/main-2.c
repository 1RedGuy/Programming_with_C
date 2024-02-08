#include<stdio.h>

int main(){

  unsigned char lights = 0, help_light;
  int decision, switch_light, exit = 0;

  printf("\n Program has started, all lights are off"); 

  while(1){

    printf("\n 1 - Switch Lights");
    printf("\n 2 - Print State");
    printf("\n 3 - Exit");
    printf("\n Choose an option: ");
    scanf("%d", &decision);

    switch(decision){
      case 1: {
        printf("\n Choose light to switch: ");
        scanf("%d", &switch_light);
        help_light = 1 << (switch_light - 1);
        if((lights & help_light) == 0){

          lights = lights | help_light; 
        }
        else{
          lights = lights & (~help_light);
        }
      } break;
    case 2: {
        for (int i = 7; i >= 0; i--) {
      printf("%d", (lights >> i) & 1);
    }
    } break;
    case 3: {
      exit = 1;
    } break;
    }
    if(exit)break;
  }
}