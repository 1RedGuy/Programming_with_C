#include<stdio.h>
#include<math.h>
#include "quadraticroots.h"

int main(){

  int a = 1, b = 2, c = -1;
  float d = 1, e = 2, f = -1;
  double g = 1, h = 2, i = -1;

  struct QuadraticRootsResult int_scenario = findroots(a, b, c);
  struct QuadraticRootsResult float_scenario = findroots(d, e, f);
  struct QuadraticRootsResult double_scenario = findroots(g, h, i);

  if(int_scenario.norealroots == '1'){
    printf("\n No real roots (int_scenarion)!");
  }
  else{
    printf("\n x1 = %lf ; x2 = %lf (int_scenarion)", int_scenario.x1, int_scenario.x2);
  }
  if(float_scenario.norealroots == '1'){
    printf("\n No real roots (float_scenarion)!");
  }
  else{
    printf("\n x1 = %lf ; x2 = %lf (float_scenarion)", float_scenario.x1, float_scenario.x2);
  }
  if(double_scenario.norealroots == '1'){
    printf("\n No real roots (double_scenarion)!");
  }
  else{
    printf("\n x1 = %lf ; x2 = %lf (double_scenarion)", double_scenario.x1, double_scenario.x2);
  }
}