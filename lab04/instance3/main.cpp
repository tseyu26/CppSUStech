//
// Created by tseyu on 12/30/22.
//
#include <iostream>

struct Rectangle{
    int width;
    int height;
};

int main(){
    Rectangle rec;

    rec.width = 1;
    rec.height = 2;

    std::cout << rec.width << " " << rec.height << std::endl;

    return 0;
}