//
// Created by Enisel Kunch on 14.10.24.
//

//Имаме масив с дължина 5, който представя число по - малко от 10000. Пример: [0, 1, 1, 1, 2] -> 1112 Да се напише програма, която променя масива така,
// че числото записано в него да е с единица по - голямо.
//
//Пример:
//
//Вход:
//
//[0, 1, 0, 0, 9]
//Изход:
//
//[0, 1, 0, 1, 0] (Понеже 1009 + 1 = 1010).

#include <iostream>
void plusOne(int* arr, size_t size)
{
    int carryOne = 1;
    if(size!=5)
    {
        return;
    }
    for (int i = size-1; i >=0; i--)
    {
        int sum = arr[i] + carryOne;
        if(sum >= 10)
        {
            arr[i] = sum %10;
            carryOne=1;
        }
        else {
            arr[i] = sum;
            carryOne=0;
            break;
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
    int arr[5] = {0, 1, 0, 0, 9};
    plusOne(arr, 5);
    printArray(arr, 5);

}