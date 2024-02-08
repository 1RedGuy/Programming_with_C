#include<stdio.h>
#include<math.h>
#define MAX_COUNT 5
int main(){
  long array[MAX_COUNT];
  printf("\n Enter elements: ", &array);
    for (int i = 0; i < MAX_COUNT; i++) {
        printf("Enter element[%d]: ", i + 1);
        scanf("%ld", &array[i]);
    }
  for(int i = 0; i < MAX_COUNT; i++){
    array[i] = pow(array[i], 4);
  }
  for(int i = 0; i < MAX_COUNT; i++){
    printf("\n %ld", array[i]);
  }
}