#include<stdio.h>
#include<math.h>
#include "quadraticroots.h"

struct QuadraticRootsResult findroots(double a, double b, double c){

  struct QuadraticRootsResult result;
  result.norealroots = '0';
  double descriminant; 
  descriminant = (b * b) - 4 * a * c; 
  if(descriminant > 0){
    result.x1 = ((b * -1) + sqrt(descriminant)) / (2 * a);
    result.x2 = ((b * -1) - sqrt(descriminant)) / (2 * a);
  }
  else if(descriminant == 0){
    result.x1 = ((b * -1) + sqrt(descriminant)) / (2 * a);
    result.x2 = result.x1; 
  }
  else{
    result.norealroots = '1';
  }
  return result;
}