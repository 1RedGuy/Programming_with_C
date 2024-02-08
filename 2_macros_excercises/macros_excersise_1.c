#include<stdio.h>
#define OMSIZE 5
#define MACRO_PRINT printf("\n %d", array[i])

void main(){
  int array[OMSIZE], i;
  for(i = 0; i < OMSIZE; i++){
    printf("\n Enter array[%d]: ", i + 1);
    scanf("%d", &array[i]);
  }
  for(i = 0; i < OMSIZE; i++){
    MACRO_PRINT;
  }
}