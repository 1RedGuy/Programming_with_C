#include<stdio.h>
#include "maths.h"

int factoriel(int number){
  int result, i;
  result = number;
  i = number - 1;
  while(i > 0){
    result = result * i;
    i = i - 1;
  }
  return result;
}