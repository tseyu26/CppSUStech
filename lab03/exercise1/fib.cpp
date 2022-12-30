//
// Created by tseyu on 12/29/22.
//
#include "fib.h"
#include <iostream>
#include <iomanip>

void fib(int n){
    long a {1}; //the first number of fib
    long b {1}; //the second number of fib
    int li {1};  //record the elements amount of a line
    for(int i {0}; i < n ;i++){
        std::cout << std::setw(10) << a << " " ;
        long temp{a};
        a = b;
        b += temp;
        if (li < 10){
            li++;
        }else{
            std::cout << std::endl;
            li = 1;
        }
    }
}