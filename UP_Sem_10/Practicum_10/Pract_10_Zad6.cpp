////
//// Created by Enisel Kunch on 11.08.24.
////
//#include <iostream>
//
//void makeLettersUpper(char* string)
//{
//    if(!string)
//    {
//        return;
//    }
//    //това е случаят, когато е началото на стринга
//    if(*string >= 'a' && *string <= 'z')
//    {
//        *string = *string - ('a' - 'A');
//        string++;
//    }
//
//    bool isTheOtherWordAfterTheInterval = false;
//
//    while(*string != '\0')
//    {
//        if(*string == ' ')
//        {
//            isTheOtherWordAfterTheInterval = true;
//        }
//
//        if(*string >= 'a' && *string <= 'z' && isTheOtherWordAfterTheInterval)
//        {
//            *string = *string - ('a' - 'A');
//            isTheOtherWordAfterTheInterval = false;
//        }
//        string++;
//    }
//}