// Created by darta on 1/26/2025.
#include <iostream>

int main() {
    int int1, int2;

    std::cout << "Enter the first integer: ";
    std::cin >> int1;

    if (!std::cin) {
        std::cout << "Invalid input. Please enter a valid integer." << std::endl;
        return 1;
    }

    std::cout << "Enter the second integer: ";
    std::cin >> int2;

    if (!std::cin) {
        std::cout << "Invalid input. Please enter a valid integer." << std::endl;
        return 1;
    }

    std::cout << "The sum of " << int1 << " and " << int2 << " is " << int1 + int2 << std::endl;

    return 0;
}
