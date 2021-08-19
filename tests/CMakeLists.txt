add_executable(first_task_tests test_hello.cpp)
target_link_libraries(first_task_tests hello CONAN_PKG::gtest)
add_custom_target(
    test $<TARGET_FILE:first_task_tests> 
    DEPENDS first_task_tests
)
