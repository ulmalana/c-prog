#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100

void initialize_num_gen(void);
int new_secret_number(void);
void read_guess(int secret_number);

int main(void) {

  char command;
  int secret_number;
  printf("Guess the secret number (1-%d)\n\n", MAX_NUMBER);
  initialize_num_gen();
  do {

    secret_number = new_secret_number();
    printf("A new number has been chosen\n");
    read_guess(secret_number);
    printf("Play again? (Y/N) ");
    scanf("%c", &command);
    printf("\n");
  } while (command == 'y' || command == 'Y');
  return 0;
}

void initialize_num_gen(void) { srand((unsigned)time(NULL)); }

// void choose_new_secret_num(void) { secret_number = rand() % MAX_NUMBER + 1; }

int new_secret_number(void) { return rand() % MAX_NUMBER + 1; }

void read_guess(int secret_number) {
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
