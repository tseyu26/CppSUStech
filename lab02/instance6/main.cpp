#include <iostream>
#include <iomanip>

int main(){
    std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    std::cout << 56.8 << std::setw(12) << 456.77 << std::endl;

    std::cout << std::setprecision(2) << 123.356 << std::endl;
    std::cout << std::setprecision(5) << 3897.6784385 << std::endl;

    return 0;

}