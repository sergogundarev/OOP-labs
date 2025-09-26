#include "include/laba1.h"
#include <iostream>

int main() {
    int number;

    std::cout << "Введите число: ";
    std::cin >> number;
    
    if (isPureNumber(number)) {
        std::cout << number << " - чистое число" << std::endl;
    } else {
        std::cout << number << " - не чистое число" << std::endl;
    }
}