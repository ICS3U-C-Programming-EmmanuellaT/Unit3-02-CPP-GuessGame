// Copyright (c) 2026 Emmanuella Taiwo All rights reserved
// Created by: Emmanuella Taiwo
// Date: 9th Oct,2026
// This program asks the user
// to guess a number between 0 and 9, 
// and checks if the guess is correct or not

#include <iostream>

int main() {
    // declare variables
    int number;
    const int MIN_NUMBER = 0;
    const int MAX_NUMBER = 9;
    const int CORRECT_NUMBER = 3;

    // get the number from the user
    std::cout << "Enter a number between 0 and 9: ";
    std::cin >> number;

    // check if the number is within the valid range
    if (number < MIN_NUMBER || number > MAX_NUMBER) {
        std::cout << "Invalid input. Please enter a number between 0 and 9." << std::endl;
    } else {
        // check if the number is correct
        if (number == CORRECT_NUMBER) {
            std::cout << "you are correct! " << std::endl;
        } else {
            std::cout << "you are wrong. Try again!" << std::endl;
        }
    }
    return 0;
}
