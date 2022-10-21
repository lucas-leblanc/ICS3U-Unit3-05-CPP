// Copyright(c) 2022 Lucas LeBlanc All rights reserved.
//
// Created by : Lucas LeBlanc
// Created on : Oct 2022
// ICS3U-Unit3-05.cpp File, learning select cases in C++.

#include <iostream>

int main() {
    // creating variables
    int monthNumber;

    // input
    std::cout << "Enter the number of the month(ex: 11 for November): ";
    std::cin >> monthNumber;

    // process and output
    std::cout << "\n";
    switch (monthNumber) {
        case 1:
            std::cout << "The " << monthNumber << "st month is January.";
            break;
        case 2:
            std::cout << "The " << monthNumber << "nd month is February.";
            break;
        case 3:
            std::cout << "The " << monthNumber << "rd month is March.";
            break;
        case 4:
            std::cout << "The " << monthNumber << "th month is April.";
            break;
        case 5:
            std::cout << "The " << monthNumber << "th month is May.";
            break;
        case 6:
            std::cout << "The " << monthNumber << "th month is June.";
            break;
        case 7:
            std::cout << "The " << monthNumber << "th month is July.";
            break;
        case 8:
            std::cout << "The " << monthNumber << "th month is August.";
            break;
        case 9:
            std::cout << "The " << monthNumber << "th month is September.";
            break;
        case 10:
            std::cout << "The " << monthNumber << "th month is October.";
            break;
        case 11:
            std::cout << "The " << monthNumber << "th month is November.";
            break;
        case 12:
            std::cout << "The " << monthNumber << "th month is December.";
            break;
        default:
            std::cout << "The number has to be a number between 1 and 12.";
    }

    std::cout << "\n\n\nDone.\n";
}
