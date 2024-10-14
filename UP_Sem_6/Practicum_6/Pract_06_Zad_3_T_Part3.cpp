//
// Created by Enisel Kunch on 14.10.24.
//
#include <iostream>
//Да се напише функция, която приема 2 масива от цели числа и връща резултат дали са линейно зависими.
//
//Пример:
//
//Вход:
//
//[1 2 3 4 5]
//[2 4 6 8 10]
//Изход:
//
//yes
//Вход:
//
//[1 2 3 4 5]
//[2 4 6 8 11]
//Изход:
//
//no

bool areLinearlyDependent(const int* arr1, size_t size1, const int* arr2, size_t size2)
{
    if (size1 == 0 || size2 == 0 || size1 != size2)
    {
        return false;
    }

//    if(arr1[0] == 0)
//    {
//        return (arr2[0] == 0);
//    }
    int scalar = arr2[0] / arr1[0];

    for (int i = 0; i < size1; i++)
    {
        if(arr1[i] * scalar != arr2[i])
        {
            return false;
        }

    }
    return true;
}

int main()
{
    int arr1[] = {1,0,3,4,5};
    int arr2[] = {2,0,6,8,10};
    std::cout << areLinearlyDependent(arr1, 5, arr2, 5);
}

