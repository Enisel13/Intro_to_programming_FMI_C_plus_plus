//
// Created by Enisel Kunch on 14.10.24.
//
//Задача 1. Да се напише програма, която въвежда от клавиатурата цялото число n > 0, след това въвежда още n числа и отпечатва сумата им.
//
//Пример:
//
//Вход:
//
//3
//4 6 9
//Изход:
//
//19

#include <iostream>
int main()
{
    int n;
    std::cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        std::cin >> num;
        sum += num;
    }
    std::cout << sum;
}