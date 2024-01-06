#include <stdio.h>

int main(void) {
  float x;
  printf("Enter value of x: ");
  scanf("%f", &x);

  printf("Polynomial 3x^5 + 2x^4 - 5x^3 - x^2 - 7x - 6 with x = %.1f has value "
         "%f \n",
         x,
         (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) -
             (x * x) + (7 * x) - 6);
  return 0;
}
