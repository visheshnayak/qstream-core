#include <iostream>
#include "protocol.hpp"

int main() {
    int message = 42;

    int encoded = encode_message(message);
    int decoded = decode_message(encoded);

    std::cout << "Original: " << message << "\n";
    std::cout << "Encoded: " << encoded << "\n";
    std::cout << "Decoded: " << decoded << "\n";

    return 0;
}