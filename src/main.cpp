#include "netmon.h"
#include <spdlog/spdlog.h>

int main() {
    spdlog::info("NetMon starting...");
    print_system_info();
    spdlog::info("NetMon finished successfully.");
    return 0;
}

