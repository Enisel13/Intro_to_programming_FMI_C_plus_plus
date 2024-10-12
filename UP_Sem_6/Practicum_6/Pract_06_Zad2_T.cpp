//
// Created by Enisel Kunch on 11.10.24.
//

#include <iostream>

//Да се напише функция, която проверява дали масив е симетричен (палиндром)
//
//Пример:
//Вход:
//[1, 2, 3, 4, 4, 3, 2, 1]
//Изход:
// true
//Вход:
//[1, 2, 1, 0]
//Изход:
//false


bool isPalindrome(const int* arr, size_t size)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == arr[size - 1 - i])
        {
            return true;
        }

    }
    return false;
}

int main()
{
    int arr[4] = {1, 2, 1, 0};
    std::cout << isPalindrome(arr, 8);
}