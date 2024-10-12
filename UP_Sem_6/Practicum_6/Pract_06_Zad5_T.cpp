//
// Created by Enisel Kunch on 11.10.24.
//
//Имаме масив с размер 20, който представлява пермутация на числата [0..20], в която обаче е изпуснат един елемент. Напишете функция, която намира кой е изпуснатия елемент и го връща.
//Пример:
//Вход:
//[0, 2, 1, 4, 6, 5, 8, 7, 10, 9, 12, 11, 14, 13, 16, 15, 18, 17, 20, 19]
//Изход:
//3

#include <iostream>
int missingElement(const int* arr, size_t size)
{
    const size_t counterSize = 20;
    int counter[counterSize] = {};
    for (int i = 0; i < size; i++) {
        counter[arr[i]]++;
    }

    for (int i = 0; i < counterSize; i++)
    {
        if(counter[i] == 0)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[20] = {0, 2, 3, 4, 6, 5, 8, 7, 10, 9, 12, 11, 14, 13, 16, 15, 18, 17, 20, 19};
    std::cout << missingElement(arr, 20);
}