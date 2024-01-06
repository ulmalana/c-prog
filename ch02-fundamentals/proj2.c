#include <stdio.h>

int main(void) {
  float radius;
  printf("Enter the radius of sphere (meter): ");
  scanf("%f", &radius);

  printf("Volume of a sphere with radius %.1f m: %f\n", radius,
         4.0f / 3.0f * 3.1415f * radius * radius * radius);

  return 0;
}
