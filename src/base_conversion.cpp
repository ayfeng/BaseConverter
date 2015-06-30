#include <iostream>
#include <math.h>
#include "base_conversion.hpp"

const std::string value_map = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

unsigned long convert_to_decimal(const std::string& original, int from_base) {
    int rindex = 0;
    unsigned long result = 0;

    for (std::string::const_reverse_iterator it = original.rbegin(); it != original.rend(); ++it, ++rindex) {
        result = result + value_map.find(*it) * pow(from_base, rindex); 
    }

    return result;
}
