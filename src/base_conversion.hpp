#ifndef BASE_CONVERSION_HPP
#define BASE_CONVERSION_HPP

unsigned long convert_nbase_to_decimal(const std::string& original, int from_base);

std::string convert_decimal_to_nbase(unsigned long original, int to_base);

#endif
