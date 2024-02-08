#include<stdio.h>
#include "mystrings.h"

int main(int argc, char **argv){
  if(strlenght(argv[1]) > 50 || strlenght(argv[2]) > 50){
    printf("\n Wrong size of strings!");
    return 0; 
  }
  strconcat(argv[1], argv[2]);
  printf("\n Your conceatenates string is: %s", argv[1]);
  return 0;
}