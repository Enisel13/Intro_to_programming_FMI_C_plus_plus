//
// Created by Enisel Kunch on 14.10.24.
//
// Да се напише програма, която намира най-голямото число измежду няколко числа, въведени от клавиатурата. На първия ред от стандартния вход да се въведе броя на числата, а на втория самите числа разделени с интервал. На първия ред от стандартния изход да се изведе най-голямото число.
//
//Пример:
//
//Вход:
//
//5
//2 7 10 54 3
//Изход:
//
//54

#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int maxNum;
    std::cin >> maxNum;
    for (int i = 0; i < n; i++)
    {
        int num;
        std::cin >> num;
        if(num > maxNum)
        {
            maxNum = num;
        }
    }
    std::cout << maxNum;
}