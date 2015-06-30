#include <iostream>
#include "base_conversion.hpp"

int main() {
    std::cout << "10100101 converts to " << convert_to_decimal("10100101", 2) << std::endl;
    std::cout << "232122011 base 4 converts to " << convert_to_decimal("232122011", 4) << std::endl;
    return 0;
}
