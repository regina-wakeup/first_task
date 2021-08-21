add_executable(helloworld main.cpp)

target_include_directories(helloworld PUBLIC lib)
target_link_libraries(helloworld hello)