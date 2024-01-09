#include <stdio.h>

int main(void) {

  int m, n, num, denom;
  printf("Enter two integers: ");
  scanf("%d/%d", &m, &n);

  num = m;
  denom = n;

  while (n > 0) {
    int r = m % n;
    m = n;
    n = r;
  }

  num = num / m;
  denom = denom / m;

  printf("In lowest term: %d/%d\n", num, denom);
  return 0;
}
