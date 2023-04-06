file(GLOB_RECURSE src CONFIGURE_DEPENDS src/*.c)

add_executable(console ${src})

target_include_directories(console PUBLIC include)

target_link_libraries(console PUBLIC array)