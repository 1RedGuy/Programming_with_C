#include<stdio.h>
#include<limits.h>

#define MACRO(type, format, space, min_signed, max_signed, format_unsigned, max_unsigned) \
  printf("Type is: %9s | Format is: %4s | Size: %1d | \
  Smallest signed: %20lld | Biggest signed: %19lld | Unsigned format: %4s | Max unsigned: %llu\n", \
  #type, format, space, (long long)min_signed, (long long)max_signed, format_unsigned, (unsigned long long)max_unsigned)

int main(){

  MACRO(char, "%c", sizeof(char), CHAR_MIN, CHAR_MAX, "%c", UCHAR_MAX);
  MACRO(short, "%hi", sizeof(short), SHRT_MIN, SHRT_MAX, "%hu", USHRT_MAX);
  MACRO(int, "%d", sizeof(int), INT_MIN, INT_MAX, "%u", UINT_MAX);
  MACRO(long, "%ld", sizeof(long), LONG_MIN, LONG_MAX, "%lu", ULONG_MAX);
  MACRO(long long, "%lld", sizeof(long long), LLONG_MIN, LLONG_MAX, "%llu", ULLONG_MAX);

  return 0;
}