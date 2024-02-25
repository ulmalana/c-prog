#include "average.h"
#include <stdio.h>

extern double average(double a, double b);
int main(void) {
  double a = 10.0, b = 2;

  printf("average of %.2f and %.2f = %.2f\n", a, b, average(a, b));

  return 0;
}
