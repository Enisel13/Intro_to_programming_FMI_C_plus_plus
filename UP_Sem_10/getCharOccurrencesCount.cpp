//
// Created by Enisel Kunch on 6.10.24.
//
#include <iostream>
unsigned getCharOccurrencesCount(const char* text, char symbol)
{
    if(!text)
    {
        return 0;
    }
    unsigned charOccurrences = 0;
    while(*text != '\0')
    {
        if(*text == symbol)
        {
            charOccurrences++;
        }
        text++;
    }
    return charOccurrences;
}

int main()
{
    char text[5] = "aabv";
    std::cout << getCharOccurrencesCount(text, 'a');
}