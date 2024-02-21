#include <stdio.h>
#include <math.h>

void purge(void)
{
    int c;
    while ((c = fgetc(stdin)) != '\n' && c != EOF) {
    }
}

double P_Rectangle(){
    double largeur = 0;
    double Longueur = 0;
    while(largeur < 1 || Longueur < 1){
        if (largeur < 1){
            printf("Choisissez La Taille De La Largeur:");
            scanf("%lf", &largeur);
        }else if(Longueur < 1) {
            printf("Ce choix n'est pas possible, Choisissez a nouveau! \n");
            purge();
        }

        if (largeur < 1){
            printf("Ce choix n'est pas possible, Choisissez a nouveau! \n");
            purge();
        }else if (largeur > 0){
            printf("Choisissez La Taille De La Longueur: ");
            scanf("%lf", &Longueur);
        }

        if (largeur > 0 && Longueur > 1){
            double Perimettre_R = (Longueur + largeur) * 2;
            printf("%lf \n", Perimettre_R);
        }
    }
    return 0;
}


double P_Cercle(){
    double Rayon = 0;
    double PI = M_PI;
    while (Rayon < 1) {
        printf("Choisissez Le Rayon: ");
        scanf("%lf", &Rayon);
        if (Rayon > 0) {
            double Perimettre_Ce = 2 * PI * Rayon;
            printf("%lf \n", Perimettre_Ce);
        }else{
            printf("Ce choix n'est pas possible, Choisissez a nouveau! \n");
            purge();
        }
    }
    return 0;
}

double P_Carre(){
    double Cote = 0;
    while(Cote < 1) {
        printf("Choisissez La Taille Du Cote: ");
        scanf("%lf", &Cote);
        if(Cote > 0){
            double Perimettre_Ca = Cote * 4;
            printf("%lf \n", Perimettre_Ca);
        }else{
            printf("Ce choix n'est pas possible, Choisissez a nouveau! \n");
            purge();
        }
    }
    return 0;
}

double A_Rectangle(){
    double largeur = 0;
    double Longueur = 0;
    while(largeur < 1 || Longueur < 1){
        if (largeur < 1){
            printf("Choisissez La Taille De La Largeur:");
            scanf("%lf", &largeur);
        }else if(Longueur < 1) {
            printf("Ce choix n'est pas possible, Choisissez a nouveau! \n");
            purge();
        }

        if (largeur < 1){
            printf("Ce choix n'est pas possible, Choisissez a nouveau! \n");
            purge();
        }else if (largeur > 0){
            printf("Choisissez La Taille De La Longueur: ");
            scanf("%lf", &Longueur);
        }

        if (largeur > 0 && Longueur > 0){
            double Aire_R = Longueur * largeur;
            printf("%lf \n", Aire_R);
        }
    }
    return 0;
}

double A_Cercle(){
    double Rayon = 0;
    double PI = M_PI;
    while (Rayon < 1){
        printf("Choisissez Le Rayon: ");
        scanf("%lf", &Rayon);
        if (Rayon > 0){
            double Aire_Ce = PI * Rayon * Rayon;
            printf("%lf", Aire_Ce);
        }else{
            printf("Ce choix n'est pas possible, Choisissez a nouveau! \n");
            purge();
        }
    }
    return 0;
}

double A_Carre(){
    double Cote = 0;
    while(Cote < 1){
        printf("Choisissez La Taille Du Cote: ");
        scanf("%lf", &Cote);
        if(Cote > 0){
            double Aire_Ca = Cote * Cote;
            printf("%lf \n", Aire_Ca);
        }else{
            printf("Ce choix n'est pas possible, Choisissez a nouveau! \n");
            purge();
        }
    }
    return 0;
}

int Choix1() {
    int Choix_Calcul = 0;
    while (Choix_Calcul != 1 || Choix_Calcul != 2) {
        printf("Vous avez choisis le Rectangle\n Que Voulez-vous calculer ?\n 1.l'aire \n 2.le perimetre \n");
        scanf("%d", &Choix_Calcul);
        if (Choix_Calcul == 1) { //Aire
            return A_Rectangle();
        } else if (Choix_Calcul == 2) { //Perimetre
            return P_Rectangle();
        } else {
            printf("Ce choix n'est pas possible, Choisissez a nouveau! \n");
            purge();
        }
    }
}

int Choix2() {
    int Choix_Calcul = 0;
    while (Choix_Calcul != 1 || Choix_Calcul != 2) {
        printf("Vous avez choisis le Cercle\n Que Voulez-vous calculer ?\n 1.l'aire \n 2.le perimetre \n");
        scanf("%d", &Choix_Calcul);
        if (Choix_Calcul == 1) {//Aire
            return A_Cercle();
        } else if (Choix_Calcul == 2) { //Perimetre
            return P_Cercle();
        } else {
            printf("Ce choix n'est pas possible, Choisissez a nouveau! \n");
            purge();
        }
    }
}

int Choix3(){
    int Choix_Calcul = 0;
    while(Choix_Calcul != 1 || Choix_Calcul != 2){
        printf("Vous avez choisis le Carre\n Que Voulez-vous calculer ?\n 1.l'aire \n 2.le perimetre \n");
        scanf("%d", &Choix_Calcul);
        if (Choix_Calcul == 1) {//Aire
            return A_Carre();
        } else if (Choix_Calcul == 2) { //Perimetre
            return P_Carre();
        }else{
            printf("Ce choix n'est pas possible, Choisissez a nouveau! \n");
            purge();
        }
    }
}


int main() {
    int Choix_Figure = 0;

    while (Choix_Figure >= 1 || Choix_Figure <= 3) {
        printf("saisissez la figure que vous voulez calculer: \n");
        printf(" 1. Rectangle\n 2. Cercle\n 3. Carre\n");
        scanf("%d", &Choix_Figure);

        if (Choix_Figure != 1 && Choix_Figure != 2 && Choix_Figure != 3) {
            printf("Ce choix n'est pas possible, Choisissez a nouveau! \n");
            purge();
            continue;
        }

        if (Choix_Figure == 1) {//Rectangle
            return Choix1();
        } else if (Choix_Figure == 2) {//Cercle
            return Choix2();
        }else if(Choix_Figure == 3){ //Carré
            return Choix3();
        }
    }
}