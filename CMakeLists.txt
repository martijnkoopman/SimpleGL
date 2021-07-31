cmake_minimum_required(VERSION 3.14)

project(SimpleGL LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Options
set(SIMPLEGL_BUILD_APPS OFF CACHE BOOL "Build application.")
set(SIMPLEGL_BUILD_DOCUMENTATION OFF CACHE BOOL "Build documentation.")
set(SIMPLEGL_BUILD_TESTS OFF CACHE BOOL "Build tests.")

add_subdirectory(thirdparty EXCLUDE_FROM_ALL)
add_subdirectory(simplegl)

if(SIMPLEGL_BUILD_APPS)
    add_subdirectory(apps)
endif()

if(SIMPLEGL_BUILD_TESTS)
    enable_testing()
    add_subdirectory(simplegl/test)
endif()

if(SIMPLEGL_BUILD_DOCUMENTATION)
    find_package(Doxygen REQUIRED dot)
    doxygen_add_docs(
        documentation
        simplegl/include
        COMMENT "Generate Doxygen")
	# TODO: Install by copy folder. install(DIRECTORY documentation)
endif()
