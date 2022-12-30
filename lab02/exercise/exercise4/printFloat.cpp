//
// Created by tseyu on 12/29/22.
//
#include "printFloat.h"
#include <iostream>

void printFloat (float num){
    int inum = *(int*)&num;
    for(int i {0}; i < 32; ++i){
        std::cout <<((inum & 0x80000000) ? 1:0);
        if (i == 0 ||i == 8){
            std::cout << " ";
        }
    }
    std::cout << std::endl;
}