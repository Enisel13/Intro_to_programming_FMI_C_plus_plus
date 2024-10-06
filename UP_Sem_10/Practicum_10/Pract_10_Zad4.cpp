////
//// Created by Enisel Kunch on 10.08.24.
////
//#include <iostream>
//
//void shiftAllToTheLeft(char* source)
//{
//    if(!source)
//    {
//        return;
//    }
//    while (*source!='\0')
//    {
//        *source = source[1];
//        source++;
//    }
//}
//
//void removeSymbolFromString(char* source, char symbol)
//{
//    if(!source)
//    {
//        return;
//    }
//    while (*source!='\0')
//    {
//        if(*source == symbol)
//        {
//            shiftAllToTheLeft(source);
//            source--; //намалявам го защото съм премахнала един символ
//        }
//        source++;//ако не съвпада със символа който търся продължавам напред
//    }
//}
//
//int main()
//{
//    const int maxLength = 50;
//    char source[maxLength] = "Hello, my friend!";
//    removeSymbolFromString(source, 'e');
//    std::cout << source;
//}