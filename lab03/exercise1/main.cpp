//
// Created by tseyu on 12/29/22.
//
#include "fib.h"
#include <iostream>

int main(){
    std::cout << "Input an integer greater than 2 " << std::endl;
    int num {0};
    std::cin >> num;

    fib(num);
    return 0;
}