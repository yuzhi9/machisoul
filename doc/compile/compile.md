# Compile Fundamentals - 编译基础

Compilation narrowly refers to the translation of the source code into a language that can be recognized by the machine or virtual machine, while for C/C++, the commonly referred to "compilation" actually includes four steps: preprocessing, compilation, assembly, and linking, of which preprocessing is the processing of macro definitions in the source code that begin with the # identifier, including `#include <> # define` and so on; compilation is to translate the preprocessed source code into assembly language, assembly is to translate the compiled assembly language into machine code, the generated machine code file is called the target file, linking is to bring together the target file and the static library or dynamic library entry it depends on to generate an executable file or library. In daily development, after we write the source code, we can usually use the compiler to complete the above four steps in "one click", and this "one click" to complete things, we habitually called "compile".

编译狭义上是指将源代码翻译成机器或虚拟机可以识别的语言，而对于C/C++来说，常说的”编译“实际上包括预处理、编译、汇编、链接四个步骤，其中，预处理是处理源码中以#标识符开头的宏定义，包括`#include <> #define`等等；编译是将预处理后的源码翻译成汇编语言，汇编是指将编译后的汇编语言翻译成机器码，生成的这个机器码文件叫做目标文件，链接是将目标文件与其所依赖的静态库或者动态库入口汇集起来，生成可执行文件或者库。在日常的开发中，我们写完源码后，通常可以使用编译器”一键”完成以上四个步骤，这个”一键“完成的事情，我们习惯性称为“编译”。

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

## "make" command and Makefile

`make` command will execute the targets contained in the Makefile file in the current directory, as detailed in:

> [Makefile Tutorial By Example](https://makefiletutorial.com/)



`make` 命令将会执行当前目录下的Makefile文件包含的target，详细见：

> [Makefile Tutorial By Example](https://makefiletutorial.com/)

## "source" command

`source filePath` 将会执行对应文件的shell脚本，`filePath`不一定为可执行脚本。  

## File Suffix

- .o文件：compile-time links
- .a文件：compiled links
- .so文件：run-time links

## CMakeLists

```
cmake_minimum_required(VERSION <version number>)

project(<project name> <language>)

###
set(CMAKE_C_STANDARD <standard number>)
set(CMAKE_CXX_STANDARD <standard number>)
###

###
target_include_directories(<project name> PUBLIC/PRIVATE ${PROJECT_SOURCE_DIR}/include...)
###

###
add_executable(<out file> <source files>...)
add_library(<out file> <source files>...)
add_library(<out file> SHARED <source files>...)
###

target_link_libraries(<executable file> <libraries>...)
```





### 