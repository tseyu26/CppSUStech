//
// Created by tseyu on 12/30/22.
//
#include <iostream>

enum Days {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};

int main(){

    Days today = MONDAY;
    Days tomorrow = TUESDAY;

    std::cout << "Today is: " << today << std::endl;
    std::cout << "Tomorrow is: " << tomorrow << std::endl;
    std::cout << "The day after tomorrow is: " << tomorrow + 1 << std::endl;

    return 0;
}