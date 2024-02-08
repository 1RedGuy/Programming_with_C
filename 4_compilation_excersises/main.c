#include<stdio.h>
#include<string.h>
#include "transformation.h"

int main(){
  struct transformation b;  
  char your_string[100];
  printf("\n Enter a string: ");
  scanf("%s", your_string);
  b = trans_function(your_string);
  if(strcmp(b.error, "\0") == 0){
    printf("%ld", b.result);
  }
  else{
    printf("%s", b.error);
  }
}