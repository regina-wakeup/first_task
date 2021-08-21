#include <sstream>

#include <gtest/gtest.h>

#include <hello.h>

TEST(Hello, simple) {
    std::stringstream ss;
    hello::greetings(ss, "12345");
    ASSERT_EQ("build 12345\nHello, world!", ss.str());
}
