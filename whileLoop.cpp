// copyright (c) 2020 Joshua Yeung All rights reserved

// Created by: Joshua Yeung
// Created on October 2021
// This program is to test while loop

#include <iostream>
#include <string>

int main() {
    // This function is to test while loop
    int loopCounter = 0;
    int sumNumber = 0;
    std::string userInputStr;
    int userInput;

    // input
    std::cout << "Enter a positive integer here: ";
    std::cin >> userInputStr;
    std::cout << "" << std::endl;

    try {
        userInput = std::stoi(userInputStr);
        while (loopCounter <= userInput) {
            sumNumber = sumNumber + loopCounter;
            loopCounter = loopCounter + 1;
        }
        std::cout << "The sum of all positive number from 1 to " <<
                    userInput << " is " << sumNumber << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid integer";
    }

    std::cout << "\nDone" << std::endl;
}
