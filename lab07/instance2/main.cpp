//
// Created by tseyu on 1/2/23.
//
#include <iostream>
#include "funcPtr.h"

int main(){
    double result;
    double (*funp)(double);

    result = calc(f1, 0.0, 1.0);
    std::cout << "1: result= " << result << std::endl;
    funp = f2;
    result = calc(funp,1.0, 2.0);
    std::cout << "2: result= " << result << std::endl;

    return 0;
}