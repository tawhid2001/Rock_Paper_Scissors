﻿# Rock_Paper_Scissors
 
 The provided code is an implementation of a simple Rock Paper Scissors game in C. Here's a breakdown of how the code works:

1. The necessary header files (`stdio.h`, `stdlib.h`, `time.h`) are included.

2. The `generate_number()` function is defined to generate a random number between 1 and 3 (inclusive) using the `rand()` function from the `stdlib.h` library. The `srand()` function is called with `time(NULL)` as the seed to ensure different random numbers are generated each time the program runs.

3. In the `main()` function, a while loop is used to play the game repeatedly until the player chooses to quit.

4. Inside the loop, variables are initialized to keep track of the player's and computer's scores (`player` and `computer`). The `flag` variable is used to indicate if there was an invalid input.

5. The player is asked to enter their name, and it is stored in the `name` array using the `scanf()` function.

6. A for loop is used to play three rounds of the game. In each iteration, the player is prompted to choose between scissors, rock, or paper by entering the corresponding number.

7. If the player enters an invalid number, the `flag` is set to 1 and an error message is displayed. The loop is then broken using the `break` statement.

8. If the player's input is valid, their choice is displayed along with the computer's randomly generated choice.

9. The scores are updated based on the rules of Rock Paper Scissors. If the player wins, their score (`player`) is incremented; if the computer wins, its score (`computer`) is incremented; if it's a draw, both scores are incremented.

10. After each round, the current scores are displayed.

11. After three rounds, if there was an invalid input (`flag == 1`), the game is over, and an appropriate message is displayed.

12. If there were no invalid inputs, the final scores are compared. If the player has a higher score, a congratulatory message is displayed. If the computer has a higher score, a message indicating that the computer wins is displayed. If both scores are equal, it's a draw.

13. The player is then prompted to play a new game or quit. The input is read into the `newgame` variable.

14. Using a switch statement, different actions are taken based on the player's input. If the player chooses to play a new game (`'y'`), the loop continues. If the player chooses to quit (`'n'`), a farewell message is displayed, and the program exits using `exit(0)`. If the player enters an invalid input, they are prompted again.

That's a brief overview of how the code works. It allows the player to play Rock Paper Scissors against the computer and keeps track of the scores. The game continues until the player chooses to quit.
