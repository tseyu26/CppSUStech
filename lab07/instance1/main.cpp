//
// Created by tseyu on 1/2/23.
//

#include <iostream>
#include "templateMax.hpp"
int main(){

    std::cout << Max<int>(3,7) <<std::endl;
    std::cout << Max<char>('g','e') <<std::endl;
    std::cout << Max<double>(3.1,7.9) <<std::endl;

    return 0;
}