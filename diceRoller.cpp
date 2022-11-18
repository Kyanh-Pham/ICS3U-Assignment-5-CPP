// Copyright (c) 2022 Kyanh Pham
//
// Created on: Oct 2022
// This program rolls a dice until you get doubles

#include <iostream>
#include <random>
#include <string>

int main() {
    // This function sees if you guessed right or wrong
    int counter = 0;
    int dice1;
    int dice2;
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(1, 6);

    // Process and Output
    while (dice1 != dice2) {
        dice1 = idist(rgen);
        dice2 = idist(rgen);
        counter = counter + 1;
        if (dice1 == dice2)
            break;
        std::cout << "Roll #" << counter << "...Dice 1 rolled a "
         << dice1 << " and dice 2 rolled a " << dice2 << "!" << std::endl;
    }

    std::cout << "Roll #" << counter
     << "...hit doubles! Dice 1 and dice 2 rolled a "
     << dice1 << "!" << std::endl;

    std::cout << std::endl;
    std::cout << "Done.";
}
