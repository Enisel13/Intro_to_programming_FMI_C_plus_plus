//
// Created by Enisel Kunch on 12.10.24.
//
//Напишете функция, която приема масив и връща дали е сортиран.
#include <iostream>

bool isSortedArray(const int* arr, size_t size)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i] > arr[i+1])
        {
            return false;
        }

    }
    return true;

}

int main()
{
    //int sortedArr[5] = {1, 2, 3, 4, 5};
   // int unsortedArr[5] = {5, 3, 2, 4, 1};
    int unsortedArr[5] = {1, 3, 4, 6,5 };
    std::cout << isSortedArray(unsortedArr, 5);
}