# GLFW
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory(glfw-3.4.4)

# GoogleTest
if(SIMPLEGL_BUILD_TESTS)
    add_subdirectory(googletest-1.11.0)
endif()
