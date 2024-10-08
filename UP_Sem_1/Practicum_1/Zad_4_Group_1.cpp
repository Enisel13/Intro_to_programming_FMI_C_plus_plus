//
// Created by Enisel Kunch on 8.10.24.
//

#include <iostream>

int main()
{
    int a, b, x;
    std::cin >> a >> b >> x;

    if(x < a)
    {
        std::cout << 1 << std::endl;
    }

    if(x == a)
    {
        return 2;
    }

    if(x > a && x < b)
    {
        std::cout << 3 << std::endl;
    }

    if(x == b)
    {
        std::cout << 4 << std::endl;
    }

    if(x > b)
    {
        std::cout << 5 << std::endl;
    }

    return 0;
}