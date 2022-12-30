//
// Created by tseyu on 12/29/22.
//
#include "fac.h"
#include <iostream>
#include <iomanip>

void printFac(int n){
    for(int i{1}; i < n + 1; i++){
        long temp{1};
        for(int j{i}; j >= 1; j--){
            temp *= j;
        }
        std::cout << std::setw(3) << i << "! = " << temp << std::endl;
    }
}