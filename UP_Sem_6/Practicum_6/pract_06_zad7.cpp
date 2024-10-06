////
//// Created by Enisel Kunch on 6.08.24.
////
//#include <iostream>
//
//unsigned removeNegativeNumbers(int arr[], unsigned size)
//{
//    int newSize = 0;
//
//    // Прехвърляне на положителните числа към началото на масива
//    for (int i = 0; i < size; i++)
//    {
//        if (arr[i] >= 0) {
//            arr[newSize++] = arr[i];
//        }
//    }
//    // Актуализиране на размера на масива
//    //size = newSize;
//    return newSize;
//}
//
//void printArray(int arr[], unsigned size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        std::cout << arr[i] << " ";
//
//    }
//}
//
//int main() {
//    constexpr unsigned size= 7;
//    int arr[size] = {1, -4, 4, -5, -9, 2, 10};
//    printArray(arr, size);
//    std::cout << std::endl;
//    unsigned newSize = removeNegativeNumbers(arr, size);
//    printArray(arr, newSize);
//}