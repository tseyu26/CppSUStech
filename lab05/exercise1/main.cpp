//
// Created by tseyu on 12/31/22.
//
// Write a program that use new to allocate the array dynamically of five integers.
// The five values will be stored in an array using a pointer.
// Print the elements of the array in reverse order using a pointer.

#include <iostream>

int main(){
    int * ptr = new int[5] {1,2,3,4,5};

    for (int i {0}; i < 5; i++){
        std::cout << *(ptr+i) << " " ;
    }
    std::cout << "\n";
    for (int i {4}; i >= 0; i--){
        std::cout << *(ptr+i) << " " ;
    }
    delete[] ptr;

    return 0;
}