//
// Created by Enisel Kunch on 13.10.24.
//

// Да се напише функция, която приема масив от цели числа и връща дължината на най-дългата намаляваща подредица.
//
//Пример:
//
//Вход:
//
//[1 2 7 3 2 8 4]
//Изход:
//
//3

#include <iostream>
int longestDecreasingSubsequence(const int* arr, size_t size)
{
    if(size == 0)
    {
        return 0;
    }
    int maxLen = 1;
    int currentLen = 1;
    for (int i = 1; i < size; i++)
    {
        if(arr[i] < arr[i-1])
        {
            currentLen++;
        }
        else
        {
            if(currentLen>maxLen)
            {
                maxLen=currentLen;
            }
            currentLen=1;
        }
    }
    //проверка за последния елемент
    if(currentLen > maxLen)
    {
        maxLen=currentLen;
    }
    return maxLen;
}

int main()
{
    int arr[] = {9, 8, 7, 6, 5};
    std::cout << longestDecreasingSubsequence(arr, 5);
}