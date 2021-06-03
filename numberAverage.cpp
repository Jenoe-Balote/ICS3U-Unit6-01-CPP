// Copyright (c) Jenoe Balote All rights reserved
//
// Created by: Jenoe Balote
// Created on: June 2021
// This program averages numbers

#include <iostream>
#include <random>


main() {
    // This function averages random numbers

    // Declaring variables
    int randomNumbers[10];
    float numAverage = 0;
    int numberCreated;

    // Process and Output
    std::cout << "Generating numbers..." << std::endl;
    std::cout << "" << std::endl;
    for (
        int loopCounter = 0;
        // source used for fniding lenth of an array:
        // https://stackoverflow.com/questions/4108313/
        // how-do-i-find-the-length-of-an-array
        loopCounter < sizeof(randomNumbers)/sizeof(*randomNumbers);
        loopCounter++
    ) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());  // mersenne_twister
        std::uniform_int_distribution<int> idist(1, 100);
        numberCreated = idist(rgen);
        randomNumbers[loopCounter] = numberCreated;
    }
    for (
        int loopCounter = 0;
        loopCounter < sizeof(randomNumbers)/sizeof(*randomNumbers);
        loopCounter++
    ) {
        std::cout << "The random number " << loopCounter + 1 << " is "
        << randomNumbers[loopCounter] << "." << std::endl;
        numAverage += randomNumbers[loopCounter];
    }
    numAverage = numAverage / (sizeof(randomNumbers) / sizeof(*randomNumbers));
    std::cout << "\nThe average of the numbers is " << numAverage
              << "." << std::endl;
    std::cout << "\nDone" << std::endl;
}
