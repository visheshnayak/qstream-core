#pragma once

namespace qstream {
    inline constexpr int DEFAULT_PORT = 8554;

    inline int calculate_checksum(int value) {
        return value ^ 0x55;
    }

    inline int print_checksum() {
        return 0x55;
    }
}
