#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    srand(time(NULL));
    int randomNumberGenerated = rand() % (1000 + 1 - 1) + 1;
    int playerGuess;

    while(1) {
        printf("Devinez le prix entre 1 et 1000 :");
        scanf("%d", &playerGuess);
        getchar(); // Fix char

        if(playerGuess == randomNumberGenerated) {
            printf("Bravo, vous avez trouvé le juste prix !");
            return 0;}
        else if(playerGuess <= randomNumberGenerated)
            printf("C'est plus !\n");
        else if(playerGuess >= randomNumberGenerated)
            printf("C'est moins !\n");
    }

    return 1;
}
