////
//// Created by Enisel Kunch on 12.08.24.
////
//#include <iostream>
//
//void toUpper(char* str)
//{
//    if(!str)
//    {
//        return;
//    }
//    while(*str!= '\0')
//    {
//        if(*str >= 'a' && *str <='z')
//        {
//            *str = *str - ('a' - 'A');
//
//        }
//        str++;
//    }
//}
//
//void toLower(char* str)
//{
//    if(!str)
//    {
//        return;
//    }
//    while(*str!= '\0')
//    {
//        if(*str >= 'A' && *str <= 'Z')
//        {
//            *str = *str + ('a' - 'A');
//
//        }
//        str++;
//    }
//}
//
//int main()
//{
//    char str[50] = "Hello!";
//    toLower(str);
//    std::cout << str;
//}