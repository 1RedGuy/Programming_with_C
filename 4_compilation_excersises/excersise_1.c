#include<stdio.h>
#define MACRO(A, B) ((A) + (B)) * ((A) + (B));

int main(){
    int a = 3, b = 2, c;
    c = MACRO(3,2 )
    printf("%d", c);
}