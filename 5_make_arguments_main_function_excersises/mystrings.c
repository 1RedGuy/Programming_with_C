#include<stdio.h>
#include "mystrings.h"

int strlenght(char target_string[]) {
    int length = 0;
    while (target_string[length] != '\0') {
        length++;
    }
    return length;
}


void strconcat(char target_string1[], char target_string2[]) {
  int i = 0, j = 0;
  
  while (target_string1[i] != '\0') {
      i++;
  }
    
  while (target_string2[j] != '\0') {
      target_string1[i] = target_string2[j];
      i++;
      j++;
  }
    
  target_string1[i] = '\0';
}



int strcompare(char target_string1[], char target_string2[]){
  int i = 0;
    while(target_string1[i] != '\0' && target_string2[i] != '\0'){
      if(target_string1[i] < target_string2[i]) {
          return -1; 
        }else if (target_string1[i] > target_string2[i]) {
            return 1; 
        }
        i++;
    }
    if (target_string1[i] == '\0' && target_string2[i] != '\0') {
        return -1; 
    } else if (target_string1[i] != '\0' && target_string2[i] == '\0') {
        return 1; 
    }

    return 0; 
}
