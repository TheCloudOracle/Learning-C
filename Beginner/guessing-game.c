#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int max, min = 0;
    char input;
    int guess;
    int num_of_tries = 3;
    srand(time(NULL));

    printf("Enter difficulty (1-5): ");
    scanf("%c", &input);

    if (input == '1') max=10;
    else if (input == '2') max=100;
    else if (input == '3') max=1000;
    else if (input == '4') max=10000;
    else max=100000;

    int random_number = rand() % (max - min + 1) + min;
    printf("Rules of the game: You get 3 tries to guess a number. You will be given a range. After every guess you will be told if your guess was higher or lower than the actual number. Enjoy :)\n\n");
    printf("Range (%d,%d)\n", min, max);

    while (guess != random_number && num_of_tries != 0) {
        printf("Enter your guess (%d tries left): ", num_of_tries);
        scanf("%d", &guess);
        if (guess > random_number) {
            printf("Your guess was higher\n");
        }
        else if (guess < random_number) {
            printf("Your guess was lower\n");
        }
        num_of_tries--;

        if (guess == random_number) {
            printf("You win!!!");
            return 0;
        }
    }
    if (num_of_tries == 0) {
        printf("You lost your number of tries. Acutual number: %d\n", random_number);
    }


}