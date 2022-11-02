project(foo)
cmake_minimum_required(VERSION 3.23)

if(OPTION_SOME)
    message("hello world")
endif()

add_executable(foo main.cpp)

add_executable(foo.test main.cpp)
target_compile_definitions(foo.test
    PUBLIC
        FOO_TESTING=1
)