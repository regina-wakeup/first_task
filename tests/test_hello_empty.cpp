#include <sstream>

#include <gtest/gtest.h>

#include <hello.h>

TEST(Hello, simple_empty) {
    std::stringstream ss;
    hello::greetings(ss, "");
    ASSERT_EQ("Error: invalid build id\n", ss.str());
}
