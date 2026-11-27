#include <iostream>
#include <cstdint>
#include <bitset>

int main() {
    uint8_t x = 0b10101010;

    std::cout << "x before : " << std::bitset<8>(x) << "\n";

    x = x & (1u << 3);

    std::cout << "x : " << std::bitset<8>(x) << "\n";

    return 0;
}