#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void displayScore(int userScore, int computerScore) {
    printf("\nFinal Scores:\n");
    printf("You: %d runs\n", userScore);
    printf("Computer: %d runs\n", computerScore);
}

int main() {
    int userScore = 0, computerScore = 0;
    int balls = 6; // One over
    int userInput, computerInput;

    srand(time(0)); // Seed for random number generation

    printf("Welcome to the Simple Cricket Game!\n");
    printf("Rules: You and the computer take turns playing. If your number matches the computer's number, you're out!\n\n");

    // User's batting phase
    printf("You are batting!\n");
    for (int i = 1; i <= balls; i++) {
        printf("Enter your run (1-6): ");
        scanf("%d", &userInput);

        if (userInput < 1 || userInput > 6) {
            printf("Invalid input! Enter a number between 1 and 6.\n");
            i--; // Repeat the same ball
            continue;
        }

        computerInput = (rand() % 6) + 1; // Random number between 1 and 6
        printf("Computer's ball: %d\n", computerInput);

        if (userInput == computerInput) {
            printf("You're OUT!\n");
            break;
        }

        userScore += userInput;
        printf("Your score: %d\n", userScore);
    }

    printf("\nComputer is batting now!\n");

    // Computer's batting phase
    for (int i = 1; i <= balls; i++) {
        printf("Enter your ball (1-6): ");
        scanf("%d", &userInput);

        if (userInput < 1 || userInput > 6) {
            printf("Invalid input! Enter a number between 1 and 6.\n");
            i--; // Repeat the same ball
            continue;
        }

        computerInput = (rand() % 6) + 1; // Random number between 1 and 6
        printf("Computer's run: %d\n", computerInput);

        if (userInput == computerInput) {
            printf("Computer is OUT!\n");
            break;
        }

        computerScore += computerInput;
        printf("Computer's score: %d\n", computerScore);

        if (computerScore > userScore) {
            printf("Computer has chased your score!\n");
            break;
        }
    }

    displayScore(userScore, computerScore);

    if (userScore > computerScore) {
        printf("Congratulations! You win!\n");
    } else if (userScore < computerScore) {
        printf("Computer wins! Better luck next time!\n");
    } else {
        printf("It's a tie!\n");
    }

    return 0;
}

