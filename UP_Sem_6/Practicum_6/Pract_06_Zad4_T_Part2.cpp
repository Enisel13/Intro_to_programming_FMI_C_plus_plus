//
// Created by Enisel Kunch on 13.10.24.
//

//Да се напише функция, която приема масив от цели числа с дължина най-много 9 и занулява всички числа, които не съдържат като цифра индекса на масива.
//
//Пример:
//
//Вход:
//
//[45 62 23 47 47 65 100]
//Изход:
//
//[0 0 23 0 47 65 0]

#include <iostream>

bool containsDigit(int number, int digit)
{
    while(number >0)
    {
        if(number%10 == digit)
        {
            return true;
        }
        number/=10;
    }
    return false;
}

void zeroOutNonContaining(int* arr, size_t size)
{
    if(size >9)
    {
        return;
    }
    for (int i = 0; i < size; i++)
    {
        if(!containsDigit(arr[i], i))
        {
            arr[i] = 0;
        }
    }
}

void printArray(const int* arr, size_t size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {45, 62, 23, 47, 47, 65, 100};
    zeroOutNonContaining(arr, 7);
    printArray(arr, 7);
}