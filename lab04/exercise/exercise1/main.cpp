//
// Created by tseyu on 12/30/22.
//
#include <iostream>
#include "stuinfo.hpp"
#include <cstring>

int main(){

    std::cout << "Please input information of 5 students: \n";
    stuinfo stu[5];

    for (int i {0}; i < 5; ++i){
        inputstu(stu,i);
    }

    std::cout << "\nThe information of 5 students you input are: \n";
    for (int i {0}; i < 5; ++i){
        showstu(stu,i);
    }

    std::cout << "\nThe descending order of the students: \n";
    sortstu(stu, 5);
    for (int i {0}; i < 5; ++i){
        showstu(stu,i);
        std::cout << "average: " << stu[i].ave << std::endl;
    }

    std::cout << "\nPlease input the name you want to find: ";
    char tmpname[20];
    std::cin.getline(tmpname, 20);

    if (findstu(stu, 5, tmpname)){
        for (int i {0}; i < 5; ++i){
            if(strcmp(tmpname, stu[i].name)){
                ;
            }else {
                showstu(stu, i);
            }
        }
    }else{
        std::cout << tmpname << " is not in the students list.";
    }

    return 0;
}