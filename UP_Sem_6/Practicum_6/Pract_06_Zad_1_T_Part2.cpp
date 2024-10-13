//
// Created by Enisel Kunch on 13.10.24.
//
#include <iostream>

//Напишете функция, която приема 2 масива от цели числа arr и result (който е празен), 2 числа a и b и пълни масива result с всички числа от arr, които са в интервала [a, b] .
//
//Пример:
//
//Вход:
//
//[5 7 1 4 3 9 10]
//2 8
//Изход:
//
//[5 7 4 3]

void fillArray(const int* arr, size_t size1, int* result,int & resultSize, int a, int b)
//Използването на референция за resultSize в функцията fillArray е важно,
// за да мога да предам информация за размера на запълнения масив result обратно на извикващата функция (в случая, main)
{
    resultSize = 0;
    for (int i = 0; i < size1; i++)
    {
        if(arr[i] >=a && arr[i] <= b)
        {
            result[resultSize] = arr[i];
            resultSize++;
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
    int arr[] = {5, 7, 1, 4, 3, 9, 10};
    int result[100];
    int resultSize = 0;
    int a = 2;
    int b = 8;

    fillArray(arr, 7, result, resultSize, a, b);
    printArray(result, resultSize);

    return 0;
}

