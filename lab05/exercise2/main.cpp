//
// Created by tseyu on 12/31/22.
// Allocate memory for an array of characters,
// modify elements by integer values one by one,
// then print out the result as a string.
// Please try to modify the element out of range and see what will happen.
//

#include <iostream>

int main(){
    char * ptr = new char[]{'H','e','l','l','o',',','2','0','2','3','!'};
    for(int i{0};i<11;i++){
        std::cout << *(ptr+i) ;
    }
    delete[] ptr;
    return 0;
}