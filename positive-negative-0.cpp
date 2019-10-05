// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Douglass Jeffrey
// Created on: oct 2019
// This program determines if a number is positive negative or 0

#include <iostream>

int main() {
    // this function determines if a number is positive negative or 0
    int usernumber;

    // input
    std::cout << "Enter a number: ";
    std::cin >> usernumber;
    std::cout << "" << std::endl;

    // process
    if (usernumber < 0) {
        std::cout << "Your number is negative";
    } else if (usernumber > 0) {
        std::cout << "Your number is positive";
    } else {
        std::cout << "Your number is 0";
    }
}
