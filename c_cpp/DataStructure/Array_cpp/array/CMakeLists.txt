file(GLOB_RECURSE srcs CONFIGURE_DEPENDS src/*.cpp)

add_library(array STATIC ${srcs})

target_include_directories(array PUBLIC include)