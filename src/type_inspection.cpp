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

    struct Packet {
        std::uint8_t type;
        std::uint32_t lenght;
        std::uint16_t checksum;
    };

    Packet p{0x12, 0x12345678, 0xABCD};
    
    auto* bytes = reinterpret_cast<unsigned char*>(&p);

    for (std::size_t i = 0; i < sizeof(Packet); ++i) {
        std::cout << "Offset " << i << ": " 
            << std::hex 
            << static_cast<int>(bytes[i])
            << "\n";
    }
}
