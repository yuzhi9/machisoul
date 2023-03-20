file(GLOB_RECURSE srcs CONFIGURE_DEPENDS src/*.cpp)

add_executable(console ${srcs})

target_include_directories(console PUBLIC include)

target_link_libraries(console PUBLIC array)