// Copyright (c) 2021 Abdul Basit All rights reserved.
//
// Created by: Abdul Basit
// Created on: Nov 2021
// this program tells about the triangle type

#include <iostream>

int main() {
    // This function tells about the triangle type
    // define variables
    int type;

    std::cout<< "We will find out the type of triangle" << std::endl;

    // input
    std::cout << "Enter the number of sides that are of same length: ";
    std::cin >> type;

    // process output
    if (type == 2) {
        std::cout <<"It is an Isosceles triangle." << std::endl;
    } else if (type == 3) {
        std::cout <<"It is an Equilateral triangle." << std::endl;
    } else if (type == 0) {
        std::cout << "It is a Scalene triangle" << std::endl;
    } else {
        std::cout << "It is not a triangle!"  << std::endl;
    }

    // output
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
