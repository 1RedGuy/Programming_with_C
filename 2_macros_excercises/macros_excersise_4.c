#include<stdio.h>
#define COMMAND(NAME, TYPE) TYPE ## _ ## NAME ## _command
#define DEFINE_COMMAND(NAME, TYPE) void COMMAND(NAME, TYPE)(void)

DEFINE_COMMAND(one, function){
  printf("\n Printed from function one.");
}
DEFINE_COMMAND(two, function){
  printf("\n Printed from function two.");
}

void main(){
  function_one_command();
  function_two_command();
}