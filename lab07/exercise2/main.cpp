//
// Created by tseyu on 1/2/23.
// Overload a function int vabs(int * p, int n)
// which can calculate the sum of the absolute values of the elements in an array,
// the array can be int, float and double.

#include <iostream>
#include "add.h"

int main(){
    int intarr[5]{1,-2,3,4,5};
    float flarr[5]{1.1f,2.2f, -3.3f, 4.4f,5.5f};
    double doarr[5]{1.1,-2.2, 3.3, 4.4, 5.5};

    std::cout << "Abs sum int: " << abssum<int>(intarr,5) << std::endl;
    std::cout << "Abs sum float: " << abssum<float>(flarr,5) << std::endl;
    std::cout << "Abs sum double: " << abssum<double>(doarr,5) << std::endl;
    return 0;
}
