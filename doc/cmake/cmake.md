# cmake

### Brief description

The role of cmake is to make a plan for the project, and "compile and link" will follow this plan, so CMakeLists.txt is not necessarily executed in order, it only describes the plan.

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

## File Suffix

- .o文件：compile-time links
- .a文件：compiled links
- .so文件：run-time links

