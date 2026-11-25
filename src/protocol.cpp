#include<iostream>

#include "qstream/protocol.hpp"
#include "qstream/config.hpp"

extern int message_count = 100;

static bool validate_message(int message) {
    return message >= 0;
}

namespace qstream {
    int encode_message(int message) {
        if (!validate_message(message))
            return -1;

        return calculate_checksum(message);
    }

    int decode_message(int message) {
        std::cout << print_checksum() << "\n";
        return calculate_checksum(message);
    }
}
