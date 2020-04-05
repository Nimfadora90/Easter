#include<stdio.h>
#define STARTYEAR 2010
#define ENDYEAR   2029

int main() {
  int year, a, b, c, d, e;
  for (year=STARTYEAR; year
    <=ENDYEAR; year++){
    a=year % 19;
    b= year % 4;
    c= year % 7;
    d= (19*a+15) % 30;
    e= (2*b+4*c+6*d+6) % 7;

    printf("Easter in the year %d: ", year);

    if (d+e+4>30){
      printf("  May %d\n", d+e-26);
    }
    else{
      printf("April %d\n", d+e+4);
    }
  }
}
