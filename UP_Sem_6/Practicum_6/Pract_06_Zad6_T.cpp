//
// Created by Enisel Kunch on 12.10.24.
//

// Имаме масив с размер 20, който съдържа цели числа между 0 и 19.
// Напишете функция, която извежда на стандартния изход колко пъти се среща всяко число между 0 и 19

#include <iostream>

void numbersOccurrences(const int* arr, size_t size)
{
   const size_t counterSize = 20;
    int counter[counterSize] = {};
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 0 && arr[i] <= 19) {
            counter[arr[i]]++;
        }

    }
    for (int i = 0; i < size; i++)
    {
        std::cout << counter[i] << " ,";
    }

}

int main()
{
    int arr[20] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    numbersOccurrences(arr,20);
}