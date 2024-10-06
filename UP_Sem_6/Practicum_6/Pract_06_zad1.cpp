////
//// Created by Enisel Kunch on 6.08.24.
////
////Да се напише функция, която приема масив от цели числа и размера му,
//// и връща средната стойност на елементите му и числото, което е най-близо до тази средна стойност.
//
//#include <iostream>
//
//double returnTheAverage(int arr[], unsigned size)
//{
//    double average = 0;
//    for (int i = 0; i < size; i++)
//    {
//        average += arr[i];
//    }
//    average/=size;
//    return average;
//}
//
//int findTheClosestToTheAverage(int arr[], unsigned size, double average)
//{
//    int closest = 0;
//    double closestDifference = abs(arr[0] - average);
//    //Обходете масива и намерете числото, което има най-малка разлика от средната стойност.
//    for (int i = 0; i < size; i++)
//    {
//        double currentDifference = abs(arr[i] - average);
//        if(currentDifference < closestDifference)
//        {
//            closestDifference = currentDifference;
//            closest = arr[i];
//        }
//    }
//    return closest;
//}
//
//int main()
//{
//    constexpr int size = 4;
//    int arr[size] = {5, 7, 4, 9};
//    double average = returnTheAverage(arr, size);
//    int closest = findTheClosestToTheAverage(arr, size, average);
//    std::cout << "Най-близкото число до средната стойност е: " << closest;
//}