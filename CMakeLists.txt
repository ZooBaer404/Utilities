cmake_minimum_required(VERSION 3.12)

project(Utilities)

add_subdirectory(Algorithms)
add_subdirectory(Data_Structures)
add_subdirectory(Error)
add_subdirectory(Logger)
add_subdirectory(Memory_Management)
add_subdirectory(Parsers)
add_subdirectory(Standard)


set(CMAKE_C_FLAGS_RELEASE "-O2 -flto -march=native -mtune=native")
set(CMAKE_C_FLAGS_DEBUG "-DDEBUG -g -march=native -mtune=native -fstack-protector-strong -Wall -Wextra -pedantic -Werror -Wpointer-arith -Wcast-align -Wconversion -Wsign-conversion -Wunused -Wunused-parameter -Wunused-parameter -Wstrict-prototypes -Wshadow -Wfloat-equal -Winline -Wundef -fanalyzer -fsanitize=address,undefined,momory")
set(CMAKE_C_FLAGS "-Wall -Wextra -pedantic -Werror -Wpointer-arith -Wcast-align -Wconversion -Wsign-conversion -Wunused -Wunused-parameter -Wunused-parameter -Wstrict-prototypes -Wshadow -Wfloat-equal -Winline -Wundef -fanalyzer")
