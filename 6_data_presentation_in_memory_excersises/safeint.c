#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include "safeint.h"


struct SafeResult safeadd(int num1, int num2){
  struct SafeResult result; 
  result.errorflag = '0'; 
  if((num1 > 0 && num1 > INT_MAX - num2) || (num2 < 0 && num1 < INT_MAX - num2 )){
    result.errorflag = 1; 
    return result;
  }
  result.value = num1 + num2;
  return result;
}

struct SafeResult safesubtract(int num1, int num2) {
  struct SafeResult result; 
  result.errorflag = '0'; 
  if ((num2 > 0 && num1 < INT_MIN + num2) || (num2 < 0 && num1 > INT_MAX + num2)) {
    result.errorflag = '1'; 
    return result;
  }
  result.value = num1 - num2; 
  return result; 
}

struct SafeResult safemultiply(int num1, int num2){
  struct SafeResult result;
  result.errorflag = '0'; 
  if(num1 > 0){
    if(num2 > 0 && num1 > INT_MAX / num2){
      result.errorflag = '1';
      return result; 
    }
    if(num2 <  0 && num1 < INT_MAX / num2){
      result.errorflag = '1'; 
      return result; 
    }
  }
  else if(num1 < 0){
    if(num2 > 0 && num1 < INT_MAX / num2){
      result.errorflag = '1';
      return result; 
    }
    if(num2 <  0 && num1 < INT_MAX / num2){
      result.errorflag = '1'; 
      return result; 
  }
}
  result.value = num1 * num2;
  return result; 
}

struct SafeResult safedevide(int num1, int num2){
  struct SafeResult result;
  result.errorflag = '0';
  if(num2 == 0){
    result.errorflag = '1';
    return result;
  }
  if(num1 == INT_MIN && num2 == -1){
    result.errorflag = '1';
    return result; 
  }
  result.value = num1 / num2;
  return result;
}

struct SafeResult safestrtoint(char str1[]){
  struct SafeResult result; 
  int digit, sign = 0, i = 0;
  result.errorflag = '0';
  result.value = 0; 

  if(str1[0] == '-'){
    sign = 1;
    i = 1;
  }

  for(; str1[i] != '\0'; i++){
    if(str1[i] >= '0' && str1[i] <= '9'){
      safemultiply(result.value, 10);
      safeadd(result.value, atoi(str1 - '0'));
  }
  else{
    result.value = 0;
    result.errorflag = '1';
    return result;
  }
  if(sign){
    result.value *= -1;
  }
  return result; 
  }
}
