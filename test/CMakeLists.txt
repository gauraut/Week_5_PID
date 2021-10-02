set(GTEST_SHUFFLE 1)

add_executable(
    cpp-test
    main.cpp
    PIDControllerTest.cpp
    ../app/PIDController.cpp
    ../include/PIDController.h
)

target_include_directories(cpp-test PUBLIC ../vendor/googletest/googletest/include 
                                           ${CMAKE_SOURCE_DIR}/include
                                           ../include
                                           ../app)
target_link_libraries(cpp-test PUBLIC gtest)
