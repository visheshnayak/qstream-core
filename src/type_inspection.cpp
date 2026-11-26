#include <iostream>
#include <cstdint>
#include <cstddef>

int main() {
    struct PacketA {
        std::uint8_t type;
        std::uint32_t length;
        std::uint16_t checksum;
    };

    struct PacketB {
        std::uint32_t length;
        std::uint16_t checksum;
        std::uint8_t type;
    };

    std::cout << "Size: " << sizeof(PacketB) << "\n";
    std::cout << "Alignment: " << alignof(PacketB) << "\n";
    std::cout << "Type offset: " << offsetof(PacketB, type) << "\n";
    std::cout << "Length offset: " << offsetof(PacketB, length) << "\n";
    std::cout << "Checksum offset: " << offsetof(PacketB, checksum) << "\n";
}
