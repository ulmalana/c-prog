
#include <stdio.h>

int main(void) {
  float x;
  printf("Enter value of x: ");
  scanf("%f", &x);

  printf("Polynomial 3x^5 + 2x^4 - 5x^3 - x^2 - 7x - 6 with x = %.1f has value "
         "%f \n",
         x, (x * (x * (x * (x * (3 * x + 2) - 5) - 1) + 7) - 6));
  return 0;
}
