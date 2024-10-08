//
// Created by Enisel Kunch on 8.10.24.
//
#include <iostream>

int main() {
    int a, b;

    std::cout << "Dividend: ";
    std::cin >> a;

    std::cout << "Divisor: ";
    std::cin >> b;


    if (b == 0)
    {
        std::cout << "Division by zero is not allowed!" << std::endl;
    }

    int quotient = a / b;
    int remainder = a % b;

    std::cout << "The quotient of the division is: " << quotient << std::endl;
    std::cout << "The remainder of the division is: " << remainder << std::endl;


    return 0;
}
