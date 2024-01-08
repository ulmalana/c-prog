#include <stdio.h>

int main(void) {

  float input, largest;

  printf("Enter a number: ");
  scanf("%f", &input);

  largest = input;

  while (input > 0) {
    printf("Enter a number: ");
    scanf("%f", &input);
    if (largest < input && input > 0.0) {
      largest = input;
    }
  }

  printf("The largest number entered was %.2f\n", largest);

  return 0;
}
