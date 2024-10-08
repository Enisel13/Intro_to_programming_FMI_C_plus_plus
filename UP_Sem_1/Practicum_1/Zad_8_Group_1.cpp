//
// Created by Enisel Kunch on 8.10.24.
//
#include <iostream>

int main()
{
    double num1, num2, result;
    char operation;
    std::cout << "Enter first number, operation (+, -, *, /), and second number: ";
    std::cin >> num1 >> operation >> num2;

    switch (operation)
    {
        case '+': {
            result = num1 + num2;
            std::cout << result;
            break;
        }

        case '-':
        {
            result= num1 - num2;
            std::cout << result;
            break;
        }

        case '*':
        {
            result = num1 * num2;
            std::cout << result;
            break;
        }

        case '/':
        {
            if(num2 != 0)
            {
                result = num1 / num2;
                std::cout << result;
            }
            break;
        }
        default:
            std::cout << "Invalid operation!" << std::endl;
            break;
    }
    return 0;
}