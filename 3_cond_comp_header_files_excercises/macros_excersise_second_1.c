#include<stdio.h>
#define DEBUG 

void func(int arr[], int size){
  int temp, sum = 0, i, j;
  for(i = 0; i < size; i++){
    for(j = i + 1; j < size; j++){
      if(arr[i] > arr[j]){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  for(i = 0; i < size; i++){
    if(i % 3 == 0){
      sum += arr[i];
      }
  }
  #ifdef DEBUG
  for(i = 0; i < 5; i++){
    printf("\n Array[%d] = %d", i + 1, arr[i]);
  }
  for(i = 0; i < 5; i++){
    if(i % 3 == 0)printf("\n The number %d is at index = %d", arr[i], i);
  }
  #endif
  printf("\n Sum = %d", sum);
}

int main(){
  int array[5] = {5,7,3,1,8}, i;
  func(array, 5);
  return 0;
}