#include<stdio.h>

#define SWAP(A, B, TYPE) TYPE temp = A; \
  A = B;\
  B = temp;

#define SORT(ARRAY, SIZE, TYPE, COMPARE) if(#COMPARE == "<"){\
  for(TYPE i = 0; i < SIZE; i++){\
    for(TYPE j = i + 1; j < SIZE; j++){\
      if(ARRAY[i] < ARRAY[j]){\
        SWAP(ARRAY[i], ARRAY[j], TYPE);\
    }\
  }\
}\
}\
else{\
  for(TYPE i = 0; i < SIZE; i++){\
    for(TYPE j = i + 1; j < SIZE; j++){\
      if(ARRAY[i] > ARRAY[j]){\
        SWAP(ARRAY[i], ARRAY[j], TYPE);\
      }\
    }\
  }\
}

int main(){
  int arr[4], i;
  
  for(i = 0; i < 4; i++){
    printf("\n Enter arr[%d]: ", i + 1);
    scanf("%d", &arr[i]);
  }

  SORT(arr, 4, int, <);
  for(i = 0; i < 4; i++){
    printf("\n Enter arr[%d] = %d ", i + 1, arr[i]);
  }
  SORT(arr, 4, int, >);
  for(i = 0; i < 4; i++){
    printf("\n Enter arr[%d] = %d ", i + 1, arr[i]);
  }
}