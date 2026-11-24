#include <iostream>
#include "protocol.hpp"

int main() {
    int message = 42;

    int encoded = qstream::encode_message(message);
    int decoded = qstream::decode_message(encoded);

    std::cout << "Original: " << message << "\n";
    std::cout << "Encoded: " << encoded << "\n";
    std::cout << "Decoded: " << decoded << "\n";

    return 0;
}