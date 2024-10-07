////
//// Created by Enisel Kunch on 12.08.24.
////
//#include <iostream>
//unsigned myStrlen(const char* str)
//{
//    if(!str)
//    {
//        return 0;
//    }
//    unsigned counter = 0;
//    while(*str != '\0')
//    {
//        counter++;
//        str++;
//    }
//    return counter;
//}
//
////tazi funkciq proverqwa dali dadena duma se sudurja v nachaloto na text
////Префикс на даден низ е последователност от началните символи на този низ
//bool isPrefix( const char* where, const char* text)
//{
//    while (*text != '\0' && *where != '\0')
//    {
//        if(*text != *where)
//        {
//            return false;
//        }
//        text++;
//        where++;
//    }
//    return *where == '\0';
//}
//
////tazi funkciq mi dava dali ima duma v text koqto e sushtata kato where
//bool isMatchingAtPosition(const char* text, const char* where)
//{
//    size_t textLen = myStrlen(text);
//    size_t whereLen = myStrlen(where);
//    while(whereLen <= textLen)
//    {
//        if(isPrefix(where, text))
//        {
//            return true;
//        }
//        where++;
//        textLen--;
//    }
//    return false;
//}
//
//void replaceTheWord(char* text, const char* where, const char* what)
//{
//    if(!text || !where || !what)
//    {
//        return;
//    }
//    size_t whereLen = myStrlen(where);
//    size_t whatLen = myStrlen(what);
//
//    while (*text != '\0')
//    {
//        if (isPrefix(where, text))
//        {
//            // Ако what е по-дълго от where, преместваме текста надясно
//            if (whatLen > whereLen)
//            {
//                // Преместване на текста надясно
//                for (size_t i = myStrlen(text); i >= (text - text); i--)
//                {
//                    text[i + (whatLen - whereLen)] = text[i];
//                }
//            }
//
//            // Вмъкваме what на мястото на where
//            for (size_t i = 0; i < whatLen; i++)
//            {
//                text[i] = what[i];
//            }
//
//            // Ако where е по-дълго от what, преместваме текста наляво
//            if (whatLen < whereLen)
//            {
//                size_t shift = whereLen - whatLen;
//                size_t i;
//                for (i = whereLen; text[i] != '\0'; i++)
//                {
//                    text[i - shift] = text[i];
//                }
//                text[i - shift] = '\0';
//            }
//
//            // Преместваме указателя text след края на вмъкнатия низ what
//            text += whatLen;
//        }
//        else
//        {
//            text++;
//        }
//    }
//
////    unsigned whatLen = myStrlen(what);
////    unsigned whereLen = myStrlen(where);
////    unsigned textLen = myStrlen(text);
////
////    while(*text != '\0')
////    {
////        if(isPrefix(where, text))
////        {
////            if(whatLen > whereLen)
////            {
////                //// Преместване на текста надясно
////                for (int i = textLen; i >= 0; i--)
////                {
////                    text[i+(whatLen - whereLen)] = text[i];
////                }
////            }
////        }
////
////        //// Вмъкваме what на мястото на where
////        for (int i = 0; i < whatLen; i++)
////        {
////            text[i] = what[i];
////        }
////
////        if (whatLen < whereLen)
////        {
////            int i;
////            size_t shift = whereLen - whatLen;
////            for (i = whereLen; text[i] != '\0'; i++)
////            {
////                text[i - shift] = text[i];
////            }
////            text[i - shift] = '\0';
////        }
////        // Преместваме указателя text след края на вмъкнатия низ what
////        text += whatLen;
////    }
//
//}
//
//int main()
//{
//    char text[100] = "I am the best of the best";
//    const char* where = "best";
//    const char* what = "worst";
//
//    replaceTheWord(text, where, what);
//
//    std::cout << text << std::endl; // Изход: "I am the worst of the worst"
//
//    return 0;
//}
