#include <stdio.h>

int calcul(const int *tab_in, int longeur_tab, int *tab_out, int operation, int valeur){
    if(operation == '+'){
        for (int i = 0; i < longeur_tab; i++){
            tab_out[i] = tab_in[i] + valeur;
        }
        return tab_out;
    }
    if(operation == '-'){
        for (int i = 0; i < longeur_tab; i++){
            tab_out[i] = tab_in[i] - valeur;
        }
        return tab_out;
    }
    if(operation == '/') {
        for (int i = 0; i < longeur_tab; i++) {
            tab_out[i] = tab_in[i] / valeur;
        }
        return tab_out;
    }
    if(operation == '*'){
        for (int i = 0; i < longeur_tab; i++){
            tab_out[i] = tab_in[i] * valeur;
        }
        return tab_out;
    }
}

int compar_array(int *tab_o, int *tab_R, int size){
    for(int i = 0; i < size; i++){
        if(tab_o[i] != tab_R[i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int tab_in[9] = {1,2,3,4,1,2,3,4,5};
    int size = sizeof(tab_in) / sizeof(int);
    int tab_out[9] = {0};
    int tab_calcul_plus [] = {2,3,4,5,2,3,4,5,6};
    int tab_calcul_moins [] = {0,1,2,3,0,1,2,3,4};
    int tab_calcul_div [] = {1,2,3,4,1,2,3,4,5};
    int tab_calcul_foi [] = {1,2,3,4,1,2,3,4,5};
    calcul(tab_in, size, tab_out, '+', 1);
    if(compar_array(tab_out, tab_calcul_plus, size)){
        printf("compare ok\n");
    }else{
        printf("compare ko \n");
    }
    calcul(tab_in, size, tab_out, '-', 1);
    if(compar_array(tab_out, tab_calcul_moins, size)){
        printf("compare ok\n");
    }else{
        printf("compare ko \n");
    }
    calcul(tab_in, size, tab_out, '/', 1);
    if(compar_array(tab_out, tab_calcul_div, size)){
        printf("compare ok\n");;
    }else{
        printf("compare ko \n");
    }
    calcul(tab_in, size, tab_out, '*', 1);
    if(compar_array(tab_out, tab_calcul_foi, size)){
        printf("compare ok\n");
    }else{
        printf("compare ko \n");
    }
}