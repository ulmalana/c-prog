#include <stdio.h>

int main(void) {
  printf("%-8.1e\n", 3.1415);
  printf("%10.6e\n", 3.1415);
  printf("%-8.3f\n", 3.1415);
  printf("%6.f\n", 3.1415);
  return 0;
}
