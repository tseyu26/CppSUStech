//
// Created by tseyu on 1/1/23.
//

#include "twoSwap.h"

void ptrSwap(int* ptra,int* ptrb){
    int tmp{*ptra} ;
    *ptra = *ptrb;
    *ptrb = tmp;
}

