////
//// Created by Enisel Kunch on 5.10.24.
////
//
//#include <iostream>
//void swap(int& a, int& b)
//{
//    int temp = a;
//    a = b;
//    b = temp;
//}
//
//void reverseArray(int* arr, size_t size)
//{
//    for (int i = 0; i < size/2; i++)
//    {
//        swap(arr[i], arr[size - i - 1]);
//    }
//}
//
//void printArray(int* arr, size_t size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        std::cout << arr[i] << " ";
//        std::cout << ',';
//    }
//}
//
//int main()
//{
//    const size_t size = 4;
//    int arr[size] = {1,2,3,4};
//    reverseArray(arr, size);
//    printArray(arr, size);
//}