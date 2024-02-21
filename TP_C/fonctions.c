#include <stdlib.h>
#include <time.h>
#include "LIB_fonctions.h"

void reset(char *chaine) {
    for (int i = 0; i < 100; i++) {
        chaine[i] = '\0';
    }
}

int strlens(const char *list) {
    int cpt = 0;
    for (int i = 0; list[i] != 0; i++) {
        cpt++;
    }
    return cpt;
}

void strcopy(char *copy, const char *list) {
    for (int i = 0; list[i] != 0; i++) {
        copy[i] = list[i];
    }
}

void strcate(char *list, const char *list2, char *copy) {
    strcopy(copy, list);
    strcopy(copy, list2);
}

int strcmpar(const char *chaine1, const char *chaine2) {
    if (strlens(chaine1) != strlens(chaine2)) {
        return 0;
    }
    for (int i = 0; chaine1[i] != 0; i++) {
        if (chaine1[i] != chaine2[i]) {
            return 0;
        }
    }
    return 1;
}

int strchri(const char *chaine, char char_to_look) {
    for (int i = 0; chaine[i] != 0; i++) {
        if (chaine[i] == char_to_look) {
            return 1;
        }
    }
    return 0;
}

int strestre(const char *chaine, const char *chaine2) {
    for (int i = 0; i < chaine[i]; i++) {
        int index = 0;
        for (int j = 0; j < chaine2[j]; j++) {
            if (chaine[i + j] == chaine2[j]) {
                index++;
                if (index == strlens(chaine2)) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int addclash(const char *string, char *copy, const char *char_to_look2) {
    char list_rep[100] = "\\d'ou viens-tu";
    int index = 0;
    for (int i = 0; i < string[i]; i++) {
        if ((const char *) string[i] == char_to_look2) {
            copy[index] = '\\';
        } else {
            copy[i] = string[index];
            index++;
            copy[index + 1] = string[i];
        }
    }
    for (int i = 0; i < strlens(copy); i++) {
        if (copy[i] != list_rep[i]) {
            return 1;
        }
    }
    return 0;
}

int addslashes(const char *list9, char *copy) {
    char list_rep1[100] = "g\\'eme\\\\le poulpe!\n";
    int index = 0;
    for (int i = 0; i < list9[i]; i++) {
        if (list9[i] == 34 || list9[i] == 39 || list9[i] == 92 || list9[i] == '\0') {
            copy[i + index] = '\\';
            index++;
        }
        copy[i + index] = list9[i];
    }
    for (int i = 0; i < strlens(copy); i++) {
        if (copy[i] != list_rep1[i]) {
            return 1;
        }
    }
    return 0;
}

int ltrim(const char *list10, char *copy) {
    char list_rep2[100] = "pourquoi doit-on travailler?";
    int index = 0;
    for (int i = 0; i < strlens(list10); i++) {
        if (list10[0] != '\t' && list10[0] != '\0' && list10[0] != '\r' && list10[0] != '\v' && list10[0] != '\n' &&
            list10[0] != ' ') {
            break;
        }
        if (list10[i] < 'z' && list10[i] > 'a' || list10[i] < 'Z' && list10[i] > 'A') {
            break;
        }
        if (list10[i] == '\t' || list10[i] == '\0' || list10[i] == '\r' || list10[i] == '\v' || list10[i] == '\n' ||
            list10[i] == ' ') {
            index++;
        }
    }
    int i = 0;
    for (int y = index; y < strlens(list10); y++) {
        copy[i] = list10[y];
        i++;
    }
    for (int z = 0; z < strlens(copy); z++) {
        if (copy[z] != list_rep2[z]) {
            return 1;
        }
    }
    return 0;
}

int lcfirst(const char *list11, char *copy) {
    char list_rep3[100] = "saumon-dans-riviere!";
    for (int i = 0; i < list11[i]; i++) {
        if (list11[0] > 'A' && list11[0] < 'Z') {
            copy[0] = list11[0] + 32;
        }
        copy[i] = list11[i];
    }
    for (int i = 0; i < strlens(copy); i++) {
        if (copy[i] != list_rep3[i]) {
            return 1;
        }
    }
    return 0;
}

int str_pad(const char *list12, char *copy, char *copy2, const char *pad_string, char *copy3, const char *list_rep6, const char *list_rep5, const char *list_rep4) {
    int verif = 0;
    srand(time(NULL));
    int pad_type = rand() % 3 + 1;
    int length = 20;
    int count;
    int cpt = 0;
    //len_list12
    for (int i = 0; list12[i] != 0; i++) {
        cpt++;
    }
    //pad_right
    if (pad_type == 1) {
        if (length > cpt) {
            count = length - cpt;
            for (int y = 0; y < count; y++) {
                copy[y] = pad_string[y];
            }
        }
        int index = 0;
        for (int i = 0; i < list12[i]; ++i) {
            copy2[i] = list12[i];
            index++;
        }
        for (int y = 0; y < copy[y]; y++) {
            copy2[y + index] = copy[y];
        }
        //verif
        for (int i = 0; i < strlens(copy2); i++) {
            if (copy2[i] != list_rep4[i]) {
                verif = 1;
            }
        }
        //pad_left
    } else if (pad_type == 2) {
        if (length > cpt) {
            count = length - cpt;
            for (int y = 0; y < count; y++) {
                copy[y] = pad_string[y];
            }
        }
        int index = 0;
        for (int y = 0; y < copy[y]; y++) {
            copy2[y] = copy[y];
            index++;
        }
        for (int i = 0; i < list12[i]; ++i) {
            copy2[i + index] = list12[i];
        }
        //verif
        for (int i = 0; i < strlens(copy2); i++) {
            if (copy2[i] != list_rep5[i]) {
                verif = 1;
            }
        }
        //pad_both
    } else if (pad_type == 3) {
        int indox = 0;
        if (length > cpt) {
            count = length - cpt;
            count = count / 2;
            for (int y = 0; y < count; y++) {
                copy[y] = pad_string[y];
                indox++;
            }
            for (int y = 0; y < count; y++) {
                copy3[y] = pad_string[indox + y];
            }
            int index = 0;
            int indix = 0;
            for (int y = 0; y < copy[y]; y++) {
                copy2[y] = copy[y];
                index++;
            }
            for (int i = 0; i < list12[i]; ++i) {
                copy2[i + index] = list12[i];
                indix++;
            }
            for (int z = 0; z < copy3[z]; z++) {
                copy2[z + index + indix] = copy3[z];
            }
            //verif
            for (int i = 0; i < strlens(copy2); i++) {
                if (copy2[i] != list_rep6[i]) {
                    verif = 1;
                }
            }
        }
    }
    return verif;
}

int str_to_lower(const char *list13, char *copy) {
    char list_rep7[100] = "en vrai bete didee comme devoir!";
    for (int i = 0; i < list13[i]; i++) {
        if (list13[i] < 'Z' && list13[i] > 'A') {
            copy[i] = list13[i] + 32;
        } else {
            copy[i] = list13[i];
        }
    }
    for (int i = 0; i < strlens(copy); i++) {
        if (copy[i] != list_rep7[i]) {
            return 1;
        }
    }
    return 0;
}

int str_to_upper(const char *list14, char *copy2) {
    char list_rep8[100] = "J'ESPERE JAURAIS VINGT POINTS";
    for (int i = 0; i < list14[i]; i++) {
        if (list14[i] < 'z' && list14[i] > 'a') {
            copy2[i] = list14[i] - 32;
        } else {
            copy2[i] = list14[i];
        }
    }
    for (int i = 0; i < strlens(copy2); i++) {
        if (copy2[i] != list_rep8[i]) {
            return 1;
        }
    }
    return 0;
}

int str_repeat(const char *list15, char *copy3, const int *time) {
    int index = 0;
    char list_rep9[100] = "<3__<3 <3__<3 <3__<3 <3__<3 <3__<3 ";
    for (int i = 0; i < time; i++) {
        for (int y = 0; y < list15[y]; y++) {
            copy3[index] = list15[y];
            index++;
        }
    }
    for (int i = 0; i < strlens(copy3); i++) {
        if (copy3[i] != list_rep9[i]) {
            return 1;
        }
    }
    return 0;
}

int str_statrts_with(const char *list16, const char *char_to_look3) {
    if (strlens(char_to_look3) > strlens(list16)){
        return 1;
    }
    for (int i = 0; i < strlens(char_to_look3); i++) {
        if (list16[i] != char_to_look3[i]) {
            return 1;
        }
    }
    return 0;
}

int stri_str(const char *list17, char *copy, const int *bool, char *copy2) {
    char occurence = 'a';
    int index = 0;
    int indox = 0;
    char list_rep11[100] = "non ";
    char list_rep12[100] = "aux organigrammes !";
    if (bool) {
        for (int i = 0; i < list17[i]; i++) {
            while (occurence != list17[index]) {
                index++;
            }
            copy[i] += list17[index + i];
        }
        //verif
        for (int i = 0; i < strlens(copy); i++) {
            if (copy[i] != list_rep12[i]) {
                return 1;
            }
        }
    } else {
        while (occurence != list17[indox]) {
            indox++;
        }
        for (int i = 0; i < indox; i++) {
            copy2[i] = list17[i - index];
        }
    }
    //verif
    for (int i = 0; i < strlens(copy2); i++) {
        if (copy2[i] != list_rep11[i]) {
            return 1;
        }
    }
    return 0;
}

int str_word_count(const char *list18) {
    int count = 0;
    int space = 0;
    if (list18[0] == ' ') {
        space = 1;
    }
    for (int i = 0; i < strlens(list18); i++) {
        if (list18[i] != ' ' && space == 1) {
            space = 0;
        } else if (list18[i] == ' ' && space == 0) {
            count++;
            space = 1;
        }
    }
    if (list18[strlens(list18)] != ' ') {
        count++;
    }
    return count;
}

int stricasecmp(const char *list19, const char *list20) {
    if (strlens(list19) != strlens(list20)) {
        return 1;
    }
    for (int i = 0; i < list19[i]; i++) {
        char char1 = list19[i];
        char char2 = list20[i];
        if (char1 <= 'Z' && char1 >= 'A') {
            char1 += 32;
        }
        if (char2 <= 'Z' && char2 >= 'A') {
            char2 += 32;
        }
        if (char1 != char2) {
            return 1;
        }
    }
    return 0;
}

int strirev(const char *list21, char *copy) {
    const char list_rep10[100] = "muhr EL";
    int index = 0;
    for (int i = strlens(list21); i > 0; i--) {
        copy[index] = list21[i - 1];
        index++;
    }
    for (int y = 0; y < list_rep10[y]; y++) {
        if (copy[y] != list_rep10[y]) {
            return 1;
        }
    }
    return 0;
}

int rtrim(const char *list22, char *copy, char *copy2, char *copy3) {
    char list_rep13[200] = "Reverse un mot c'est pas si compliquer";
    strirev(list22, copy);
    ltrim(copy, copy2);
    strirev(copy2, copy3);
    for (int y = 0; y <= list_rep13[y]; y++) {
        if (copy3[y] != list_rep13[y]) {
            return 1;
        }
    }
    return 0;
}