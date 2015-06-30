#include <iostream>
#include "base_conversion.hpp"

int main() {
    std::cout << "10100101 converts to " << convert_nbase_to_decimal("10100101", 2) << std::endl;
    std::cout << "232122011 base 4 converts to " << convert_nbase_to_decimal("232122011", 4) << std::endl;

    std::cout << "49 base 10 converts to " << convert_decimal_to_nbase(49, 4) << std::endl;
    std::cout << "48194850012 base 10 converts to base 3 " << convert_decimal_to_nbase(48194850012, 3) << std::endl;
    return 0;
}
