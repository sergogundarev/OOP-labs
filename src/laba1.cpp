#include "../include/laba1.h"

bool isPureNumber(int number) {
    std::string numStr = std::to_string(number);
    
    // Проверяем, что цифры идут в порядке неубывания
    for (size_t i = 0; i < numStr.length() - 1; i++) {
        if (numStr[i] > numStr[i + 1]) {
            return false;
        }
    }
    
    return true;
}