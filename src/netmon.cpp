#include "netmon.h"
#include <iostream>
#include <fstream>
#include <string>

void print_system_info() {
    std::ifstream uptime_file("/proc/uptime");
    double uptime_seconds = 0.0;
    if (uptime_file >> uptime_seconds) {
        std::cout << "System uptime: " << uptime_seconds / 3600 << " hours" << std::endl;
    } else {
        std::cerr << "Failed to read /proc/uptime" << std::endl;
    }
}

