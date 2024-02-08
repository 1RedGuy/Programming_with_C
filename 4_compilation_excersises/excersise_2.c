#include<stdio.h>

int main(){
  int a, b, max, nok;
  printf("\n Enter a: ");
  scanf("%d", &a); 
  printf("\n Enter b: ");
  scanf("%d", &b); 
  if(a > b){
    max = a;
  }
  else{
    max = b; 
  }
  nok = max;
  while (nok % a != 0 || nok % b != 0) {
        nok += max; 
    }
  printf("%d", nok);
  return 0;
}
