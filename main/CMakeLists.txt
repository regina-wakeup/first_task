add_executable(hello_build main.cpp)

target_include_directories(hello_build PUBLIC lib)
target_link_libraries(hello_build hello)