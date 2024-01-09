#include <stdio.h>

int main(void) {

  int n, i = 1;
  printf("Enter max n of squared numbers: ");
  scanf("%d", &n);

  while ((i * i) <= n) {
    int squared = i * i;
    if (squared % 2 == 0)
      printf("%d\n", squared);
    i++;
  }

  return 0;
}
