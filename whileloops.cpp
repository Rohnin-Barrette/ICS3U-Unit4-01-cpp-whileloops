// Copyright (c) 2020 Rohnin Barrette All rights reserved.
//
// Created by: Rohnin Barrette
// Created on: Sep 2021
// This program uses a while loop

#include <iostream>

int main() {
    // this function uses a while loop
    int positive_number;
    int loop_counter = 0;
    int sum_of_numbers = 0;
    std::string positive_string;

    // input
    std::cout << "" << std::endl;
    std::cout << "Enter a POSITIVE integer: ";
    std::cin >> positive_string;
    std::cout << "" << std::endl;

    // process and output
    try {
        positive_number = std::stoi(positive_string);
        while (loop_counter <= positive_number) {
            sum_of_numbers = sum_of_numbers + loop_counter;
            loop_counter = loop_counter + 1;
        } std::cout << "The sum of the numbers from 1 to "
        << positive_number << " is " << sum_of_numbers << std::endl;
        }
    catch (std::invalid_argument) {
        std::cout << positive_string << " Is not a valid input";
        std::cout << "" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
