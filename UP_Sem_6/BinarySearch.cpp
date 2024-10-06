////
//// Created by Enisel Kunch on 5.10.24.
////
//
//#include <iostream>
//
//int binarySearch(int* arr, size_t size, int x)
//{
//    int leftIndex = 0;
//    int rightIndex = size - 1;
//
//   while(leftIndex <= rightIndex)
//   {
//       int midIndex = leftIndex + (rightIndex-leftIndex)/2;
//       if(arr[midIndex] == x)
//       {
//           return midIndex;
//       }
//       else if(arr[midIndex] < x)
//       {
//           leftIndex = midIndex + 1;
//       }
//       else
//       {
//           rightIndex = midIndex - 1;
//       }
//   }
//   return -1;
//}