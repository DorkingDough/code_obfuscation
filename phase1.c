#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
    int seed_val = (int)time(NULL);
    srand(seed_val);

    int play_choice = 0;
    int comp_choice = 0;
    int round_result = 0; 

    printf("Rock(1) Paper(2) Scissors(3)\n");
    printf("Enter your choice (1-3): ");
    if (scanf("%d", &play_choice) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    if (play_choice < 1 || play_choice > 3) {
        printf("Choice out of range.\n");
        return 1;
    }

    comp_choice = (rand() % 3) + 1;

    
    if (play_choice == comp_choice) {
        round_result = 0;
    } else if ((play_choice == 1 && comp_choice == 3) ||
        (play_choice == 2 && comp_choice == 1) ||
        (play_choice == 3 && comp_choice == 2)) {
        round_result = 1;
        } else {
            round_result = 2;
        }

        const char *name_player = (play_choice == 1) ? "Rock" :
        (play_choice == 2) ? "Paper" : "Scissors";
    const char *name_comp = (comp_choice == 1) ? "Rock" :
    (comp_choice == 2) ? "Paper" : "Scissors";

    printf("You chose: %s\n", name_player);
    printf("Computer chose: %s\n", name_comp);

    if (round_result == 0) {
        printf("Result: Tie.\n");
    } else if (round_result == 1) {
        printf("Result: You win!\n");
    } else {
        printf("Result: Computer wins.\n");
    }

    return 0;
}
