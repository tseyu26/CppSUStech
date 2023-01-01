//
// Created by tseyu on 1/1/23.
//

#include "twoSwap.h"
void referSwap(int &a_refer, int &b_refer){
    int tmp {a_refer} ;
    a_refer = b_refer;
    b_refer = tmp;
}