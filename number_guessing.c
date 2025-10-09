/*
Nama:Griffin Waruinge  Njuguna 
Reg No:CT101/G/26480/25
Description: Number guessing game 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;

    srand(time(0)); // Seed random number generator
    secret = rand() % 20 + 1; // Random number between 1 and 20

    do {
        printf("Enter your guess (1-20): ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret)
            printf("Too high!\n");
        else if (guess < secret)
            printf("Too low!\n");
        else
            printf("Congratulations!\n");

    } while (guess != secret);

    printf("You guessed it in %d attempts.\n", attempts);
    return 0;
}