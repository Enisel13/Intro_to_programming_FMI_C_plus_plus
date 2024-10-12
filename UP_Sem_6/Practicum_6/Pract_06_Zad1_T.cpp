//
// Created by Enisel Kunch on 11.10.24.
//

//1. Напишете функция, която намира първия повтарящ се елемент в масив от N числа.
#include <iostream>
int firstRepeatingElement(const int* arr, size_t n)
{
    //създавам един counting масив
    const int maxCount = 200;
    int count[maxCount] = {0};

    //obhojdam masiva i broq sreshtaniqta na vseki element
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    for (int i = 1; i < n ; i++)
    {
        if(count[arr[i]] > 1)
        {
            return arr[i];
        }

    }
    return -1;
}

int main()
{
    int arr[6] = {5,5,3,3, 5, 3};
   int result = firstRepeatingElement(arr, 6);
   std::cout << result;
}