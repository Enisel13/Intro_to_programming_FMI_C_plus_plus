////
//// Created by Enisel Kunch on 10.08.24.
////
//#include <iostream>
//
//bool isSymbolInString(char symbol, char* source)
//{
//    while(*source != '\0')
//    {
//        if(*source == symbol)
//        {
//            return true;
//        }
//        source++;
//    }
//    return false;
//}
//
//void findDifferencesFromFirst(char* str1, char* str2)
//{
//    if(!str1 || !str2)
//    {
//        return;
//    }
//    //int index = 0;
//    while(*str1 != '\0')
//    {
//        if(!isSymbolInString(*str1, str2))
//        {
//            std::cout << *str1 << " ";
//        }
//        str1++;
//    }
//}
//
//void findDifferencesFromSecond(char* str1, char* str2)
//{
//    while (*str2 != '\0') {
//        if (!isSymbolInString(*str2, str1))
//        {
//            std::cout << *str2;
//        }
//        str2++;
//
//    }
//}
//
//int main() {
//    const int MAX_LENGTH = 100; // Максимална дължина на стринговете
//
//    char str1[MAX_LENGTH] = "abcde" ;
//    char str2[MAX_LENGTH] = "acdef";
//
//
//    std::cout << "Differences: ";
//
//    // Намерете разликите от първия стринг
//    findDifferencesFromFirst(str1, str2);
//
//    // Намерете разликите от втория стринг
//    findDifferencesFromSecond(str1, str2);
//
//    std::cout << std::endl;
//
//    return 0;
//}
