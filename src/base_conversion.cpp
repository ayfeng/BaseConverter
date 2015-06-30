#include <iostream>
#include <sstream>
#include <math.h>
#include "base_conversion.hpp"

const std::string value_map = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

unsigned long convert_nbase_to_decimal(const std::string& original, int from_base) {
    int rindex = 0; //keep track of which index we are on, rightmost=0, leftmost=n-1 of an n-length string
    unsigned long result = 0;

    for (std::string::const_reverse_iterator it = original.rbegin(); it != original.rend(); ++it, ++rindex) {
        result = result + value_map.find(*it) * pow(from_base, rindex); 
    }

    return result;
}

std::string convert_decimal_to_nbase(unsigned long original, int to_base) {
    std::string result = "";
    std::stringstream ss;

    while (original != 0) {//divide until num is not divisible by to_base
        ss << original%to_base;
        result.insert(0, ss.str()); //add to front of string
        ss.str(""); //clear the stringstream
        original /= to_base;
    }

    return result;
}

std::string convert_base(const std::string& original, int from_base, int to_base) {
    unsigned long original_number;
    if (from_base == to_base) //immediately return on same bases
        return original;

    if (from_base == 10) {
        std::stringstream ss;
        ss << from_base;
        ss >> original_number;
        ss.str(""); //clear stringstream
    } else {
        original_number = convert_nbase_to_decimal(original, from_base);
    }

    return convert_decimal_to_nbase(original_number, to_base);
}
