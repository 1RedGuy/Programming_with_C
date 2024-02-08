#include<stdio.h>
#include "mystrings.h"

int main(int argc, char **argv){
  if(argc != 2){
    printf("\n Invlaid number of arguments!");
    return 0; 
  }
  int lenght = strlenght(argv[1]);
  printf("\n Your string lenght is: %d", lenght);
  return 0; 
}