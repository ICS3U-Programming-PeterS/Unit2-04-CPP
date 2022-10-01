// Copyright (c) 2022 Peter Sobowale All rights reserved.
//
// Created by: Peter Sobowale
// Date: Sept 29, 2022
// This program asks the user for the diameter of the
// pizza. It then calculates and displays the total cost
// of the pizza with tax
#include <iomanip>
#include <iostream>
#include <cmath>


int main() {
    // declare constants
    const float HST = 0.13;
    const int LABOUR_COST = 2;
    const float RENTAL_COST = 2.25;
    const float INGREDIENT_COST = 1.5;

    // declare variables
    float diameter, subtotal, tax, total;

    // Input
    std::cout << "Enter the diameter of the pizza (inches): ";
    std::cin >> diameter;

    // Process
    subtotal = (diameter * INGREDIENT_COST + LABOUR_COST + RENTAL_COST);
    tax = HST * subtotal;
    total = subtotal + tax;

    // Output
    std::cout << "\nThe final cost is: $" << std::fixed << std::setprecision(2)
              << std::setfill('0') << total << std::endl;
}
