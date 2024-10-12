//
// Created by Enisel Kunch on 11.10.24.
//

//Да се напише функция, която обръща първата половина на масив
//Пример:
//Вход:
//[1, 2, 3, 4]
//Изход:
//[2, 1, 3, 4]
#include <iostream>

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void reversesFirstHalf(int* arr, size_t size)
{
    int half = size /2;
    for (int i = 0; i < half/2; i++)
    {
        swap(arr[i], arr[half -1 - i]);
    }
}

int main()
{
    int arr[4] = {1,2,3,4};
    reversesFirstHalf(arr, 4);

    for (int i = 0; i < 4; i++)
    {
        std::cout << arr[i];
        
    }
}
