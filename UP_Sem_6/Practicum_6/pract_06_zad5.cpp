////
//// Created by Enisel Kunch on 6.08.24.
////
//
////Напишете функция, която приема масив от цели числа и размера му, както и празен масив result,
//// и намира и съхранява в result абсолютната стойност
//// на разликата между съседни елементи на първоначалния масив.
//#include <iostream>
//
//void fillDifferencesArrayBetweenElements(int arr[], unsigned size, int result[])
//{
//    for (int i = 0; i < size -1; i++)
//    {
//        result[i] = abs(arr[i] - arr[i+1]);
//    }
//}
//
//void printArray(int arr[], unsigned size) {
//    for (int i = 0; i < size; i++) {
//        std::cout << arr[i] << " ";
//
//    }
//}
//int main()
//{
//    constexpr int size = 7;
//    int arr[size] = {1, -4, 4, -5, -9, 2, 10};
//    int result[] = {};
//    fillDifferencesArrayBetweenElements(arr, size, result);
//    printArray(result, size-1);
//}