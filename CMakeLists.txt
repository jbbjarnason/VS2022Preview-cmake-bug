project(foo)

if(OPTION_SOME)
    message("hello world")
endif()

add_executable(foo main.cpp)