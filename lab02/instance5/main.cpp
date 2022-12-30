#include <iostream>

int main(){
    std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    std::cout << 56.8;
    std::cout.width(12);
    std::cout.fill('$$');
    std::cout << 456.77 << std::endl;

    std::cout.precision(2);
    std::cout << 123.356 << std::endl;
    std::cout.precision(5);
    std::cout << 3879.678485 << std::endl;
    return 0;
}