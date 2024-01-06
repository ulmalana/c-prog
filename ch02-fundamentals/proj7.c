#include <stdio.h>

int main(void) {
  int amount;
  printf("Enter a dollar amount: ");
  scanf("%d", &amount);

  int for20 = amount / 20;
  amount = amount - (for20 * 20);
  printf("$20 bills: %d\n", for20);

  int for10 = amount / 10;
  amount = amount - (for10 * 10);
  printf("$10 bills: %d\n", for10);

  int for5 = amount / 5;
  amount = amount - (for5 * 5);
  printf("$5 bills: %d\n", for5);

  int for1 = amount / 1;
  printf("$1 bills: %d\n", for1);
  return 0;
}
