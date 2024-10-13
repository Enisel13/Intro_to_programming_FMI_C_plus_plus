//
// Created by Enisel Kunch on 13.10.24.
//
//Да се напише функция, която приема масив от цели числа и връща дължината на най-дългата редица от еднакви числа.
//
//Пример:
//
//Вход:
//
//[3 3 2 2 2 5 2 2 3 3 3]
//Изход:
//
//3

#include <iostream>
int longestEqualSequence(const int* arr, size_t size)
{
    if(size == 0)
    {
        return 0;
    }
    int maxLen = 1;
    int currentLen = 1;

    for (int i = 1; i < size; i++)
    {
        if(arr[i] == arr[i-1])
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
    if(currentLen>maxLen)
    {
        maxLen=currentLen;
    }
    return maxLen;
}

int main()
{
    int arr[] = {3, 3, 2, 2, 2, 5, 2, 2, 3, 3, 3};
    std::cout << longestEqualSequence(arr, 11);

}