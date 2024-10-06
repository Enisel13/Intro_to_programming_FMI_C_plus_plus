////
//// Created by Enisel Kunch on 6.08.24.
////
////Да се напише функция, която приема масив от цели числа и размера му,
//// и връща дължината на най-дългата редица от еднакви числа.
//#include <iostream>
//
//int getTheBiggestRepeatingNumberInArray(int arr[], unsigned size)
//{
//    int currentCount = 1; //винаги имам поне единица като брой
//    int longestCount = 0;
//    for (int i = 0; i < size; i++)
//    {
//        if(arr[i] == arr[i+1])
//        {
//            currentCount++;
//        }
//        else
//        {
//            if(currentCount > longestCount)
//            {
//                longestCount = currentCount;
//            }
//            currentCount = 1;
//        }
//        }
//    return longestCount;
//}
//
//int main()
//{
//    constexpr int size = 11;
//    int arr[size] = {3, 3, 2, 2, 2, 5, 2, 2, 3, 3, 3};
//    std::cout << getTheBiggestRepeatingNumberInArray(arr, size);
//}