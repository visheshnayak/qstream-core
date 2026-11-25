#include <iostream>
#include <limits>
#include <cstdint>

int main() {
    std::cout << "sizeof(char): " << sizeof(char) << "\n";
    std::cout << "sizeof(short): " << sizeof(short) << "\n";
    std::cout << "sizeof(int): " << sizeof(int) << "\n";
    std::cout << "sizeof(long): " << sizeof(long) << "\n";
    std::cout << "sizeof(long long): " << sizeof(long) << "\n";

    std::cout << "\n";

    std::cout << "int digits: " << std::numeric_limits<int>::digits << "\n";
    std::cout << "int minimum: " << std::numeric_limits<int>::max() << "\n";
    std::cout << "int maximum: " << std::numeric_limits<int>::min() << "\n";
    std::cout << "char bits: " << std::numeric_limits<unsigned char>::digits << "\n";

    struct PacketA {
        std::uint8_t type;
        std::uint32_t length;
        std::uint16_t checksum;
    };
    std::cout << "PacketA size: " << sizeof(PacketA) << "\n";
}
