//
// Created by tseyu on 1/1/23.
// Define three functions that swap two values of integer,
// please use integer arguments, pointer arguments and reference arguments respectively.
// Write a test program to call these functions and display the result.

#include <iostream>
#include "twoSwap.h"

int main(){
    int a {6};
    int b {9};

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    int* ptra = &a;
    int* ptrb = &b;
    ptrSwap(ptra,ptrb);

    std::cout << "\nAfter pointer arguments swapping ... \n";
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    int &a_refer {a};
    int &b_refer {b};
    referSwap(a_refer, b_refer);

    std::cout << "\nAfter reference arguments swapping ... \n";
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;



    return 0;
}


