#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100

int secret_number;

void initialize_num_gen(void);
void choose_new_secret_num(void);
void read_guess(void);

int main(void) {

  char command;
  printf("Guess the secret number (1-%d)\n\n", MAX_NUMBER);
  initialize_num_gen();
  do {

    choose_new_secret_num();
    printf("A new number has been chosen\n");
    read_guess();
    printf("Play again? (Y/N) ");
    scanf("%c", &command);
    printf("\n");
  } while (command == 'y' || command == 'Y');
  return 0;
}

void initialize_num_gen(void) { srand((unsigned)time(NULL)); }

void choose_new_secret_num(void) { secret_number = rand() % MAX_NUMBER + 1; }

void read_guess(void) {
  int guess, num_guess = 0;
  for (;;) {
    num_guess++;
    printf("Enter guess: ");
    scanf("%d", &guess);
    if (guess == secret_number) {
      printf("You won in %d guesses!\n\n", num_guess);
      return;
    } else if (guess < secret_number) {
      printf("Too low. try again\n");
    } else {
      printf("Too high. try again\n");
    }
  }
}
