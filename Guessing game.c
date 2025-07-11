#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int number, guess, attempts = 0;
    srand(time(0));
    number = rand () %100+1;
    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100.\n");
    do {
        printf("Please enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        
        if (guess < number) {
            printf("Too low! Try again.\n");
        } else if (guess > number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the number %d in %d attempts.\n", number, attempts);
        }
    } while (guess != number);
    return 0;
}