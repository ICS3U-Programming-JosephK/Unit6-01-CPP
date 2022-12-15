// Copyright (c) 2022 Immaculata HS All rights reserved.
//
// Created by: Joseph Kwon
// Created on: December 14 2022
// This program generates 10 random numbers
// and then calculates the average

#include <math.h>

#include <iostream>
#include <random>
using std::string;

// Declaring constants
int MAX_SIZE = 10;
int MIN_NUM = 0;
int MAX_NUM = 100;

// Defining the main function
int main() {
    // Defining the variables
    int arrayOfInt[MAX_SIZE];
    int totalSum = 0;
    float average = 0;
    int someRandomNumber;
    int counter;
    int counter2;

    // First for loop to generate random numbers
    for (counter = 0; counter < 10; counter++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());                        // mersenne_twister
        std::uniform_int_distribution<int> idist(0, 100);  // [0,100]
        someRandomNumber = idist(rgen);
        arrayOfInt[counter] = someRandomNumber;
        std::cout << someRandomNumber << " added to array at index ";
        std::cout << counter << "\n";
    }

    // Second for loop for calculating the sum
    for (counter2 = 0; counter2 < 10; counter2++) {
        totalSum += arrayOfInt[counter2];
    }

    // Calculating average
    average = totalSum / 10;

    // Displaying average
    std::cout << "\nThe average is " << average;
}
