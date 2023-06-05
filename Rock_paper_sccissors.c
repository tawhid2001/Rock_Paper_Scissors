#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generate_number()
{
    srand(time(NULL));
    return rand() % 3 + 1;
}

int main()
{
    printf("Welcome to Rock Paper Scissors Game");
    while (1)
    {
        char newgame;
        int player = 0, computer = 0, flag = 0;
        int choose;
        char sel[3][10] = {"scissors",
                           "rock",
                           "paper"};
        char name[20];
        printf("\nEnter prayer name: ");
        scanf(" %[^\n]s", &name);

        for (int i = 0; i < 3; i++)
        {
            printf("\n%s\nchoose 1 for scissors\nchoose 2 for rock\nchoose 3 for paper\n-->", name);
            scanf("%d", &choose);
            if ((choose != 1) && (choose != 2) && (choose != 3))
            {
                flag = 1;
                printf("\nInvalid input!!!\n");
                break;
            }
            else
            {
                printf("%s has choosen: %s\n", name, sel[choose - 1]);
                int computer_choose = generate_number();
                printf("Computer has choosen: %s\n", sel[computer_choose - 1]);
                if ((choose == 1 && computer_choose == 3) || (choose == 2 && computer_choose == 1) || (choose == 3 && computer_choose == 2))
                {
                    player++;
                }
                else if ((choose == 1 && computer_choose == 2) || (choose == 2 && computer_choose == 3) || (choose == 3 && computer_choose == 1))
                {
                    computer++;
                }
                else if (choose == computer_choose)
                {
                    player++;
                    computer++;
                }
                printf("\n<<<<>>>>>>\n%s: %d\nComputer: %d\n<<<<>>>>>>\n", name, player, computer);
            }
        }

        if (flag == 1)
        {
            printf("\nGame Over!!!\n");
        }
        else
        {
            if (player > computer)
            {
                printf("\nCongratulations..... %s wins with %d points!!!", name, player);
            }
            else if (player < computer)
            {
                printf("\nComputer wins with %d points!!!", computer);
            }
            else
            {
                printf("\nGame is Draw!!!");
            }
        }

    come_here:
        printf("\nDo you want to play newgame(press y for yes and n for no): ");
        scanf(" %c", &newgame);

        switch (newgame)
        {
        case 'y':
            printf("Welcome to the newgame!!!");
            continue;
            break;
        case 'n':
            printf("Bye Bye %s!!!", name);
            exit(0);
            break;
        default:
            printf("Invalid input!!!\n");
            goto come_here;
            break;
        }
    }

    return 0;
}