#include<stdio.h>
#include "maths.h"

int main(){
  int result, n;
  printf("\n Enter n: ");
  scanf("%d", &n);
  result = factoriel(n);
  printf("%d", result);
}