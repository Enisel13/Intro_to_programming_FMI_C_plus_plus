//
// Created by Enisel Kunch on 8.10.24.
//
#include <iostream>

int main()
{
    double a, b;
    std::cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a- b;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
}