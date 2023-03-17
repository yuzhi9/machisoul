file(GLOB_RECURSE srcs CONFIGURE_DEPENDS src/*.cpp)

add_library(arrays STATIC ${srcs})

target_include_directories(arrays PUBLIC include)