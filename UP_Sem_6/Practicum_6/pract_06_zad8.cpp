////
//// Created by Enisel Kunch on 7.08.24.
////
////Напишете функция, която приема 2 масива, съставени само от цифрите от 0 до 9,
//// с еднаква дължина. Функцията да връща дали вторият масив е пермутация на първия.
//
//#include <iostream>
//
//int findOccurencesInArray(int arr[], unsigned size, int numberToSearch)
//{
//    int counter = 0;
//    for (int i = 0; i < size; i++)
//    {
//        if(arr[i] == numberToSearch)
//        {
//            counter++;
//        }
//    }
//    return counter;
//}
//
//bool isPermutation(int arr1[], unsigned size1, int arr2[], unsigned size2)
//{
//    if(size1 != size2)
//    {
//        return false;
//    }
//    for (int i = 0; i <= 9; i++)
//    {
//        int occurencesInFirstArray = findOccurencesInArray(arr1, size1, i);
//        int occurencesInSecondArray = findOccurencesInArray(arr2, size2, i);
//        if(occurencesInFirstArray != occurencesInSecondArray)
//        {
//            return false;
//        }
//    }
//    return true;
//}
//
//int main()
//{
//    constexpr int size1 = 6;
//    constexpr int size2 = 6;
//    int arr1[size1] = {1, 4, 4, 0, 4, 2};
//    int arr2[size2] = {0, 4, 4, 4, 1, 2};
//    std::cout << isPermutation(arr1, size1, arr2, size2);
//
//
//}