#include <iostream>

#include "qstream/config.hpp"
#include "qstream/protocol.hpp"

extern int message_count;

void process_message();

int main() {
    int original = 42;

    int encoded = qstream::encode_message(original);
    int decoded = qstream::decode_message(encoded);

    std::cout << "Port: " << qstream::DEFAULT_PORT << "\n";
    std::cout << "XOR: " << qstream::print_checksum << "\n";
    std::cout << "Count: " << message_count << "\n";
    std::cout << "Original: " << original << "\n";
    std::cout << "Encoded: " << encoded << "\n";
    std::cout << "Decoded: " << decoded << "\n";

    return 0;
}