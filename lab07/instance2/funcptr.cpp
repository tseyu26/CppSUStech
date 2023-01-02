//
// Created by tseyu on 1/2/23.
//
#include "funcPtr.h"
#include <cmath>
double calc (double (*funp)(double), double a, double b){
    double z;
    z = (b - a) / 2 * ((*funp)(a) + (*funp)(b));
    return z;
}

double f1 ( double x ){
    return (x * x);
}

double f2 ( double x ){
    return ( sin(x)/x);
}
