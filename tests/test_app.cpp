#include <gtest/gtest.h>
#include "core.h"

// Example test
TEST(CoreTest, HelloTest) {
    testing::internal::CaptureStdout();
    Core::PrintHelloWorld();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Hello World!\n");
}

// Main function for GoogleTest
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}