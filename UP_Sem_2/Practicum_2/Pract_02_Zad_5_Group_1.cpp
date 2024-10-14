//
// Created by Enisel Kunch on 14.10.24.
//
//Напишете програма, която приема цели числа и приключва работа, когато се въведат последователно 3 отрицателни числа. Накрая да се изведе най-малкото от тях.
//
//Пример:
//
//Вход:
//
//5
//-1
//-33
//4
//-2
//-22
//-3
//Изход:
//
//-22

#include <iostream>

int main()
{
    int num;
    int count = 0;
    int minNegative;
    bool foundNegative = false; //proverqva dali imame otricatelni chisla
    while(count < 3)
    {
        std::cin >> num;

        if(num < 0)
        {
            count++;
            if(count == 1 || num < minNegative)
            {
                minNegative=num;
            }
        }
        else
        {
            count = 0;
        }
    }
    std::cout << minNegative;
}