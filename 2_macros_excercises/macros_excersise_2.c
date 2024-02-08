#include<stdio.h>
#define MACRO(a, b, c) c = a > b ? a :b

int main(){
  int a = 3, b = 2, c = 0;
  MACRO(a, b, c);
  printf("%d", c);
}
