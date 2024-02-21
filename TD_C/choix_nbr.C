#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const int MAX = 100, MIN = 1;
    srand(time(NULL));
    int randomNumber = (rand() % (MAX - MIN + 1)) + MIN;

    int Choix_Joueur = 0;
    while (Choix_Joueur != randomNumber)
    {
        printf("Choisissez un chiffre:");
        scanf("%d", &Choix_Joueur);

        if (Choix_Joueur > randomNumber){
            printf("Trop Haut, Choisissez a nouveau\n");
        }
        else if (Choix_Joueur < randomNumber){
            printf("Trop Bas, Choisissez a nouveau\n");
        }
    }
    printf("Bien Jouer! Le Chiffre Etait %d", Choix_Joueur);
    return 0;
}