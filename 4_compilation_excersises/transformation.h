#ifndef TRANSFORMATION
#define TRANSFORMATION 
struct transformation
{
  long result; 
  char error[100];
};

struct transformation trans_function(char target_str[]);
#endif