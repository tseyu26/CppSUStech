//
// Created by tseyu on 12/30/22.
//
#include "stuinfo.hpp"
#include <iostream>
#include <cstring>

void inputstu(stuinfo stu[], int n){
    std::cout << "Student " << n <<"'s name: ";
    std::cin.getline(stu[n].name, 20);
    std::cout << "Student " << n <<"'s score: ";
    for (int i{0}; i<3; i++){
        std::cin >> stu[n].score[i];
    }
    stu[n].ave = (stu[n].score[0] + stu[n].score[1] + stu[n].score[2]) / 3;
    std::cin.get();
}

void showstu(stuinfo stu[], int n){
    std::cout << "Student " << n << " name: "
              << stu[n].name << ", scores: ";
    for (int i{0}; i<3; i++){
        std::cout << stu[n].score[i] << " ";
    }
    std::cout << std::endl;
    //std::cout << "average: " << stu[n].ave << std::endl;
}

void sortstu(stuinfo stu[], int n){
    for (int i{0}; i < n ; i++){
        for (int j{0}; j < n ;j++){
            if (stu[j].ave < stu[j+1].ave){
               stuinfo tmp = stu[j];
               stu[j] = stu[j+1];
               stu[j+1] = tmp;
            }
        }
    }
}

bool findstu(stuinfo stu[], int n, char ch[]){
    for (int i{0}; i < n ;i++){
        if (strcmp(ch,stu[i].name)){
            ;
        }else{
            return true;
        }
    }
    return false;
}