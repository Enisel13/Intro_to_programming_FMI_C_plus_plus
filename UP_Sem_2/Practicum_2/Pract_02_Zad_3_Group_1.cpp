//
// Created by Enisel Kunch on 14.10.24.
//
//Да се прочетe от конзолата цяло число и да се намери факториелът му.
//
//Пример:
//
//Вход:
//
//5
//Изход:
//
//120

#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
       factorial*=i;
    }
    std::cout << factorial;
}