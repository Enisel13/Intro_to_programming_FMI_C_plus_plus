//
// Created by Enisel Kunch on 14.10.24.
//
#include <iostream>

//Дефинираме редица на Фибоначи по следния начин:
//
//fib(1) = 0
//
//fib(2) = 1
//
//fib(3) = 1
//
//fib(n) = fib(n - 1) + fib(n - 2)
//
//Пример:
//Вход:
//7
//Изход:
//8

#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    if(n==1)
    {
        std::cout << '0';
    }
    if(n==2 || n==3)
    {
        std::cout << '1';
    }

    int a = 0;
    int b = 1;
    int c = 1;
    for (int i = 4; i <= n ; i++)
    {
        a=b;
        b=c;
        c=a+b;
    }
    std::cout << c;
}