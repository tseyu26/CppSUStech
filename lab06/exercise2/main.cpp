//
// Created by tseyu on 1/1/23.
// Define a function whose prototype is char* match(char* s, char ch);
// s is a C-style string, ch is a character.
// If the ch is in the s, return the position of s at ch;
// if the ch is not in the s, return NULL.

#include "matchCh.h"
#include <iostream>

int main(){

    char ch{};
    char mystring[]{""};
    std::cout << "Please input a string: \n";
    std::cin >> mystring;

    std::cout << "Please input a character: \n";
    std::cin >> ch;

    const char* mych = mystring;
    char result[]{};
    result = match(mych,ch);
    return 0;
}
