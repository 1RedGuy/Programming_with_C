#include<stdio.h>
#define DEBUG(X) printf("The variable '%s' is equal to %d, it is used in file '%s' at line %d", #X, X, __FILE__, __LINE__)

void main(){
  int i = 5;
  DEBUG(i);
}