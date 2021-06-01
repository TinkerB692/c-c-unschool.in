
#include <stdio.h>
#include<time.h>
#include<stdlib.h>


int main()
{
    int you, computer;
    printf("Welcome to Stone-Paper-Scissor game");
do
    {
    printf("\nTo play the game:\n Enter 1 for Stone, 2 for Paper, 3 for Scissors, 4 to quit \n");
    scanf("%d", &you);
    srand(time(NULL));
    computer=1+rand()%3;

    if(computer==you)
        {
            printf("\nIts a draw!!!\n");
        }

    else if((computer==1 && you==2)||(computer==2 && you==3)||(computer==3&& you==1))
        {
            printf("\nYou won!!\n");
            printf("Computer chose %d!!\n",computer);
        }

    else if((computer==2 && you==1)||(computer==3 && you==2)||(computer==1 && you==3))
        {
            printf("\nYou lost!!!\n");
            printf("Computer chose %d\n",computer);
        }

    else if(you!=1 && you!=2 && you!=3 &&you!=4)
    {
        printf("\nInvalid!!! Try again!!\n");
    }
    }

while(you!=4);
{
    printf("\nGame over!\n");
}

    return 0;
}
