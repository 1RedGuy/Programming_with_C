#ifndef SAFEINT_H
#define SAFEINT_H

struct SafeResult{
  int value;
  char errorflag; 
};
struct SafeResult safeadd(int num1, int num2);
struct SafeResult safesubtract(int num1, int num2);
struct SafeResult safemultiply(int num1, int num2); 
struct SafeResult safedevide(int num1, int num2);
struct SafeResult safestrtoint(char str1[]);

#endif