//
// Created by Enisel Kunch on 9.08.24.
//
#include <iostream>

void addNewSymbol(char* text, char* result, char symbol, unsigned index)
{
    if(!text || !result)
    {
        return;
    }
    int counter = 0;
    while(*text != '\0')
    {
        if(index == counter)
        {
            *result = symbol;
            result++;
        }
        *result = *text; //копира текущия символ от низ, на който сочи text,
        // в текущата позиция в низ, на който сочи result

        counter++;
        //тук преместваме указателите
        text++;
        result++;
    }
    *result = '\0';
}