////
//// Created by Enisel Kunch on 9.08.24.
////
//#include <iostream>
//
//void howManyTimesAGivenDigitOccursInArray(char* text, int* numbersCount, int number)
//{
//    if(!text)
//    {
//        return;
//    }
//    int counter = 0; //counter се използва за броене на броя на символите, преминали през указателя text.
//    while(*text!='\0')
//    {
//        if((*text) - '0' == number)//проверява дали цифра от масива текст е тавна на подадено число
//        {
//            numbersCount[number]++;
//        }
//        counter++;
//        text++;
//    }
//    text -= counter; //връща указателя text на началото на низа.
//    //функцията би работила и без counter
//}
//
//void howManyTimesANumberOccursInAString(char* text, char* result)
//{
//    if(!text || !result)
//    {
//        return;
//    }
//
//    int arr[10] = {0, 0,0,0,0,0,0,0,0, 0};
//    for (int i = 0; i <= 9; i++)
//    {
//        howManyTimesAGivenDigitOccursInArray(text, arr, i);
//    }
//
//    for (int i = 0; i <= 9 ; i++)
//    {
//        if(arr[i]!=0)
//        {
//            *result = arr[i]+'0';
//            result++;
//            *result = 'x';
//            result++;
//            *result = i + '0';
//            result++;
//            *result = ',';
//            result++;
//        }
//    }
//    *(--result)= '\0';
//}
//
//int main()
//{
//    const int maxLength = 50;
//    char text[] = "4231148";
//    char result[maxLength] = "";
//    howManyTimesANumberOccursInAString(text, result);
//    std::cout << "Input: " << text << std::endl;
//    std::cout << "Output: " << result << std::endl;
//}