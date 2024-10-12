//
// Created by Enisel Kunch on 12.10.24.
//
//Да се напише функция, която приема масив от цели числа и връща минимума и максимума на числата.
//
//Пример:
//
//Вход:
//
//[3 1 2 8 13 5 1 6 25]
//Изход:
//
//Min: 1
//Max: 25

#include <iostream>
void findMinAndMax(const int* arr, size_t size, int& min, int& max)
{
     min = arr[0];
     max = arr[0];

    for (int i = 0; i < size; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
}

int main() {
    // Примерен масив
    int arr[] = {0, 1, 2, 8, 13, 5, 1, 6, 85};
    int size = 9;

    int min, max;

    // Намираме минимума и максимума
    findMinAndMax(arr, size, min, max);

    // Извеждаме резултатите
    std::cout << "Min: " << min << std::endl;
    std::cout << "Max: " << max << std::endl;

    return 0;
}
