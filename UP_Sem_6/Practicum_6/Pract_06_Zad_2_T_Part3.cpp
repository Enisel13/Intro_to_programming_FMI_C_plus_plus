//
// Created by Enisel Kunch on 14.10.24.
//

//Да се напише функция, която приема 3 масива от цели числа - arr1, arr2 и result (който е празен), като arr1 и arr2 са сортирани във възходящ ред.
// В края на функцията result представлява обединение на 2-та масива и е сортиран във възходящ ред.
//
//Пример:
//
//Вход:
//
//[1 5 7 8]
//[2 3 9]
//Изход:
//
//[1 2 3 5 7 8 9]

#include <iostream>
void mergeArrays(const int* arr1, size_t size1, const int* arr2, size_t size2, int* result)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while(i < size1 && j < size2)
    {
        if(arr1[i] < arr2[j])
        {
            result[k++] = arr1[i++];
        }
        else
        {
            result[k++] = arr2[j++];
        }
    }
//Ако arr1 все още има останали елементи (т.е. i < size1), ние ги копираме направо в result
    while(i<size1)
    {
        result[k++] = arr1[i++];
    }

    while(j<size2)
    {
        result[k++] = arr2[j++];
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
    int arr1[] = {1,5,7,8};
    int arr2[] = {2,3,9};
    int result[7];
    mergeArrays(arr1, 4, arr2, 3, result);
    printArray(result, 7);
}