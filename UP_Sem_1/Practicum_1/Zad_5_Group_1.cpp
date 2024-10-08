//
// Created by Enisel Kunch on 8.10.24.
//
#include <iostream>

int main()
{
    int num;
    std::cout << "Enter a four-digit number: ";
    std::cin >> num;
    unsigned sum = 0;


    int digit1 = num/ 1000;
    int digit2 = (num / 100) % 10;
    int digit3 = (num / 10) % 10;
    int digit4 = num % 10;

    sum = digit1 + digit2 + digit3 + digit4;
    unsigned product = digit1 * digit2 * digit3 * digit4;
    double average = sum / 4.0;

    std::cout << "sum=" << sum << " p=" << product << " avr=" << average << std::endl;



}