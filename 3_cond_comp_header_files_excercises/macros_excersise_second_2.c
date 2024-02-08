#include<stdio.h>
#define ARRAY_SIZE 5
int func(int a){
  int result = 1;
  for(;a > 0; a--){
    result = result * 2;
  }
  return result;
}
int main(){
  #if(defined ARRAY_SIZE) && (ARRAY_SIZE < 10 && ARRAY_SIZE > 1)
  int array[ARRAY_SIZE], i;
  for(i = 0; i < ARRAY_SIZE; i++){
    printf("\n Enter array[%d]: ", i);
    scanf("%d", &array[i]);
  }
  for(i = 0; i < ARRAY_SIZE; i++){
    array[i] = array[i] * (func(i));
  }
  for(i = 0; i < ARRAY_SIZE; i++){
    printf("\n Array[%d] = %d", i, array[i]);
  }
  #else 
  printf("\n Array Size must be defined, greater than 1 and less than 10!");
  #endif
}