#include <gtest/gtest.h>
#include "netmon.h"

TEST(SystemInfoTest, UptimeIsPositive) {
    double hours = get_system_uptime_hours();
    EXPECT_GT(hours, 0.0);
}

