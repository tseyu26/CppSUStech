//
// Created by tseyu on 1/2/23.
//

#ifndef INSTANCE1_TEMPLATEMAX_HPP
#define INSTANCE1_TEMPLATEMAX_HPP
#include <iostream>
template <typename T>
T Max(T x, T y){
    std::cout << typeid(T).name() << std::endl;
    return (x > y ? x : y);
}
#endif //INSTANCE1_TEMPLATEMAX_HPP
