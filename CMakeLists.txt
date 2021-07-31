cmake_minimum_required(VERSION 3.15)

project(SimpleGL LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Options
set(SIMPLEGL_BUILD_APPS OFF CACHE BOOL "Build application.")
set(SIMPLEGL_BUILD_DOCUMENTATION OFF CACHE BOOL "Build documentation.")
set(SIMPLEGL_BUILD_EXAMPLES OFF CACHE BOOL "Build examples.")
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

if(SIMPLEGL_BUILD_EXAMPLES)
    add_subdirectory(examples)
endif()

# Documentation
if(SIMPLEGL_BUILD_DOCUMENTATION)
    find_package(Doxygen REQUIRED dot)

	set(DOXYGEN_EXAMPLE_PATH examples)
	set(DOXYGEN_PROJECT_NAME "Simple Graphics Library")
	set(DOXYGEN_GENERATE_TODOLIST YES)
	set(DOXYGEN_USE_MDFILE_AS_MAINPAGE README.md)
	set(DOXYGEN_HAVE_DOT YES)
	set(DOXYGEN_HTML_TIMESTAMP YES)
    set(DOXYGEN_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/doc)

    doxygen_add_docs(
        documentation README.md
        simplegl/include
        COMMENT "Generate Doxygen")

    install(DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/doc DESTINATION .)
endif()
