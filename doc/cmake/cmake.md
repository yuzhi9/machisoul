# cmake

### 简述

cmake的作用是将项目做一个plan，“编译链接”时会按照这个plan进行，所以，CMakeLists.txt并不一定是按顺序执行的，它的作用只是描述plan

## gcc/g++

```
$ gcc -E <source> -o <file.i> #Pre-Processing
$ gcc -S <file.i> -o <file.s> #Compiling
$ gcc -c <file.s> -o <file.o> #Assembling
$ gcc <file.o> -o <file.out> #Linking

$ gcc -g <source> -o <file.out> #Debug
$ gcc -O<0/1/2/3/s> <source> -o <file.out> #Optimize

$ gcc -L[my lib directory] -l<lib> <source>
$ gcc -I<include directory> <source>
$ gcc -std=<standard> <source>
$ gcc -D<Macro> <source>
```

## CMakeLists

```cmake
cmake_minimum_required(VERSION <version number>)

project(<project name> <language>)

###
set(CMAKE_C_STANDARD <standard number>)
set(CMAKE_CXX_STANDARD <standard number>)
###

###
link_directories(${PROJECT_SOURCE_DIR}/lib)
include_directories(${PROJECT_SOURCE_DIR}/include)
###

###
add_executable(<out file> <source files>...)
add_library(<out file> <source files>...)
add_library(<out file> SHARED <source files>...)
###

target_link_libraries(<executable file> <libraries>...)
```

## 区别

- .o文件：编译时链接
- .a文件：编译后链接
- .so文件：运行时链接

