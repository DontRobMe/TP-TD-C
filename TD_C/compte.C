#include <stdio.h>

int compte (const int *tab, int longueur_tab, int chiffre_a_compter){
    int compteur = 0;
    for (int i = 0; i < longueur_tab ; ++i){
        if(chiffre_a_compter == tab[i]){
            compteur ++;
        }
    }
    return compteur;
}

int main(){
    int tab[9] = {1,2,3,4,1,2,3,4,5};
    int size = sizeof(tab) / sizeof(int);
    if(compte(tab, size,3) == 2){
        printf("compte : ok \n");
    }else{
        printf("compte : ko \n");
    }
}