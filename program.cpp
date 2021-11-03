// Copyright (c) 2021 Igor All rights reserved
//
// Created by: Igor
// Created on: Nov 2021
// This program is program

#include <iostream>

void triangle(float base, float height) {
    // This is function for area
    // output
    float area;
    area = base * height / 2;
    std::cout << "The area of the triangle is " << area << " cm²" << std::endl;
}


main() {
    std::string integer1;
    std::string integer2;
    float baseFromUser;
    float heightFromUser;
    float answer;

    // input
    std::cout << "Enter the base length of a triangle (cm): ";
    std::cin >> integer1;
    std::cout << "Enter the height of a triangle (cm): ";
    std::cin >> integer2;

    // process
    try {
        baseFromUser = std::stof(integer1);
        heightFromUser = std::stof(integer2);
        triangle(baseFromUser, heightFromUser);
    } catch (std::invalid_argument) {
        std::cout << "This was not a number" << std::endl;
    }

    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
