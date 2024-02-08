#include<stdio.h>

int main(){
  int array[5] = {5, 3, 7, 1, 6}, i, j;

  #ifdef _WIN32
  for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
  #elif defined __linux__
  int minIndex;
  for (i = 0; i < 4; i++) {
        minIndex = i;
        for (j = i+1; j < 5; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = array[i];
        array[i] = array[minIndex];
        arr[minIndex] = temp;
    }
  #elif defined __APPLE__
  int key;
  for (i = 1; i < 5; i++) {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
  #else 
  int start = 0;
    int end = 4;
    int temp;

    while (start < end) {
        temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }
  #endif
}