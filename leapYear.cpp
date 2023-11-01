// Copyright (c) 2023 Zak Goneau All rights reserved.
//
// Created by: Zak Goneau
// Date Created: Oct. 31, 2023
// This program gets a year from the user and will tell them
// if it is a leap year or not. It involves the use of mods as well.

#include <iostream>
#include <string>

int main() {

    // introduce program to user
    std::cout << "This program gets a year from the user and will tell them ";
    std::cout << "if it is a leap year or not.\n";

    // declare variables
    int yearInt;
    std::string yearStr;

    // get user input for year
    std::cout << "Please enter a year: ";
    std::cin >> yearStr;

    // try to convert string to integer
    try {
        yearInt = std::stoi(yearStr);

        // error checking, making sure year is not under 0
        if (yearInt > 0) {

            // check if year is evenly divisible by 4
            if (yearInt % 4 ==0) {

                // check if year is evenly divisible by 100
                if (yearInt % 100 == 0) {

                    // check if year is evenly divisible by 400
                    if (yearInt % 400 == 0) {
                        std::cout << "" << yearInt << " is a leap year.\n";
                    } else {
                        std::cout << "" << yearInt << " is not a leap year.\n";
                    }
                } else {
                    std::cout << "" << yearInt << " is a leap year.\n";
                }
            } else {
                std::cout << "" << yearInt << " is not a leap year.\n";
            }
        } else {
            std::cout << "" << yearInt << " is not a valid year.\n";
        }
    // catch invalid inputs from user
    } catch (std::invalid_argument) {
        std::cout << "" << yearStr << " is not a valid year.\n";
        }
}
