// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by Gabriel A
// Created on Jan 2021
// This program generates random integers and identifies the lowest

#include <iostream>
#include <random>
#include <array>
#include <iomanip>

template<size_t N>
int minimum(std::array<int, N> randomNumber) {
    // This program finds the smallest number

    int minimum = randomNumber[0];

    // process
    for (int loop_counter : randomNumber) {
        if (minimum <= loop_counter) {
            continue;
        } else if (minimum > loop_counter) {
            minimum = loop_counter;
        }
    }

    return minimum;
}

main() {
    // this function uses an array

    std::array<int, 10> randomNumber;
    int aSingleNumber;
    int number;
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 100);

    // input
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        aSingleNumber = idist(rgen);
        randomNumber[loop_counter] = aSingleNumber;
    }
    std::cout << "";

    std::cout << "Here are 10 completely random numbers:\n\n";

    for (int loop_counter; loop_counter < 10; loop_counter++) {
        std::cout << randomNumber[loop_counter] << " ";
    }

    number = minimum(randomNumber);

    std::cout << "\n\nThe lowest number in this list is: " << number << "\n";
}
