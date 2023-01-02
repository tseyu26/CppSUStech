//
// Created by tseyu on 1/2/23.
//

#ifndef EXERCISE2_ADD_H
#define EXERCISE2_ADD_H
template <typename T>
T abssum(T x[], int y){
    T sum={0};
    for (int i{0}; i < y ; i++){
        x[i] = x[i] > 0 ? x[i] : -x[i];
        sum += x[i];
    }
    return sum;
}
#endif //EXERCISE2_ADD_H
