include(GoogleTest)

add_executable(SimpleGLTest applicationtest.cpp)

target_link_libraries(SimpleGLTest gtest gmock gtest_main)

gtest_add_tests(TARGET SimpleGLTest)
