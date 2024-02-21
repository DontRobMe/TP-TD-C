//
// Created by Franc on 05/01/2023.
//

#ifndef UNTITLED_LIB_FONCTIONS_H
#define UNTITLED_LIB_FONCTIONS_H

void reset(char *chaine);
int strlens(const char *list);
void strcopy(char *copy, const char *list);
void strcate(char *list, const char *list2, char *copy);
int strcmpar(const char *chaine1, const char *chaine2);
int strchri(const char *chaine, char char_to_look);
int strestre(const char *chaine, const char *chaine2);
int addclash(const char *string, char *copy, const char *char_to_look2);
int addslashes(const char *list9, char *copy);
int ltrim(const char *list10, char *copy);
int lcfirst(const char *list11, char *copy);
int str_pad(const char *list12, char *copy, char *copy2, const char *pad_string, char *copy3, const char *list_rep6, const char *list_rep5, const char *list_rep4);
int str_to_lower(const char *list13, char *copy);
int str_to_upper(const char *list14, char *copy2);
int str_repeat(const char *list15, char *copy3, const int *time);
int str_statrts_with(const char *list16, const char *char_to_look3);
int stri_str(const char *list17, char *copy, const int *bool, char *copy2);
int stricasecmp(const char *list19, const char *list20);
int strirev(const char *list21, char *copy);
int rtrim(const char *list22, char *copy, char *copy2, char *copy3);
int str_word_count(const char *list18);
#endif //UNTITLED_LIB_FONCTIONS_H
