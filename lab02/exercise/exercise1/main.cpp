//
// Created by tseyu on 12/29/22.
// 在计算过程中溢出的问题
// 在计算过程中提升

#include <iostream>

int main(){
    int b {23456789};
    int a {56789};
    long result {};
    result = 1L * a * b;

    std::cout << a << " * " << b << " = " << result << std::endl;
    return 0;
}