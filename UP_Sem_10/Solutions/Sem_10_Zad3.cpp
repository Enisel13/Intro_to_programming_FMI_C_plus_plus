//
// Created by Enisel Kunch on 12.08.24.
//
#include <iostream>

unsigned wordsCount(char* str)
{
    unsigned wordsCounter = 0;
    bool inWord = false; // Флаг, който показва дали сме в дума

    if(!str)
    {
        return 0;
    }
    while(*str != '\0')
    {
        if(*str == ' ' || *str == '\t' || *str == ',' || *str == '.' || *str == '!' || *str == '?' || *str == ';' || *str == ':')
        {
            if(inWord)
            {
                inWord = false;
            }
        }
        else if(!inWord)
        {
                wordsCounter++;
                inWord = true;
        }
        str++;
    }
    return wordsCounter;
}

int main()
{
    char str[50] = "Me? Why always me?";
    std::cout << wordsCount(str);
}

