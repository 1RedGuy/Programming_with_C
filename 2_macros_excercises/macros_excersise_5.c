#include <stdio.h>

#define SWAP(A, B, TYPE) TYPE (temp_ ## A) = A; \
  A = B;\
  B = (temp_ ## A);

int main() {
  int a = 2, b = 3;
  float c = 2.5, d = 3.5;

  SWAP(a, b, int);
  SWAP(c, d, float);
  printf("\n a = %d, b = %d", a, b);
  printf("\n c = %.2f, d = %.2f", c, d);
  return 0;
}