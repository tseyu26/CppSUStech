#include <iostream>

int main(){
    float a {0.1f};
    float sum = a + a + a + a + a + a + a + a + a + a;

    std::cout << "sum: " << sum << std::endl;
    std::cout << "sum equals to 1? " << (sum == 1.0) << std::endl;

    return 0;
}