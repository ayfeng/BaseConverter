#include <iostream>
#include "base_conversion.hpp"

int main() {
    std::string input_num;
    int from_base, to_base;
    std::string repeat;

    while(repeat != "n") {
        std::cout << "Welcome to Andy's base conversion program." << std::endl;

        std::cout << "Please enter a number you would like to convert: ";
        std::cin >> input_num;

        std::cout << "Please enter the base to convert from: ";
        std::cin >> from_base;

        std::cout << "Please enter the base to convert to: ";
        std::cin >> to_base;

        std::cout << "Result: " << convert_base(input_num, from_base, to_base) << std::endl;

        std::cout << "Would you like to convert another number? (y/n): ";
        std::cin >> repeat;
    }

    return 0;
}
