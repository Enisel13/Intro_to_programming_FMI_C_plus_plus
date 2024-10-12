//
// Created by Enisel Kunch on 11.10.24.
//

// Да се напише функция, която "премахва" елемент на масив на даден индекс.
//Пример:
//Вход:
//[0, 1, 2, 3, 4, 5, 6] 4
//Изход:
//[0, 1, 2, 3, 5, 6, -1]

#include <iostream>
void removeElement(int* arr, size_t size, int index)
{
    if (index < 0 || index >= size)
    {
        std::cout << "Invalid index\n";
        return;
    }
    for (int i = index; i < size - 1; i++)
    {
            arr[i] = arr[i+1];
    }
    --size;

}

int main()
{
    int arr[7] = {0, 1, 2, 3, 4, 5, 6};
    int index = 4;
    removeElement(arr, 7,index);
    for (int i = 0; i < 6; i++)
    {
        std::cout << arr[i];
    }
}