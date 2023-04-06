file(GLOB_RECURSE src CONFIGURE_DEPENDS src/*.c)

add_library(array STATIC ${src})

target_include_directories(array PUBLIC include)