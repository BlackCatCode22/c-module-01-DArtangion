// Created by darta on 1/26/2025.
#include <iostream>

int main() {
    int userInt;

    std::cout << "Enter an integer: ";
    std::cin >> userInt;

    if (!std::cin) {
        std::cout << "Invalid input. Please enter a valid integer." << std::endl;
        return 1;
    }

    std::cout << "Double of " << userInt << " is " << userInt * 2 << std::endl;

    return 0;
}