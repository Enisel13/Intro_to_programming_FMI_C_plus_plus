////
//// Created by Enisel Kunch on 6.08.24.
////
//#include <iostream>
//
//bool isSortedArr(int arr[], unsigned size)
//{
//        bool isAscending = false;
//        if(size == 1)
//        {
//            return true;
//        }
//        if(arr[0] > arr[1])
//        {
//            isAscending = false;
//        }
//        else
//        {
//            isAscending = true;
//        }
//    for (int i = 0; i < size - 1; i++)
//    {
//       if(arr[i] > arr[i+1])
//       {
//           return false;
//       }
//
//    }
//    return true;
//
//}
//
//int main()
//{
//    constexpr unsigned size = 3;
//    int arr[size] = {2,4,5};
//    std::cout << isSortedArr(arr, size);
//}