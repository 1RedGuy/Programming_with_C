#ifndef SCHOOLCLASS_H
#define SCHOOLCLASS_H
#include"person.h"

struct SchoolClass{
  struct person student[26];
  char class_symbol;
  int class_number;
  struct person teacher;
};
#endif