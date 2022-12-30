//
// Created by tseyu on 12/29/22.
//
#include "printFloat.h"
#include <iostream>
int main(){
    float f1 {1.0};
    std::cout << "f1 = "<< f1 << std::endl;
    std::cout << "The binary presentation of f1 is: " <<std::endl;
    printFloat(f1);
    std::cout << std::endl;

    float a = 0.1f;
    float f2 = a + a + a + a + a + a + a + a + a + a;
    std::cout << "f2 = " << f2 << std::endl;
    std::cout << "The binary presentation of f2 is: " << std::endl;
    printFloat(f2);
    std::cout << std::endl;

    return 0;
}