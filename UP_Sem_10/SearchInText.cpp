////
//// Created by Enisel Kunch on 6.10.24.
////
//#include <iostream>
//
//bool isPrefix(const char* text, const char* expectedPrefix)
//{
//    if(!text || !expectedPrefix)
//    {
//        return false;
//    }
//
//    while(*expectedPrefix != '\0')
//    {
//        if(*text != *expectedPrefix)
//        {
//            return false;
//        }
//        text++;
//        expectedPrefix++;
//    }
//    return true;
//}
//
//bool searchInText(const char* text, const char* searchedText)
//{
//    if(!text || !searchedText)
//    {
//        return false;
//    }
//
//    while(*text != '\0')
//    {
//        if(isPrefix(text, searchedText))
//        {
//            return true;
//        }
//        text++;
//    }
//    return false;
//}
//
//
//unsigned myStrLen(const char* text)
//{
//    if(!text)
//    {
//        return 0;
//    }
//
//    unsigned length = 0;
//    while(*text != '\0')
//    {
//        length++;
//        text++;
//    }
//    return length;
//}
//
//bool searchInText2(const char* text, const char* searchedText)
//{
//    if(!text || !searchedText)
//    {
//        return false;
//    }
//
//    unsigned textLen = myStrLen(text);
//    unsigned searchedTextLen = myStrLen(searchedText);
//
//    while(searchedTextLen <= textLen)
//    {
//        if(isPrefix(text, searchedText))
//        {
//            return true;
//        }
//        text++;
//        textLen--;
//    }
//    return false;
//}