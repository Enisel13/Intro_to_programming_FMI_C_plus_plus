//
// Created by Enisel Kunch on 8.10.24.
//
#include <iostream>

int main()
{
    unsigned seconds;
    std::cout << "Seconds: ";
    std::cin >> seconds;

    unsigned days = seconds / (24 * 3600);
    seconds%= 24 * 3600; //ostatuk ot sekundite sled dnite

    unsigned hours = seconds / 3600;
    seconds %= 3600; //ostatuk sled chasovete

    int minutes = seconds / 60;
    seconds %= 60;

    std::cout << days << " days, "
                <<hours << " hours, "
                << minutes << " minutes, "
                << seconds << " seconds" << std::endl;
}