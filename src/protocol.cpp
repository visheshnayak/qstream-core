#include "protocol.hpp"

int encode_message(int message) {
    return message ^ 0x55;
}

int decode_message(int message) {
    return message ^ 0x55;
}
