#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int playerChoice, computerChoice;

    
    srand(time(0));
    printf("Welcome to Rock, Paper, Scissors !\n");
    printf("\nLets play with fun.Good luck <3 \n");
    printf("\nChoose an option:\n");
    printf("1. Rock\n2. Paper\n3. Scissors\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &playerChoice);

    
    computerChoice = rand() % 3 + 1;


    char *choices[] = {"Rock", "Paper", "Scissors"};
    printf("You chose: %s\n", choices[playerChoice - 1]);
    printf("Computer chose: %s\n", choices[computerChoice - 1]);


    if (playerChoice == computerChoice) {
        printf("\nIt's a draw!\n");
    } else if ((playerChoice == 1 && computerChoice == 3) ||
               (playerChoice == 2 && computerChoice == 1) ||
               (playerChoice == 3 && computerChoice == 2)) {
        printf("\nYou win,Congratulations!\n");
    } else {
        printf("\nComputer wins!Better luck next time.\n");
    }
    printf("\nThank you for playing. \n");

    return 0;
}

