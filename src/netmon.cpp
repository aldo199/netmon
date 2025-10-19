#include "netmon.h"
#include <fstream>
#include <iostream>
#include <spdlog/spdlog.h>

double get_system_uptime_hours() {
    std::ifstream uptime_file("/proc/uptime");
    double uptime_seconds = 0.0;
    if (uptime_file >> uptime_seconds) {
        return uptime_seconds / 3600.0;
    } else {
        spdlog::error("Failed to read /proc/uptime");
        return -1.0;
    }
}

void print_system_info() {
    double hours = get_system_uptime_hours();
    if (hours >= 0)
        spdlog::info("System uptime: {:.2f} hours", hours);
}

