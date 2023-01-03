//
// Created by tseyu on 1/1/23.
//
#include "matchCh.h"


char* match(char* s, char ch){
    char *pchar = s;
    while (*pchar != 0){
        if (*pchar == ch){
            return pchar;
        }
        pchar++;
    }
    return nullptr;
}