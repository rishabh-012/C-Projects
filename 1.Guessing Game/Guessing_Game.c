#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int random,guess;
    int no_of_guess=0;
    srand(time(NULL));

    printf("Welcome to the world of guessing games.\n");
    random=rand() % 100 + 1 ;
    

do{
    printf("\nPlease enter your guess between (1 to 100):");
    scanf("%d",&guess);
    no_of_guess++ ;

    if(random < guess){
        printf("\nGuess a smaller number.");
    }

    else if(random > guess){
        printf("\nGuess a larger number.");
    }

    else{
        printf("\nCongratulations !!! You have successfully guessed the number in %d attempts.",no_of_guess);
    }

}

while(guess != random);

   printf("\nBye Bye, Thanks for Playing.");
   printf("\n\nDeveloped By- Rishabh Pathak.");

    return 0;
}