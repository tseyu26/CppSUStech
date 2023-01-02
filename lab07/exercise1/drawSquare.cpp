//
// Created by tseyu on 1/2/23.
//
#include <iostream>
void displaySquare(int side, char filledCharacter){
    for (int i{0}; i < side ;i++){
        for (int j{0}; j < side ;j++){
            std::cout << filledCharacter;
        }
        std::cout << std::endl;
    }
}
