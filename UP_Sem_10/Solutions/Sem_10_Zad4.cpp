//
// Created by Enisel Kunch on 13.08.24.
//
#include <iostream>

const int MAX_WORDS = 100;
const int MAX_WORD_LENGTH = 50;

char words[MAX_WORDS][MAX_WORD_LENGTH]; //съхранява множество думи //всеки ред представлява една дума,
// а колоните представляват символите на думата

int wordCount[MAX_WORDS];
int totalWords = 0;

//във условието е споменато, че няма разлика между главни и малки букви затова
// аз си избирам всички букви да бъдат малки
char toLowerCase(char ch)
{
    if(ch >='A' && ch <= 'Z')
    {
        return ch + ('a' - 'A');
    }
    return ch;
}

// Функция за сравняване на два низа, игнорирайки разликата между главни и малки букви
bool compareWords(const char* word1, const char* word2)
{
    if(!word1 && !word2)
    {
        return 0;
    }

    while(word1 && word2)
    {
        if(toLowerCase(*word1) != toLowerCase(*word2))
        {
            return false;
        }
        word1++;
        word2++;
    }
    return *word1=='\0' && *word2 == '\0'; //Ако и двата низа са равни, те трябва да завършват на същото място,
                                            // т.е. и двата трябва да имат нулев терминатор в същото положение
}

//Тази функция проверява дали думата вече съществува и ако не съществува я добавя като нова дума
void addWord(const char* word)
{
    for (int i = 0; i < totalWords; i++)//Цикълът преминава през всички запазени думи в масива words
    {
        if(compareWords(words[i], word)) //Сравнява текущата дума (words[i]) с подадената дума (word)
        {
            wordCount[i]++;//увеличава броя на срещанията на тази дума
            return; // излиза от функцията, защото думата вече съществува и сме увеличили броя ѝ
        }
    }

    // Добавяне на нова дума
    //Ако думата не е намерена в масива words, преминаваме към добавянето ѝ
    int index = 0;
    while (word[index])
    {
        //За да добавите дума в масива, просто присвоявате символите на тази дума
//        // на конкретен ред от двумерния масив и добавяте нулевия терминатор
        words[totalWords][index] = word[index];
        index++;
    }
//    while(*word!= '\0')
//    {
//
//        words[totalWords][index] = word[index];
//        index++;
//        word++;
//    }

    wordCount[totalWords] = 1;
    totalWords++; //Увеличава броя на уникалните думи, тъй като сме добавили нова
}

// Функция за намиране на най-често срещаната дума
const char* mostFrequentWord()
{
    int maxCount = 0;
    const char* mostFrequentWord = nullptr;
    for (int i = 0; i < totalWords; i++)
    {
        if(wordCount[i] >maxCount)
        {
            maxCount = wordCount[i];//wordCount- Броя на срещанията за всяка дума
            mostFrequentWord = words[i];
        }
    }
    return mostFrequentWord;
}

//Функцията processString има за цел да обработва низ от символи,
// да извлича от него думи и да добавя тези думи в масив от думи
void processString(char* str)
{
    char word[MAX_WORD_LENGTH];//използва се за съхранение на текущата дума
    int wordIndex = 0; //следи текущото място за запис на символи в масива word

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if (ch == ' ' || ch == '\t' || ch == ',' || ch == '.' || ch == '!' || ch == '?' || ch == ';' || ch == ':')
        {
            if(wordIndex > 0)
            {
                word[wordIndex] = '\0';
                addWord(word);
                wordIndex = 0;
            }
        }
        else
        {
            word[wordIndex] = toLowerCase(ch);
            wordIndex++;
        }

    }
    // Добавяне на последната дума
    //Това се случва, ако низът не завършва с разделител, а с дума
    if (wordIndex > 0) {
        word[wordIndex] = '\0';
        addWord(word);
    }
}

int main() {
    char str[100] = "Me? Why always me?";


    processString(str);
    std::cout << mostFrequentWord();
    return 0;
}

