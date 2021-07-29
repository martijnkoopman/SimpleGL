file(GLOB_RECURSE public_headers include/simplegl/*.h)
file(GLOB_RECURSE private_headers include/simplegl/private/*.h)
file(GLOB_RECURSE sources src/*.cpp)

add_library(simplegl SHARED
    include/simplegl_global.h
    ${public_headers}
    ${private_headers}
    ${sources}
)

target_compile_definitions(simplegl PRIVATE SIMPLEGL_LIBRARY)

target_link_libraries(simplegl glfw)

target_include_directories(simplegl PUBLIC include)
