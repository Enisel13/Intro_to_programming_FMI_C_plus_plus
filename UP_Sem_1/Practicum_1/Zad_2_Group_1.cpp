//
// Created by Enisel Kunch on 8.10.24.
//
#include <iostream>

int main()
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    unsigned sum = 0;

    if(a%2 == 0)
    {
        sum += a;
    }

    if(b%2 == 0)
    {
        sum += b;
    }

    if(c%2 == 0)
    {
        sum += c;
    }

    if(d%2 == 0)
    {
        sum += d;
    }

    std::cout << sum;

}
