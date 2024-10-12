//
// Created by Enisel Kunch on 12.10.24.
//
//Да се напише функция, която приема масив от цели числа и размера му и връща средната стойност от елементите му и числото, което е най-близо до тази средна стойност.
//
//Пример:
//
//Вход:
//[5 7 4 9]
//Изход:
//6.25
//7

#include <iostream>

int myAbs(int num)
{
    return (num < 0) ? -num : num;
}

void findAverageAndClosest(const int* arr, size_t size, int& closest, double & average)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum+= arr[i];
    }
     average = sum/size;
    closest = arr[0];
    double minDiff = myAbs(arr[0] - average);

    for (int i = 0; i < size; i++)
    {
        double diff = myAbs(arr[i] - average);
        if(diff<minDiff)
        {
            minDiff=diff;
            closest = arr[i];
        }
    }
}

int main()
{
    int arr[] = {5, 7, 4, 9};
    int size = 4;
    int closest;
    double average;
    findAverageAndClosest(arr, size,closest, average);
    std::cout << "Средна стойност: " << average << std::endl;
    std::cout << "Най-близко число до средната стойност: " << closest << std::endl;

    return 0;
}